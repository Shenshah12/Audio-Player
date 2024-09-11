#pragma once
#include"Header.h"
#include<array>
#include<msclr\marshal_cppstd.h>
#include<fstream>
#include <algorithm>   
#include<string>
namespace AUdioPlayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ Songs;
	private: System::Windows::Forms::RadioButton^ USB;
	private: System::Windows::Forms::RadioButton^ CD;




	private: System::Windows::Forms::PictureBox^ Play;
	private: System::Windows::Forms::PictureBox^ Shuffle;
	private: System::Windows::Forms::PictureBox^ Delete;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ PlayList;
	private: System::Windows::Forms::PictureBox^ Add;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Songs = (gcnew System::Windows::Forms::ListBox());
			this->USB = (gcnew System::Windows::Forms::RadioButton());
			this->CD = (gcnew System::Windows::Forms::RadioButton());
			this->Play = (gcnew System::Windows::Forms::PictureBox());
			this->Shuffle = (gcnew System::Windows::Forms::PictureBox());
			this->Delete = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->PlayList = (gcnew System::Windows::Forms::PictureBox());
			this->Add = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Play))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Shuffle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(304, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 45);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Insight Audio Player";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(878, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"27AZ34";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(12, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(198, 186);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->textBox1->Location = System::Drawing::Point(303, 260);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(372, 22);
			this->textBox1->TabIndex = 8;
			// 
			// Songs
			// 
			this->Songs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Songs->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Songs->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Songs->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Songs->FormattingEnabled = true;
			this->Songs->ItemHeight = 22;
			this->Songs->Location = System::Drawing::Point(734, 177);
			this->Songs->Name = L"Songs";
			this->Songs->Size = System::Drawing::Size(251, 268);
			this->Songs->TabIndex = 9;
			this->Songs->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// USB
			// 
			this->USB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->USB->AutoSize = true;
			this->USB->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->USB->Font = (gcnew System::Drawing::Font(L"Garamond", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->USB->Location = System::Drawing::Point(6, 31);
			this->USB->Name = L"USB";
			this->USB->Size = System::Drawing::Size(68, 25);
			this->USB->TabIndex = 10;
			this->USB->TabStop = true;
			this->USB->Text = L"USB";
			this->USB->UseVisualStyleBackColor = false;
			this->USB->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// CD
			// 
			this->CD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CD->AutoSize = true;
			this->CD->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->CD->Font = (gcnew System::Drawing::Font(L"Garamond", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CD->Location = System::Drawing::Point(125, 31);
			this->CD->Name = L"CD";
			this->CD->Size = System::Drawing::Size(59, 25);
			this->CD->TabIndex = 11;
			this->CD->TabStop = true;
			this->CD->Text = L"CD";
			this->CD->UseVisualStyleBackColor = false;
			this->CD->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// Play
			// 
			this->Play->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Play.Image")));
			this->Play->Location = System::Drawing::Point(495, 374);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(75, 66);
			this->Play->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Play->TabIndex = 14;
			this->Play->TabStop = false;
			this->Play->Click += gcnew System::EventHandler(this, &MyForm::Play_Click);
			// 
			// Shuffle
			// 
			this->Shuffle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Shuffle.Image")));
			this->Shuffle->Location = System::Drawing::Point(303, 374);
			this->Shuffle->Name = L"Shuffle";
			this->Shuffle->Size = System::Drawing::Size(75, 66);
			this->Shuffle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Shuffle->TabIndex = 15;
			this->Shuffle->TabStop = false;
			this->Shuffle->Click += gcnew System::EventHandler(this, &MyForm::Shuffle_Click);
			// 
			// Delete
			// 
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->Location = System::Drawing::Point(594, 374);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(81, 66);
			this->Delete->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Delete->TabIndex = 16;
			this->Delete->TabStop = false;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox2->Controls->Add(this->USB);
			this->groupBox2->Controls->Add(this->CD);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(374, 191);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(196, 63);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Storage Media";
			// 
			// PlayList
			// 
			this->PlayList->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayList.Image")));
			this->PlayList->Location = System::Drawing::Point(397, 374);
			this->PlayList->Name = L"PlayList";
			this->PlayList->Size = System::Drawing::Size(80, 66);
			this->PlayList->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PlayList->TabIndex = 19;
			this->PlayList->TabStop = false;
			this->PlayList->Click += gcnew System::EventHandler(this, &MyForm::PlayList_Click);
			// 
			// Add
			// 
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->Location = System::Drawing::Point(440, 288);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(90, 80);
			this->Add->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Add->TabIndex = 20;
			this->Add->TabStop = false;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(997, 456);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->PlayList);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Shuffle);
			this->Controls->Add(this->Play);
			this->Controls->Add(this->Songs);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Audio Player";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Play))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Shuffle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = Songs->Text;

	}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (USB->Checked)
	{
		string song[3];

		song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
		song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
		song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";

		song[0] = song[0].substr(40, song[0].length());
		song[1] = song[1].substr(40, song[1].length());
		song[2] = song[2].substr(40, song[2].length());


		for (int i = 0; i <= 2; i++)
		{
			String^ str2 = gcnew String(song[i].c_str());

			Songs->Items->Add(str2);
			
		}	
		
	}
	else
	{
		Songs->Items->Clear();
	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (CD->Checked)
	{
		string song[3];

		song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
		song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
		song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";

		song[0] = song[0].substr(40, song[0].length());
		song[1] = song[1].substr(40, song[1].length());
		song[2] = song[2].substr(40, song[2].length());

		for (int i = 0; i <= 2; i++)
		{
			String^ str2 = gcnew String(song[i].c_str());
			Songs->Items->Add(str2);
		}
	}
	else
	{
		Songs->Items->Clear();
	}
}

private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e) 
{
	string song[4];

	song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
	song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
	song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";
	song[3] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\10-second-intro-music";

	song[0] = song[0].substr(40, song[0].length());
	song[1] = song[1].substr(40, song[1].length());
	song[2] = song[2].substr(40, song[2].length());
	song[3] = song[3].substr(40, song[3].length());

	textBox1->Text = Songs->SelectedItem->ToString();

	if (textBox1->Text == "BEST-INTRO-MUSIC-8-SECONDS_")
	{
		wstring Play = wstring(song[0].begin(), song[0].end());
		PlaySound(Play.c_str(), NULL, SND_SYNC);
	}
	if (textBox1->Text == "8-Second-Intro-music-8-Sec-intro-no-copyright")
	{

		wstring Play = wstring(song[1].begin(), song[1].end());
		PlaySound(Play.c_str(), NULL, SND_SYNC);
	}
	if (textBox1->Text == "5-sec-Intro-Music")
	{

		wstring Play = wstring(song[2].begin(), song[2].end());
		PlaySound(Play.c_str(), NULL, SND_SYNC);
	}
	if (textBox1->Text == "10-second-intro-music")
	{

		wstring Play = wstring(song[3].begin(), song[3].end());
		PlaySound(Play.c_str(), NULL, SND_SYNC);
	}
}
private: System::Void Shuffle_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (CD->Checked)
	{
		Songs->Sorted = true;
		this->Controls->Add(Songs);

			Songs->Sorted = false;
			this->Controls->Add(Songs);

	}
	else if(USB->Checked)
	{
			Songs->Sorted = true;
			this->Controls->Add(Songs);

			if (USB->Checked)
			{
				Songs->Sorted = false;
				this->Controls->Add(Songs);
			}
	}
}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Songs->Items->Remove(Songs->SelectedItem);
}

private: System::Void PlayList_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (USB->Checked)
	{
		string song[3];

		song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
		song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
		song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";

		song[0] = song[0].substr(40, song[0].length());
		song[1] = song[1].substr(40, song[1].length());
		song[2] = song[2].substr(40, song[2].length());

		
		for (int i = 0; i <= 3; i++)
		{

			wstring Play = wstring(song[i].begin(), song[i].end());
		    PlaySound(Play.c_str(), NULL, SND_SYNC);
		}
		
	}
}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (USB->Checked)
	{
		string song[4];

		song[3] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\10-second-intro-music";
		song[3] = song[3].substr(40, song[3].length());

		String^ str2 = gcnew String(song[3].c_str());

			Songs->Items->Add(str2);
	}
}
};
}
