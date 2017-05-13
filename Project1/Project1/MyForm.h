#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;


	/// <summary>
	/// Summary for MyForm
	/// </summary>


	std::string fileName = "Безымянный";
	std::string path = "Безымянный.txt";

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::RichTextBox^  richTextBox1;









	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;



















	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  вырезатьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  копироватьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  вставитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  парметрыСтраницыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  печатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  копироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вырезатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вставитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  форматToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  отменитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  времяИДатаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  переносПоСловаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  шрифтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  посмотретьСправкуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->вырезатьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->копироватьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->парметрыСтраницыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->печатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->копироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вырезатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->отменитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->времяИДатаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->форматToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переносПоСловаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->посмотретьСправкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Location = System::Drawing::Point(0, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(431, 261);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->вырезатьToolStripMenuItem1,
					this->копироватьToolStripMenuItem1, this->вставитьToolStripMenuItem1, this->удалитьToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(140, 92);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			this->contextMenuStrip1->Click += gcnew System::EventHandler(this, &MyForm::contextMenuStrip1_Click);
			// 
			// вырезатьToolStripMenuItem1
			// 
			this->вырезатьToolStripMenuItem1->Name = L"вырезатьToolStripMenuItem1";
			this->вырезатьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->вырезатьToolStripMenuItem1->Text = L"Вырезать";
			this->вырезатьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			// 
			// копироватьToolStripMenuItem1
			// 
			this->копироватьToolStripMenuItem1->Name = L"копироватьToolStripMenuItem1";
			this->копироватьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->копироватьToolStripMenuItem1->Text = L"Копировать";
			this->копироватьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			// 
			// вставитьToolStripMenuItem1
			// 
			this->вставитьToolStripMenuItem1->Name = L"вставитьToolStripMenuItem1";
			this->вставитьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->вставитьToolStripMenuItem1->Text = L"Вставить";
			this->вставитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem1
			// 
			this->удалитьToolStripMenuItem1->Name = L"удалитьToolStripMenuItem1";
			this->удалитьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->удалитьToolStripMenuItem1->Text = L"Удалить";
			this->удалитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Текстовые файлы|*.txt|Все типы файлов|*.*";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Текстовые файлы|*.txt|Все типы файлов|*.*";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->создатьToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->toolStripMenuItem1,
					this->парметрыСтраницыToolStripMenuItem, this->печатьToolStripMenuItem, this->toolStripMenuItem2, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть...";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(195, 6);
			// 
			// парметрыСтраницыToolStripMenuItem
			// 
			this->парметрыСтраницыToolStripMenuItem->Name = L"парметрыСтраницыToolStripMenuItem";
			this->парметрыСтраницыToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->парметрыСтраницыToolStripMenuItem->Text = L"Парметры страницы...";
			this->парметрыСтраницыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::парметрыСтраницыToolStripMenuItem_Click);
			// 
			// печатьToolStripMenuItem
			// 
			this->печатьToolStripMenuItem->Name = L"печатьToolStripMenuItem";
			this->печатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->печатьToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->печатьToolStripMenuItem->Text = L"Печать...";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(195, 6);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->копироватьToolStripMenuItem,
					this->вырезатьToolStripMenuItem, this->вставитьToolStripMenuItem, this->удалитьToolStripMenuItem, this->toolStripMenuItem3, this->отменитьToolStripMenuItem,
					this->времяИДатаToolStripMenuItem
			});
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->правкаToolStripMenuItem->Text = L"Правка";
			// 
			// копироватьToolStripMenuItem
			// 
			this->копироватьToolStripMenuItem->Name = L"копироватьToolStripMenuItem";
			this->копироватьToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->копироватьToolStripMenuItem->Text = L"Вырезать";
			this->копироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			// 
			// вырезатьToolStripMenuItem
			// 
			this->вырезатьToolStripMenuItem->Name = L"вырезатьToolStripMenuItem";
			this->вырезатьToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->вырезатьToolStripMenuItem->Text = L"Копировать";
			this->вырезатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			// 
			// вставитьToolStripMenuItem
			// 
			this->вставитьToolStripMenuItem->Name = L"вставитьToolStripMenuItem";
			this->вставитьToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->вставитьToolStripMenuItem->Text = L"Вставить";
			this->вставитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(166, 6);
			// 
			// отменитьToolStripMenuItem
			// 
			this->отменитьToolStripMenuItem->Name = L"отменитьToolStripMenuItem";
			this->отменитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->отменитьToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->отменитьToolStripMenuItem->Text = L"Отменить";
			this->отменитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отменитьToolStripMenuItem_Click);
			// 
			// времяИДатаToolStripMenuItem
			// 
			this->времяИДатаToolStripMenuItem->Name = L"времяИДатаToolStripMenuItem";
			this->времяИДатаToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->времяИДатаToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->времяИДатаToolStripMenuItem->Text = L"Время и дата";
			this->времяИДатаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::времяИДатаToolStripMenuItem_Click);
			// 
			// форматToolStripMenuItem
			// 
			this->форматToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->переносПоСловаToolStripMenuItem,
					this->шрифтToolStripMenuItem
			});
			this->форматToolStripMenuItem->Name = L"форматToolStripMenuItem";
			this->форматToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->форматToolStripMenuItem->Text = L"Формат";
			// 
			// переносПоСловаToolStripMenuItem
			// 
			this->переносПоСловаToolStripMenuItem->Name = L"переносПоСловаToolStripMenuItem";
			this->переносПоСловаToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->переносПоСловаToolStripMenuItem->Text = L"Перенос по словам...";
			this->переносПоСловаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::переносПоСловаToolStripMenuItem_Click);
			// 
			// шрифтToolStripMenuItem
			// 
			this->шрифтToolStripMenuItem->Name = L"шрифтToolStripMenuItem";
			this->шрифтToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->шрифтToolStripMenuItem->Text = L"Шрифт";
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->видToolStripMenuItem->Text = L"Вид ";
			this->видToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::видToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->посмотретьСправкуToolStripMenuItem,
					this->toolStripMenuItem4, this->оПрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// посмотретьСправкуToolStripMenuItem
			// 
			this->посмотретьСправкуToolStripMenuItem->Name = L"посмотретьСправкуToolStripMenuItem";
			this->посмотретьСправкуToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->посмотретьСправкуToolStripMenuItem->Text = L"Посмотреть справку";
			this->посмотретьСправкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::посмотретьСправкуToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(185, 6);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->форматToolStripMenuItem, this->видToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(431, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 283);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void видToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void парметрыСтраницыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 static System::String^ stdToSys(std::string str )
		 {
			return ((System::String^)gcnew System::String(str.c_str()));
		 }
		 
		 static const std::string sysToStd(System::String^ SysStr)
		 {
			 return (const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(SysStr)).ToPointer();
		 }


private: System::Void создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
    System::Windows::Forms::DialogResult Result;
	Result=MessageBox::Show("Сохранить изменения в файле "+((System::String^)gcnew System::String(fileName.c_str()))+" ?", "Блокнот",MessageBoxButtons::YesNoCancel);
	switch (Result)
	{
	case System::Windows::Forms::DialogResult::Yes :
		if(path=="Безымянный.txt")
		if (saveFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
		{
			path=sysToStd(saveFileDialog1->FileName);
			richTextBox1->SaveFile(stdToSys(path), RichTextBoxStreamType::PlainText);
		}
		break;
	case System::Windows::Forms::DialogResult::No :
		richTextBox1->Clear();
		break;
	case System::Windows::Forms::DialogResult::Cancel :
		break;
	}

			}
		private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				path = sysToStd(openFileDialog1->FileName);
				fileName= sysToStd(openFileDialog1->FileName);//обрезать путь к файлу к его имени 
				richTextBox1->LoadFile(stdToSys(path), RichTextBoxStreamType::PlainText);
			}
		}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (path == "Безымянный.txt") {
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				path = sysToStd(saveFileDialog1->FileName);
				richTextBox1->SaveFile(stdToSys(path), RichTextBoxStreamType::PlainText);
			}
		}
			else {
				richTextBox1->SaveFile(stdToSys(path), RichTextBoxStreamType::PlainText);
			}
		
	 }
 private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	 {
		 path = sysToStd(saveFileDialog1->FileName);
		 richTextBox1->SaveFile(stdToSys(path), RichTextBoxStreamType::PlainText);
	 }
 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult Result;
	Result = MessageBox::Show("Сохранить изменения в файле " + ((System::String^)gcnew System::String(fileName.c_str())) + "перед выходом ?", "Блокнот", MessageBoxButtons::YesNoCancel);
	switch (Result)
	{
	case System::Windows::Forms::DialogResult::Yes:
		if (path == "Безымянный.txt")
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				path = sysToStd(saveFileDialog1->FileName);
				richTextBox1->SaveFile(stdToSys(path), RichTextBoxStreamType::PlainText);
				Application::Exit();
			}
		break;
	case System::Windows::Forms::DialogResult::No:
		richTextBox1->Clear();
		Application::Exit();
		break;
	case System::Windows::Forms::DialogResult::Cancel:
		break;
	}
	   
			}
		private: System::Void копироватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			richTextBox1->Cut();
			}
		private: System::Void вырезатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			richTextBox1->Copy();
		}
private: System::Void вставитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Paste();
}
private: System::Void удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->SelectedText = ""; 
}
private: System::Void contextMenuStrip1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void посмотретьСправкуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("hello world"); 
	//TODO: tell about a program with beautiful font

}
private:   PictureBox^ pictureBox1; System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^ e) {
	MessageBox::Show("About myself...");
	
}
private: System::Void отменитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Undo();
}
private: System::Void времяИДатаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SYSTEMTIME lt;
	GetLocalTime(&lt);
	this->richTextBox1->Text = ("" + lt.wHour + ":" + lt.wMinute + ":" + lt.wSecond+"");
}
private: System::Void переносПоСловаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
	}
