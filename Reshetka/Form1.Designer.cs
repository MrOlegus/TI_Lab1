
namespace Rotate
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.spinSize = new System.Windows.Forms.NumericUpDown();
            this.textOrigin = new System.Windows.Forms.TextBox();
            this.textShifr = new System.Windows.Forms.TextBox();
            this.btnToOrigin = new System.Windows.Forms.Button();
            this.btnToShifr = new System.Windows.Forms.Button();
            this.Canvas = new System.Windows.Forms.PictureBox();
            this.radioRussia = new System.Windows.Forms.RadioButton();
            this.radioEnglish = new System.Windows.Forms.RadioButton();
            ((System.ComponentModel.ISupportInitialize)(this.spinSize)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Canvas)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(21, 528);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(292, 39);
            this.label1.TabIndex = 1;
            this.label1.Text = "Размер решетки:";
            // 
            // spinSize
            // 
            this.spinSize.Font = new System.Drawing.Font("Microsoft Sans Serif", 17F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.spinSize.Location = new System.Drawing.Point(454, 527);
            this.spinSize.Minimum = new decimal(new int[] {
            2,
            0,
            0,
            0});
            this.spinSize.Name = "spinSize";
            this.spinSize.Size = new System.Drawing.Size(76, 40);
            this.spinSize.TabIndex = 2;
            this.spinSize.Value = new decimal(new int[] {
            2,
            0,
            0,
            0});
            this.spinSize.ValueChanged += new System.EventHandler(this.numericUpDown1_ValueChanged);
            // 
            // textOrigin
            // 
            this.textOrigin.Font = new System.Drawing.Font("Consolas", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textOrigin.Location = new System.Drawing.Point(550, 12);
            this.textOrigin.Multiline = true;
            this.textOrigin.Name = "textOrigin";
            this.textOrigin.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textOrigin.Size = new System.Drawing.Size(544, 224);
            this.textOrigin.TabIndex = 3;
            // 
            // textShifr
            // 
            this.textShifr.Font = new System.Drawing.Font("Consolas", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textShifr.Location = new System.Drawing.Point(550, 349);
            this.textShifr.Multiline = true;
            this.textShifr.Name = "textShifr";
            this.textShifr.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textShifr.Size = new System.Drawing.Size(544, 224);
            this.textShifr.TabIndex = 4;
            // 
            // btnToOrigin
            // 
            this.btnToOrigin.BackgroundImage = global::Rotate.Properties.Resources.up1;
            this.btnToOrigin.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnToOrigin.Cursor = System.Windows.Forms.Cursors.Default;
            this.btnToOrigin.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btnToOrigin.Location = new System.Drawing.Point(829, 242);
            this.btnToOrigin.Name = "btnToOrigin";
            this.btnToOrigin.Size = new System.Drawing.Size(64, 101);
            this.btnToOrigin.TabIndex = 6;
            this.btnToOrigin.UseVisualStyleBackColor = true;
            this.btnToOrigin.Click += new System.EventHandler(this.btnToOrigin_Click);
            // 
            // btnToShifr
            // 
            this.btnToShifr.BackgroundImage = global::Rotate.Properties.Resources.down1;
            this.btnToShifr.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnToShifr.Cursor = System.Windows.Forms.Cursors.Default;
            this.btnToShifr.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btnToShifr.Location = new System.Drawing.Point(759, 242);
            this.btnToShifr.Name = "btnToShifr";
            this.btnToShifr.Size = new System.Drawing.Size(64, 101);
            this.btnToShifr.TabIndex = 5;
            this.btnToShifr.UseVisualStyleBackColor = true;
            this.btnToShifr.Click += new System.EventHandler(this.btnToShifr_Click);
            // 
            // Canvas
            // 
            this.Canvas.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.Canvas.Location = new System.Drawing.Point(12, 12);
            this.Canvas.Margin = new System.Windows.Forms.Padding(0);
            this.Canvas.Name = "Canvas";
            this.Canvas.Size = new System.Drawing.Size(535, 496);
            this.Canvas.TabIndex = 0;
            this.Canvas.TabStop = false;
            this.Canvas.Click += new System.EventHandler(this.Canvas_Click);
            this.Canvas.Paint += new System.Windows.Forms.PaintEventHandler(this.Canvas_Paint);
            // 
            // radioRussia
            // 
            this.radioRussia.AutoSize = true;
            this.radioRussia.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioRussia.Location = new System.Drawing.Point(838, 582);
            this.radioRussia.Name = "radioRussia";
            this.radioRussia.Size = new System.Drawing.Size(131, 33);
            this.radioRussia.TabIndex = 7;
            this.radioRussia.Text = "Русский";
            this.radioRussia.UseVisualStyleBackColor = true;
            // 
            // radioEnglish
            // 
            this.radioEnglish.AutoSize = true;
            this.radioEnglish.Checked = true;
            this.radioEnglish.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioEnglish.Location = new System.Drawing.Point(975, 582);
            this.radioEnglish.Name = "radioEnglish";
            this.radioEnglish.Size = new System.Drawing.Size(118, 33);
            this.radioEnglish.TabIndex = 8;
            this.radioEnglish.TabStop = true;
            this.radioEnglish.Text = "English";
            this.radioEnglish.UseVisualStyleBackColor = true;
            this.radioEnglish.CheckedChanged += new System.EventHandler(this.radioEnglish_CheckedChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::Rotate.Properties.Resources.background1;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1106, 626);
            this.Controls.Add(this.radioEnglish);
            this.Controls.Add(this.radioRussia);
            this.Controls.Add(this.btnToOrigin);
            this.Controls.Add(this.btnToShifr);
            this.Controls.Add(this.textShifr);
            this.Controls.Add(this.textOrigin);
            this.Controls.Add(this.spinSize);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.Canvas);
            this.Name = "Form1";
            this.Text = "RotateShifr";
            ((System.ComponentModel.ISupportInitialize)(this.spinSize)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Canvas)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox Canvas;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.NumericUpDown spinSize;
        private System.Windows.Forms.TextBox textOrigin;
        private System.Windows.Forms.TextBox textShifr;
        private System.Windows.Forms.Button btnToShifr;
        private System.Windows.Forms.Button btnToOrigin;
        private System.Windows.Forms.RadioButton radioRussia;
        private System.Windows.Forms.RadioButton radioEnglish;
    }
}

