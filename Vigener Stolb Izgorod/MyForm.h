#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <String>

char ln = 'r';

#pragma once

namespace Vigener {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::TextBox^ textBoxStart;
	private: System::Windows::Forms::TextBox^ textBoxFinish;
	private: System::Windows::Forms::TextBox^ textBoxKey;

	private: System::Windows::Forms::Button^ buttonClear1;
	private: System::Windows::Forms::Button^ buttonClear2;
	private: System::Windows::Forms::TextBox^ textBoxKeyField;
	private: System::Windows::Forms::Button^ buttonCrypt;
	private: System::Windows::Forms::Button^ buttonDecrypt;

	private: System::Windows::Forms::RadioButton^ radio1;
	private: System::Windows::Forms::RadioButton^ radio2;
	private: System::Windows::Forms::RadioButton^ radio3;
	private: System::Windows::Forms::TextBox^ textCorrectKey;
	private: System::Windows::Forms::ComboBox^ combo;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStart = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFinish = (gcnew System::Windows::Forms::TextBox());
			this->textBoxKey = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear1 = (gcnew System::Windows::Forms::Button());
			this->buttonClear2 = (gcnew System::Windows::Forms::Button());
			this->textBoxKeyField = (gcnew System::Windows::Forms::TextBox());
			this->buttonCrypt = (gcnew System::Windows::Forms::Button());
			this->buttonDecrypt = (gcnew System::Windows::Forms::Button());
			this->radio1 = (gcnew System::Windows::Forms::RadioButton());
			this->radio2 = (gcnew System::Windows::Forms::RadioButton());
			this->radio3 = (gcnew System::Windows::Forms::RadioButton());
			this->textCorrectKey = (gcnew System::Windows::Forms::TextBox());
			this->combo = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 124);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 249);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(584, 124);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(445, 249);
			this->textBox2->TabIndex = 1;
			// 
			// textBoxStart
			// 
			this->textBoxStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxStart->Location = System::Drawing::Point(117, 80);
			this->textBoxStart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxStart->Name = L"textBoxStart";
			this->textBoxStart->ReadOnly = true;
			this->textBoxStart->Size = System::Drawing::Size(227, 38);
			this->textBoxStart->TabIndex = 4;
			this->textBoxStart->Text = L"Исходный текст";
			// 
			// textBoxFinish
			// 
			this->textBoxFinish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFinish->Location = System::Drawing::Point(648, 80);
			this->textBoxFinish->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxFinish->Name = L"textBoxFinish";
			this->textBoxFinish->ReadOnly = true;
			this->textBoxFinish->Size = System::Drawing::Size(323, 38);
			this->textBoxFinish->TabIndex = 5;
			this->textBoxFinish->Text = L"Зашифрованный текст";
			// 
			// textBoxKey
			// 
			this->textBoxKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxKey->Location = System::Drawing::Point(351, 437);
			this->textBoxKey->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxKey->Name = L"textBoxKey";
			this->textBoxKey->ReadOnly = true;
			this->textBoxKey->Size = System::Drawing::Size(83, 37);
			this->textBoxKey->TabIndex = 6;
			this->textBoxKey->Text = L"Ключ";
			// 
			// buttonClear1
			// 
			this->buttonClear1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear1->Location = System::Drawing::Point(151, 380);
			this->buttonClear1->Margin = System::Windows::Forms::Padding(4);
			this->buttonClear1->Name = L"buttonClear1";
			this->buttonClear1->Size = System::Drawing::Size(149, 39);
			this->buttonClear1->TabIndex = 8;
			this->buttonClear1->Text = L"очистить";
			this->buttonClear1->UseVisualStyleBackColor = true;
			this->buttonClear1->Click += gcnew System::EventHandler(this, &MyForm::buttonClear1_Click);
			// 
			// buttonClear2
			// 
			this->buttonClear2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear2->Location = System::Drawing::Point(736, 380);
			this->buttonClear2->Margin = System::Windows::Forms::Padding(4);
			this->buttonClear2->Name = L"buttonClear2";
			this->buttonClear2->Size = System::Drawing::Size(149, 39);
			this->buttonClear2->TabIndex = 9;
			this->buttonClear2->Text = L"очистить";
			this->buttonClear2->UseVisualStyleBackColor = true;
			this->buttonClear2->Click += gcnew System::EventHandler(this, &MyForm::buttonClear2_Click);
			// 
			// textBoxKeyField
			// 
			this->textBoxKeyField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxKeyField->Location = System::Drawing::Point(457, 437);
			this->textBoxKeyField->Margin = System::Windows::Forms::Padding(4);
			this->textBoxKeyField->Name = L"textBoxKeyField";
			this->textBoxKeyField->Size = System::Drawing::Size(245, 37);
			this->textBoxKeyField->TabIndex = 10;
			// 
			// buttonCrypt
			// 
			this->buttonCrypt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCrypt.BackgroundImage")));
			this->buttonCrypt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonCrypt->Location = System::Drawing::Point(469, 188);
			this->buttonCrypt->Margin = System::Windows::Forms::Padding(4);
			this->buttonCrypt->Name = L"buttonCrypt";
			this->buttonCrypt->Size = System::Drawing::Size(108, 53);
			this->buttonCrypt->TabIndex = 11;
			this->buttonCrypt->UseVisualStyleBackColor = true;
			this->buttonCrypt->Click += gcnew System::EventHandler(this, &MyForm::buttonCrypt_Click);
			// 
			// buttonDecrypt
			// 
			this->buttonDecrypt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDecrypt.BackgroundImage")));
			this->buttonDecrypt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDecrypt->Location = System::Drawing::Point(469, 249);
			this->buttonDecrypt->Margin = System::Windows::Forms::Padding(4);
			this->buttonDecrypt->Name = L"buttonDecrypt";
			this->buttonDecrypt->Size = System::Drawing::Size(108, 53);
			this->buttonDecrypt->TabIndex = 12;
			this->buttonDecrypt->UseVisualStyleBackColor = true;
			this->buttonDecrypt->Click += gcnew System::EventHandler(this, &MyForm::buttonDecrypt_Click);
			// 
			// radio1
			// 
			this->radio1->AutoSize = true;
			this->radio1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio1->Location = System::Drawing::Point(17, 14);
			this->radio1->Margin = System::Windows::Forms::Padding(4);
			this->radio1->Name = L"radio1";
			this->radio1->Size = System::Drawing::Size(180, 33);
			this->radio1->TabIndex = 13;
			this->radio1->TabStop = true;
			this->radio1->Text = L"Столбцовый";
			this->radio1->UseVisualStyleBackColor = true;
			// 
			// radio2
			// 
			this->radio2->AutoSize = true;
			this->radio2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio2->Location = System::Drawing::Point(445, 14);
			this->radio2->Margin = System::Windows::Forms::Padding(4);
			this->radio2->Name = L"radio2";
			this->radio2->Size = System::Drawing::Size(153, 33);
			this->radio2->TabIndex = 14;
			this->radio2->TabStop = true;
			this->radio2->Text = L"Виженера";
			this->radio2->UseVisualStyleBackColor = true;
			// 
			// radio3
			// 
			this->radio3->AutoSize = true;
			this->radio3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio3->Location = System::Drawing::Point(887, 14);
			this->radio3->Margin = System::Windows::Forms::Padding(4);
			this->radio3->Name = L"radio3";
			this->radio3->Size = System::Drawing::Size(145, 33);
			this->radio3->TabIndex = 15;
			this->radio3->TabStop = true;
			this->radio3->Text = L"Изгородь";
			this->radio3->UseVisualStyleBackColor = true;
			// 
			// textCorrectKey
			// 
			this->textCorrectKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textCorrectKey->Location = System::Drawing::Point(351, 489);
			this->textCorrectKey->Name = L"textCorrectKey";
			this->textCorrectKey->ReadOnly = true;
			this->textCorrectKey->Size = System::Drawing::Size(351, 34);
			this->textCorrectKey->TabIndex = 16;
			// 
			// combo
			// 
			this->combo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->combo->FormattingEnabled = true;
			this->combo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Русский", L"English" });
			this->combo->Location = System::Drawing::Point(887, 499);
			this->combo->Name = L"combo";
			this->combo->Size = System::Drawing::Size(142, 39);
			this->combo->TabIndex = 17;
			this->combo->Text = L"Русский";
			this->combo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1045, 553);
			this->Controls->Add(this->combo);
			this->Controls->Add(this->textCorrectKey);
			this->Controls->Add(this->radio3);
			this->Controls->Add(this->radio2);
			this->Controls->Add(this->radio1);
			this->Controls->Add(this->buttonDecrypt);
			this->Controls->Add(this->buttonCrypt);
			this->Controls->Add(this->textBoxKeyField);
			this->Controls->Add(this->buttonClear2);
			this->Controls->Add(this->buttonClear1);
			this->Controls->Add(this->textBoxKey);
			this->Controls->Add(this->textBoxFinish);
			this->Controls->Add(this->textBoxStart);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Шифрование";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion







		bool isLR(wchar_t letter)
		{
			String^ a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
			for (int i = 0; i < a->Length; i++)
				if (a[i] == letter)
					return true;
			return false;
		}

		bool isBR(wchar_t letter)
		{
			String^ a = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
			for (int i = 0; i < a->Length; i++)
				if (a[i] == letter)
					return true;
			return false;
		}

		wchar_t down(wchar_t letter)
		{
			String^ a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
			String^ A = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
			for (int i = 0; i < a->Length; i++)
				if (A[i] == letter)
					return a[i];
			return 0;
		}

		int getInt(String^ s)
		{
			int sum = 0;
			int st = 1;
			for (int i = s->Length - 1; i >= 0; i--)
			{
				char c = s[i];
				sum += st * (c - '0');
				st *= 10;
			}
			return sum;
		}

		String^ changeS(String^ s, int k, String^ newS)
		{
			String^ res = gcnew String("");
			String^ part1 = s->Substring(0, k);
			String^ part2 = s->Substring(k + 1, s->Length - k - 1);
			res = part1 + newS + part2;
			return res;
		}

		int shift(wchar_t c, char ln)
		{
			if (ln == 'e') return c - 'a';
			else
			{
				String^ a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
				for (int i = 0; i < a->Length; i++)
					if (a[i] == c) return i;
			}
		}

		wchar_t getLetter(int sh, char ln)
		{
			if (ln == 'e') return sh + 'a';
			else
			{
				String^ a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
				return a[sh];
			}
		}

		String^ english(String^ s)
		{
			String^ newS = gcnew String("");
			for (int i = 0; i < s->Length; i++)
				if ((s[i] >= 'a') && (s[i] <= 'z'))
				{
					newS += s[i];
				}
				else
					if ((s[i] >= 'A') && (s[i] <= 'Z'))
					{
						wchar_t letter = s[i] - 'A' + 'a';
						newS += letter;
					}

			return newS;
		}

		String^ russia(String^ s)
		{
			String^ newS = gcnew String("");

			for (int i = 0; i < s->Length; i++)
				if (isLR(s[i]))
				{
					newS += s[i];
				}
				else
					if (isBR(s[i]))
					{
						newS += down(s[i]);
					}

			return newS;
		}

		String^ numbers(String^ s)
		{
			String^ newS = gcnew String("");
			for (int i = 0; i < s->Length; i++)
				if ((s[i] >= '0') && (s[i] <= '9'))
				{
					newS += s[i];
				}

			return newS;
		}

		int findMin(String^ key)
		{
			int minInd = 0;
			for (int i = 0; i < key->Length; i++)
				if (key[i] < key[minInd])
				{
					minInd = i;
				}
			return minInd;
		}

		String^ getCryptSt(String^ start, String^ key, char ln)
		{
			String^ copyKey = key;
			String^ finish = gcnew String("");
			if (ln == 'e')
			start = english(start); else
				start = russia(start);

			wchar_t s = 65535;

			for (int i = 0; i < copyKey->Length; i++)
			{
				int k = findMin(copyKey);
				String^ bigLetter = gcnew String("");
				bigLetter += s;
				copyKey = changeS(copyKey, k, bigLetter);

				for (int j = k; j < start->Length; j += copyKey->Length)
				{
					finish += start[j];
				}
			}

			return finish;
		}

		String^ getDecryptSt(String^ start, String^ key, char ln)
		{
			String^ copyKey = key;
			String^ finish = gcnew String("");
			int num[500] = {};
			if (ln == 'e')
				start = english(start); else
				start = russia(start);

			int len = 0;
			wchar_t s = 65535;

			for (int i = 0; i < copyKey->Length; i++)
			{
				int k = findMin(copyKey);
				String^ st = gcnew String("");
				st += s;
				copyKey = changeS(copyKey, k, st);
				for (int j = k; j < start->Length; j += copyKey->Length)
				{
					num[len] = j;
					len++;
				}
			}

			for (int i = 0; i < start->Length; i++)
				finish += " ";

			for (int i = 0; i < start->Length; i++)
			{
				String^ letter = gcnew String("");
				letter += start[i];
				finish = changeS(finish, num[i], letter);
			}

			return finish;
		}

		String^ getCryptVg(String^ start, String^ key, char ln)
		{
			
			String^ finish = gcnew String("");
			int alLen;
			if (ln == 'e')
			{
				alLen = 26;
				start = english(start);
			} else
			{
				alLen = 33;
				start = russia(start);
			}

			for (int i = 0; i < start->Length; i++)
			{
				int sh = (shift(start[i], ln) + shift(key[i], ln)) % alLen;
				finish += getLetter(sh, ln);
				key += start[i];
			}

			return finish;
		}

		String^ getDecryptVg(String^ start, String^ key, char ln)
		{
			String^ finish = gcnew String("");
			
			int alLen;
			if (ln == 'e')
			{
				alLen = 26;
				start = english(start);
			}
			else
			{
				alLen = 33;
				start = russia(start);

			}

			for (int i = 0; i < start->Length; i++)
			{
				int sh = (shift(start[i], ln) - shift(key[i], ln) + alLen) % alLen;
				wchar_t letter = getLetter(sh, ln);
				finish += letter;
				key += letter;
			}

			return finish;
		}

		String^ getCryptZl(String^ start, int key, char ln)
		{
			String^ newS;
			if (ln == 'e')
				newS = english(start); else
				newS = russia(start);

			String^ finish = gcnew String("");
			int length = newS->Length + key;
			for (int i = 0; i <= key; i++)
				newS += " ";

			int step;
			if (key != 1) step = key * 2 - 2; else
				step = 1;

			int i = 0;
			while (i < length)
			{
				if (newS[i] != ' ')
				{
					wchar_t letter = newS[i];
					finish += letter;
				}
				newS = changeS(newS, i, "$");
				
				i += step;
			}

			bool was = true;
			while (was)
			{
				for (int i = 1; i < length; i++)
					if (newS[i] != '$')
						if (newS[i - 1] == '$')
						{
							if (newS[i] != ' ')
							{
								wchar_t m = newS[i];
								finish += m;
							}
							newS = changeS(newS, i, "#");
						}
						else
							if (newS[i + 1] == '$')
							{
								if (newS[i] != ' ')
								{
									wchar_t m = newS[i];
									finish += m;
								}
								newS = changeS(newS, i, "#");
							}

				was = false;

				for (int j = 0; j < length; j++)
					if (newS[j] == '#')
					{
						newS = changeS(newS, j, "$");
						was = true;
					}
			}

			return finish;
		}

		String^ getDecryptZl(String^ start, int key, char ln)
		{
			String^ newS;
			if (ln == 'e')
				newS = english(start); else
				newS = russia(start);

			String^ cNewS = newS;
			int num[500] = {};
			int len = 0;
			int length = newS->Length + key;
			for (int i = 0; i <= key; i++)
				newS += " ";

			int step;
			if (key != 1) step = key * 2 - 2; else
				step = 1;
			int i = 0;

			while (i < length)
			{

				if (newS[i] != ' ')
				{
					num[len] = i;
					len++;
				}
				newS = changeS(newS, i, "$");
				
				i += step;
			}

			bool was = true;
			while (was)
			{
				for (int i = 1; i < length; i++)
					if (newS[i] != '$')
						if (newS[i - 1] == '$')
						{
							if (newS[i] != ' ')
							{
								num[len] = i;
								len++;
							}
							newS = changeS(newS, i, "#");
						}
						else
							if (newS[i + 1] == '$')
							{
								if (newS[i] != ' ')
								{
									num[len] = i;
									len++;
								}
								newS = changeS(newS, i, "#");
							}

				was = false;

				for (int j = 0; j < length; j++)
					if (newS[j] == '#')
					{
						newS = changeS(newS, j, "$");
						was = true;
					}
			}

			String^ finish = gcnew String("");
			for (int i = 0; i < cNewS->Length; i++)
				finish += " ";

			for (int i = 0; i < cNewS->Length; i++)
			{
				wchar_t m[2] = { cNewS[i] };
				finish = changeS(finish, num[i], gcnew String(m));
			}

			return finish;
		}











	private: System::Void buttonCrypt_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ key = textBoxKeyField->Text;
		String^ start = textBox1->Text;
		String^ finish = gcnew String("");
		if (radio1->Checked)
		{
			String^ correctKey;
			if (ln == 'r') correctKey = russia(key); else
				           correctKey = english(key);

			if ((correctKey == key) && (key != ""))
			{
				finish = getCryptSt(start, correctKey, ln);
				textCorrectKey->BackColor = System::Drawing::Color::Green;
				textCorrectKey->Text = "Корректный ключ";
			}
			else
				if (correctKey != "")
				{
					finish = getCryptSt(start, correctKey, ln);
					textCorrectKey->BackColor = System::Drawing::Color::Yellow;
					textCorrectKey->Text = "Использован ключ " + correctKey;
				}
				else
				{
					textCorrectKey->BackColor = System::Drawing::Color::Red;
					textCorrectKey->Text = "Некорректный ключ";
				}
		}
		else
			if (radio2->Checked)
			{
				String^ correctKey;
				if (ln == 'r') correctKey = russia(key); else
				               correctKey = english(key);

				if ((correctKey == key) && (key != ""))
				{
					textCorrectKey->BackColor = System::Drawing::Color::Green;
					finish = getCryptVg(start, correctKey, ln);
					textCorrectKey->Text = "Корректный ключ";
				}
				else
					if (correctKey != "")
					{
						textCorrectKey->BackColor = System::Drawing::Color::Yellow;
						finish = getCryptVg(start, correctKey, ln);
						textCorrectKey->Text = "Использован ключ " + correctKey;
					}
					else
					{
						textCorrectKey->BackColor = System::Drawing::Color::Red;
						textCorrectKey->Text = "Некорректный ключ";
					}
			}
			else
			{
				String^ correctKey = numbers(key);

				if ((correctKey == key) && (key != ""))
				{
					textCorrectKey->BackColor = System::Drawing::Color::Green;
					finish = getCryptZl(start, getInt(correctKey), ln);
					textCorrectKey->Text = "Корректный ключ";
				}
				else
					if (correctKey != "")
					{
						textCorrectKey->BackColor = System::Drawing::Color::Yellow;
						finish = getCryptZl(start, getInt(correctKey), ln);
						textCorrectKey->Text = "Использован ключ " + correctKey;
					}
					else
					{
						textCorrectKey->BackColor = System::Drawing::Color::Red;
						textCorrectKey->Text = "Некорректный ключ";
					}
			}

		textBox2->Text = finish;
	}
	private: System::Void buttonDecrypt_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ key = textBoxKeyField->Text;
		String^ start = textBox2->Text;
		String^ finish = gcnew String("");
		if (radio1->Checked)
		{
			String^ correctKey;
			if (ln == 'r') correctKey = russia(key); else
			               correctKey = english(key);

			if ((correctKey == key) && (key != ""))
			{
				textCorrectKey->BackColor = System::Drawing::Color::Green;
				finish = getDecryptSt(start, correctKey, ln);
				textCorrectKey->Text = "Корректный ключ";
			}
			else
				if (correctKey != "")
				{
					textCorrectKey->BackColor = System::Drawing::Color::Yellow;
					finish = getDecryptSt(start, correctKey, ln);
					textCorrectKey->Text = "Использован ключ " + correctKey;
				}
				else
				{
					textCorrectKey->BackColor = System::Drawing::Color::Red;
					textCorrectKey->Text = "Некорректный ключ";
				}
		}
		else
			if (radio2->Checked)
			{
				String^ correctKey;
				if (ln == 'r') correctKey = russia(key); else
					           correctKey = english(key);

				if ((correctKey == key) && (key != ""))
				{
					textCorrectKey->BackColor = System::Drawing::Color::Green;
					finish = getDecryptVg(start, correctKey, ln);
					textCorrectKey->Text = "Корректный ключ";
				}
				else
					if (correctKey != "")
					{
						textCorrectKey->BackColor = System::Drawing::Color::Yellow;
						finish = getDecryptVg(start, correctKey, ln);
						textCorrectKey->Text = "Использован ключ " + correctKey;
					}
					else
					{
						textCorrectKey->BackColor = System::Drawing::Color::Red;
						textCorrectKey->Text = "Некорректный ключ";
					}
			}
			else
			{
				String^ correctKey = numbers(key);
				if ((correctKey == key) && (key != ""))
				{
					textCorrectKey->BackColor = System::Drawing::Color::Green;
					finish = getDecryptZl(start, getInt(correctKey), ln);
					textCorrectKey->Text = "Корректный ключ";
				}
				else
					if (correctKey != "")
					{
						textCorrectKey->BackColor = System::Drawing::Color::Yellow;
						finish = getDecryptZl(start, getInt(correctKey), ln);
						textCorrectKey->Text = "Использован ключ " + correctKey;
					}
					else
					{
						textCorrectKey->BackColor = System::Drawing::Color::Red;
						textCorrectKey->Text = "Некорректный ключ";
					}
			}

		textBox1->Text = finish;
	}

	private: System::Void buttonClear1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
	}

	private: System::Void buttonClear2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (combo->Text == "Русский") ln = 'r';
		                         else ln = 'e';
	}
};
}
