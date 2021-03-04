using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Rotate
{
    public partial class Form1 : Form
    {
        static String eAlphabet = "abcdefghijklmnopqrstuvwxyz";
        static String rAlphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
        static String alphabet = eAlphabet;
        struct Cell
        {
            private static Random rnd = new Random();

            public int n;
            public bool isUsed;
            public char letter;

            public void Init(int n)
            {
                this.n = n;
                this.isUsed = false;
                this.letter = alphabet[rnd.Next(0, alphabet.Length - 1)];
            }
        }
        Cell[,] table;
        int size = 2;
        int maxValue = 1;
        int len = 400;
        float d = 200;

        public Form1()
        {
            InitializeComponent();
            Canvas.Width = 400;
            Canvas.Height = 400;
            numericUpDown1_ValueChanged(Canvas, new EventArgs());
            Canvas.BackColor = Color.FromArgb(83, 188, 226, 1);
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            size = (int)spinSize.Value;
            table = new Cell[size, size];

            int value = 0;
            for (int j = 0; j < (size + 1) / 2; j++)
                for (int i = 0; i < size / 2; i++)
                {
                    value++;
                    table[i, j].Init(value);
                    table[size - j - 1, i].Init(value);
                    table[j, size - i - 1].Init(value);
                    table[size - i - 1, size - j - 1].Init(value);
                }
            maxValue = value;
            if (size % 2 != 0) table[size / 2, size / 2].Init(++value);
            Canvas.Invalidate();
        }

        private void Canvas_Paint(object sender, PaintEventArgs e)
        {
            d = len / (float)size;
            Graphics graph = e.Graphics;
            for (int i = 0; i < size; i++)
                graph.DrawLine(new Pen(Color.Black), i * d, 0, i * d, len);
            for (int i = 0; i < size; i++)
                graph.DrawLine(new Pen(Color.Black), 0, i * d, len, i * d);
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    graph.DrawString(table[i, j].n.ToString(),
                                     new Font("Arial Black",
                                              180 / size,
                                              FontStyle.Regular,
                                              GraphicsUnit.Point),
                                     new SolidBrush(table[i, j].isUsed ? Color.Red : Color.Black), 
                                     new Point((int)(j * d), (int)(i * d)));
        }

        private Point GetPos(Object sender)
        {
            const int leftBorder = 9;
            const int topBorder = 31;
            Point pos = new Point();
            pos.X = Cursor.Position.X -
                (this.Location.X + ((PictureBox)sender).Location.X) - leftBorder;
            pos.Y = Cursor.Position.Y -
                (this.Location.Y + ((PictureBox)sender).Location.Y) - topBorder;
            return pos;
        }

        bool IsOnlyOne (int i, int j, Cell[,] table)
        {
            if (table[size - j - 1, i].isUsed) return false;
            if (table[j, size - i - 1].isUsed) return false;
            if (table[size - i - 1, size - j - 1].isUsed) return false;
            return true;
        }

        private void Canvas_Click(object sender, EventArgs e)
        {
            Point pos = GetPos(sender);
            int i = (int)(Math.Round((double)pos.Y) / d);
            int j = (int)(Math.Round((double)pos.X) / d);
            if ((size % 2 == 0) || (i != size / 2) || (j != size / 2))
            if (IsOnlyOne(i, j, table)) table[i, j].isUsed = !table[i, j].isUsed;
            ((PictureBox)sender).Invalidate();
        }

        int QIsUsed(Cell[,] table)
        {
            int qUsed = 0;
            for (int i = 0; i < table.GetLength(0); i++)
                for (int j = 0; j < table.GetLength(1); j++)
                    if (table[i, j].isUsed) qUsed++;
            return qUsed;
        }

        private String DelSpace(String text)
        {
            String res = "";
            for (int i = 0; i < text.Length; i++)
                if (alphabet.IndexOf(text[i]) != -1) res += text[i];
            res = res.ToLower();
            return res;
        }

        private Cell[,] Rotate (Cell[,] table)
        {
            int size = table.GetLength(0);
            Cell[,] newTable = new Cell[size, size];
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                {
                    newTable[i, j].n = table[i, j].n;
                    newTable[i, j].isUsed = false;
                    newTable[i, j].letter = table[i, j].letter;
                }

            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    if (table[i, j].isUsed)
                    {
                        newTable[j, size - i - 1].isUsed = true;
                    }
            return newTable;
        }

        void DisplayTable(Cell[,] table)
        {
            int size = table.GetLength(0);
            String res = "";
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    //if (table[i, j].isUsed) res += "1";
                    //else res += "0";
                    res += table[i, j].letter;
                    res += "  ";
                }
                res += "\r\n";
            }
            textShifr.Text += res;
        }

        private void btnToShifr_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                {
                    bool isUsed = table[i, j].isUsed;
                    table[i, j].Init(table[i, j].n);
                    table[i, j].isUsed = isUsed;
                }

            String origin = DelSpace(textOrigin.Text);
            if (origin.Length > QIsUsed(table) * 4)
            {
                MessageBox.Show("Недостаточно места, чтобы зашифровать сообщение!");
                return;
            }

            Cell[,] newTable = table;
            int pos = 0;
            while (pos < origin.Length)
            {
                for (int i = 0; i < size; i++)
                    for (int j = 0; j < size; j++)
                    {
                        if ((newTable[i, j].isUsed) && (pos < origin.Length))
                        {
                            newTable[i, j].letter = origin[pos];
                            pos++;
                        }
                    }
                newTable = Rotate(newTable);
            }

            String finish = "";
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                {
                    finish += newTable[i, j].letter;
                }

            textShifr.Text = finish + "\r\n\r\n";
            DisplayTable(newTable);

            Canvas.Invalidate();
        }

        private void radioEnglish_CheckedChanged(object sender, EventArgs e)
        {
            if (((RadioButton)sender).Checked == true) alphabet = eAlphabet;
            else alphabet = rAlphabet;

            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    {
                        bool isUsed = table[i, j].isUsed;
                        table[i, j].Init(table[i, j].n);
                        table[i, j].isUsed = isUsed;
                    }
        }

        private void btnToOrigin_Click(object sender, EventArgs e)
        {
            String shifr = textShifr.Lines[0];

            Cell[,] newTable = table;
            int k = 0;
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                {
                    table[i, j].letter = shifr[k];
                    k++;
                }

            String origin = "";
            for (int l = 0; l < 4; l++)
            {
                for (int i = 0; i < size; i++)
                    for (int j = 0; j < size; j++)
                    {
                        if (newTable[i, j].isUsed)
                        {
                            origin += newTable[i, j].letter;
                        }
                    }
                newTable = Rotate(newTable);
            }

            textOrigin.Text = origin + "\r\n\r\n";
            //DisplayTable(newTable);
        }
    }
}