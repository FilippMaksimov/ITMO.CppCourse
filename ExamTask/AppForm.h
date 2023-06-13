#pragma once
#include "student.h"
#include "dean.h"
#include "teacher.h"
#include "BrigdeAbstraction.h"
#include "human.h"
#include <string>
#include "RefinedAbstraction.h"
#include <io.h>

namespace ExamTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for AppForm
	/// </summary>
	public ref class AppForm : public System::Windows::Forms::Form
	{
	public:
		AppForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void MarshalString(String^, std::string&);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AppForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ typeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ teacherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deanToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ gradeTextBox;
	private: System::Windows::Forms::Label^ gradeLabel;

	private: System::Windows::Forms::TextBox^ workingTimeTextBox;
	private: System::Windows::Forms::TextBox^ subjectTextBox;
	private: System::Windows::Forms::TextBox^ AcademicDegreeTextBox;
	private: System::Windows::Forms::Label^ workingTimeLabel;
	private: System::Windows::Forms::Label^ subjectLabel;
	private: System::Windows::Forms::Label^ academicDegreeLabel;

	private: System::Windows::Forms::TextBox^ fucultyTextBox;
	private: System::Windows::Forms::Label^ fucultyLabel;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ TextRadioButton;

	private: System::Windows::Forms::RadioButton^ JsonRadioButton;
	private: System::Windows::Forms::TextBox^ NameTextBox;


	private: System::Windows::Forms::TextBox^ BirthDateTextBox;
	private: System::Windows::Forms::TextBox^ AddressTextBox;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::Label^ addressLabel;



	private: char menuStatus = NULL;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->typeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teacherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TextRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->JsonRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BirthDateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddressTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->addressLabel = (gcnew System::Windows::Forms::Label());
			this->fucultyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->fucultyLabel = (gcnew System::Windows::Forms::Label());
			this->gradeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->gradeLabel = (gcnew System::Windows::Forms::Label());
			this->workingTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->subjectTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AcademicDegreeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->workingTimeLabel = (gcnew System::Windows::Forms::Label());
			this->subjectLabel = (gcnew System::Windows::Forms::Label());
			this->academicDegreeLabel = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LightGray;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(704, 30);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->typeToolStripMenuItem });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 26);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// typeToolStripMenuItem
			// 
			this->typeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->teacherToolStripMenuItem,
					this->studentToolStripMenuItem, this->deanToolStripMenuItem
			});
			this->typeToolStripMenuItem->Name = L"typeToolStripMenuItem";
			this->typeToolStripMenuItem->Size = System::Drawing::Size(123, 26);
			this->typeToolStripMenuItem->Text = L"Type";
			// 
			// teacherToolStripMenuItem
			// 
			this->teacherToolStripMenuItem->Name = L"teacherToolStripMenuItem";
			this->teacherToolStripMenuItem->Size = System::Drawing::Size(143, 26);
			this->teacherToolStripMenuItem->Text = L"Teacher";
			this->teacherToolStripMenuItem->Click += gcnew System::EventHandler(this, &AppForm::teacherToolStripMenuItem_Click);
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(143, 26);
			this->studentToolStripMenuItem->Text = L"Student";
			this->studentToolStripMenuItem->Click += gcnew System::EventHandler(this, &AppForm::studentToolStripMenuItem_Click);
			// 
			// deanToolStripMenuItem
			// 
			this->deanToolStripMenuItem->Name = L"deanToolStripMenuItem";
			this->deanToolStripMenuItem->Size = System::Drawing::Size(143, 26);
			this->deanToolStripMenuItem->Text = L"Dean ";
			this->deanToolStripMenuItem->Click += gcnew System::EventHandler(this, &AppForm::deanToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 50);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hello! This is Adress book application. \r\nSelect position using Menu Bar below.";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AppForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"View List";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AppForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->textBox1->Location = System::Drawing::Point(437, 31);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(267, 484);
			this->textBox1->TabIndex = 6;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TextRadioButton);
			this->groupBox1->Controls->Add(this->JsonRadioButton);
			this->groupBox1->Location = System::Drawing::Point(133, 404);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(298, 76);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"File Type";
			// 
			// TextRadioButton
			// 
			this->TextRadioButton->AutoSize = true;
			this->TextRadioButton->Location = System::Drawing::Point(163, 32);
			this->TextRadioButton->Name = L"TextRadioButton";
			this->TextRadioButton->Size = System::Drawing::Size(54, 20);
			this->TextRadioButton->TabIndex = 1;
			this->TextRadioButton->TabStop = true;
			this->TextRadioButton->Text = L"Text";
			this->TextRadioButton->UseVisualStyleBackColor = true;
			// 
			// JsonRadioButton
			// 
			this->JsonRadioButton->AutoSize = true;
			this->JsonRadioButton->Location = System::Drawing::Point(19, 32);
			this->JsonRadioButton->Name = L"JsonRadioButton";
			this->JsonRadioButton->Size = System::Drawing::Size(64, 20);
			this->JsonRadioButton->TabIndex = 0;
			this->JsonRadioButton->TabStop = true;
			this->JsonRadioButton->Text = L"JSON";
			this->JsonRadioButton->UseVisualStyleBackColor = true;
			// 
			// NameTextBox
			// 
			this->NameTextBox->Location = System::Drawing::Point(115, 115);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(315, 22);
			this->NameTextBox->TabIndex = 8;
			// 
			// BirthDateTextBox
			// 
			this->BirthDateTextBox->Location = System::Drawing::Point(115, 143);
			this->BirthDateTextBox->Name = L"BirthDateTextBox";
			this->BirthDateTextBox->Size = System::Drawing::Size(315, 22);
			this->BirthDateTextBox->TabIndex = 9;
			// 
			// AddressTextBox
			// 
			this->AddressTextBox->Location = System::Drawing::Point(115, 171);
			this->AddressTextBox->Name = L"AddressTextBox";
			this->AddressTextBox->Size = System::Drawing::Size(315, 22);
			this->AddressTextBox->TabIndex = 10;
			this->AddressTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AppForm::AddressTextBox_Validating);
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(14, 121);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(44, 16);
			this->nameLabel->TabIndex = 11;
			this->nameLabel->Text = L"Name";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Location = System::Drawing::Point(14, 149);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(78, 16);
			this->dateLabel->TabIndex = 12;
			this->dateLabel->Text = L"Date of birth";
			// 
			// addressLabel
			// 
			this->addressLabel->AutoSize = true;
			this->addressLabel->Location = System::Drawing::Point(14, 177);
			this->addressLabel->Name = L"addressLabel";
			this->addressLabel->Size = System::Drawing::Size(58, 16);
			this->addressLabel->TabIndex = 13;
			this->addressLabel->Text = L"Address";
			// 
			// fucultyTextBox
			// 
			this->fucultyTextBox->Location = System::Drawing::Point(0, 0);
			this->fucultyTextBox->Name = L"fucultyTextBox";
			this->fucultyTextBox->Size = System::Drawing::Size(100, 22);
			this->fucultyTextBox->TabIndex = 0;
			// 
			// fucultyLabel
			// 
			this->fucultyLabel->Location = System::Drawing::Point(0, 0);
			this->fucultyLabel->Name = L"fucultyLabel";
			this->fucultyLabel->Size = System::Drawing::Size(100, 23);
			this->fucultyLabel->TabIndex = 0;
			// 
			// gradeTextBox
			// 
			this->gradeTextBox->Location = System::Drawing::Point(0, 0);
			this->gradeTextBox->Name = L"gradeTextBox";
			this->gradeTextBox->Size = System::Drawing::Size(100, 22);
			this->gradeTextBox->TabIndex = 0;
			// 
			// gradeLabel
			// 
			this->gradeLabel->Location = System::Drawing::Point(0, 0);
			this->gradeLabel->Name = L"gradeLabel";
			this->gradeLabel->Size = System::Drawing::Size(100, 23);
			this->gradeLabel->TabIndex = 0;
			// 
			// workingTimeTextBox
			// 
			this->workingTimeTextBox->Location = System::Drawing::Point(0, 0);
			this->workingTimeTextBox->Name = L"workingTimeTextBox";
			this->workingTimeTextBox->Size = System::Drawing::Size(100, 22);
			this->workingTimeTextBox->TabIndex = 0;
			// 
			// subjectTextBox
			// 
			this->subjectTextBox->Location = System::Drawing::Point(0, 0);
			this->subjectTextBox->Name = L"subjectTextBox";
			this->subjectTextBox->Size = System::Drawing::Size(100, 22);
			this->subjectTextBox->TabIndex = 0;
			// 
			// AcademicDegreeTextBox
			// 
			this->AcademicDegreeTextBox->Location = System::Drawing::Point(0, 0);
			this->AcademicDegreeTextBox->Name = L"AcademicDegreeTextBox";
			this->AcademicDegreeTextBox->Size = System::Drawing::Size(100, 22);
			this->AcademicDegreeTextBox->TabIndex = 0;
			// 
			// workingTimeLabel
			// 
			this->workingTimeLabel->Location = System::Drawing::Point(0, 0);
			this->workingTimeLabel->Name = L"workingTimeLabel";
			this->workingTimeLabel->Size = System::Drawing::Size(100, 23);
			this->workingTimeLabel->TabIndex = 0;
			// 
			// subjectLabel
			// 
			this->subjectLabel->Location = System::Drawing::Point(0, 0);
			this->subjectLabel->Name = L"subjectLabel";
			this->subjectLabel->Size = System::Drawing::Size(100, 23);
			this->subjectLabel->TabIndex = 0;
			// 
			// academicDegreeLabel
			// 
			this->academicDegreeLabel->Location = System::Drawing::Point(0, 0);
			this->academicDegreeLabel->Name = L"academicDegreeLabel";
			this->academicDegreeLabel->Size = System::Drawing::Size(100, 23);
			this->academicDegreeLabel->TabIndex = 0;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// AppForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 516);
			this->Controls->Add(this->addressLabel);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->AddressTextBox);
			this->Controls->Add(this->BirthDateTextBox);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AppForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Address book";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			//Save to File
			if (ValidateChildren(ValidationConstraints::Enabled))
			{
				Human* human;
				std::string name;
				std::string birth_date;
				std::string address;
				MarshalString(NameTextBox->Text, name);
				MarshalString(BirthDateTextBox->Text, birth_date);
				MarshalString(AddressTextBox->Text, address);
				if (menuStatus == 's')
				{
					std::string grade;
					MarshalString(gradeTextBox->Text, grade);
					human = new Student(grade);
					human->setName(name);
					human->setDateOfBirth(birth_date);
					human->setAddress(address);
				}
				else if (menuStatus == 't')
				{
					std::string w_time;
					std::string a_degree;
					std::string subj;
					MarshalString(workingTimeTextBox->Text, w_time);
					MarshalString(AcademicDegreeTextBox->Text, a_degree);
					MarshalString(subjectTextBox->Text, subj);
					human = new Teacher(w_time, a_degree, subj);
					human->setName(name);
					human->setDateOfBirth(birth_date);
					human->setAddress(address);
				}
				else if (menuStatus == 'd')
				{
					std::string fuculty;
					MarshalString(fucultyTextBox->Text, fuculty);
					human = new Dean(fuculty);
					human->setName(name);
					human->setDateOfBirth(birth_date);
					human->setAddress(address);
				}
				else
					MessageBox::Show("Category is not selected");

				BridgeAbstarction* abstraction;
				if (TextRadioButton->Checked == true)
				{
					abstraction = new BridgeAbstarction(human);
					abstraction->saveToFile();
					MessageBox::Show("Saved to Text file");
				}
				else if (JsonRadioButton->Checked == true)
				{
					abstraction = new RefinedAbstraction(human);
					abstraction->saveToFile();
					MessageBox::Show("Saved to JSON file");
				}
				else
					MessageBox::Show("File type is not selected to be saved");
				delete human;
				delete abstraction;
			}
			else
				MessageBox::Show("Not valid Addrees. Example: Saint Petersburg, Fontanka street, biulding 8, 52");
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			//Read from file
			String^ fileName;
			if (textBox1->Text != "")
				textBox1->Text = "";
			if (TextRadioButton->Checked == true)
				fileName = "Address.txt";
			else if (JsonRadioButton->Checked == true)
				fileName = "Address.json";
			else
				MessageBox::Show("File format is not selected!");
			try
			{
				System::IO::StreamReader^ in = System::IO::File::OpenText(fileName);
				String^ data;
				String^ empty = "\n";
				int count = 0;
				while ((data = in->ReadLine()) != nullptr)
				{
					count++;
					textBox1->Text += data + empty;
				}
			}
			catch (Exception^ e)
			{
				if (dynamic_cast<System::IO::FileNotFoundException^>(e))
					MessageBox::Show("File " + fileName + " not found");
			}
		}

		private: System::Void teacherToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (menuStatus == 's')
			{
				this->Controls->Remove(gradeTextBox);
				this->Controls->Remove(gradeLabel);
			}
			else if (menuStatus == 'd')
			{
				this->Controls->Remove(fucultyTextBox);
				this->Controls->Remove(fucultyLabel);
			}
			//workingTimeTextBox and workingTimeLabel
			this->workingTimeTextBox->Location = System::Drawing::Point(115, 199);
			this->workingTimeTextBox->Name = L"workingTimeTextBox";
			this->workingTimeTextBox->Size = System::Drawing::Size(315, 22);
			this->workingTimeTextBox->TabIndex = 14;

			this->workingTimeLabel->Location = System::Drawing::Point(14, 205);
			this->workingTimeLabel->Name = L"workingTimeLabel";
			this->workingTimeLabel->Size = System::Drawing::Size(80, 16);
			this->workingTimeLabel->TabIndex = 15;
			this->workingTimeLabel->Text = L"Working time";

			this->Controls->Add(this->workingTimeTextBox);
			this->Controls->Add(this->workingTimeLabel);
			//subjectTextBox and subjectLabel
			this->subjectTextBox->Location = System::Drawing::Point(115, 227);
			this->subjectTextBox->Name = L"subjectTextBox";
			this->subjectTextBox->Size = System::Drawing::Size(315, 22);
			this->subjectTextBox->TabIndex = 16;

			this->subjectLabel->Location = System::Drawing::Point(14, 233);
			this->subjectLabel->Name = L"subjectLabel";
			this->subjectLabel->Size = System::Drawing::Size(44, 16);
			this->subjectLabel->TabIndex = 17;
			this->subjectLabel->Text = L"Subject";

			this->Controls->Add(this->subjectLabel);
			this->Controls->Add(this->subjectTextBox);
			//AcademicDegreeTextBox and academicDegreeLabel
			this->AcademicDegreeTextBox->Location = System::Drawing::Point(115, 255);
			this->AcademicDegreeTextBox->Name = L"AcademicDegreeTextBox";
			this->AcademicDegreeTextBox->Size = System::Drawing::Size(315, 22);
			this->AcademicDegreeTextBox->TabIndex = 18;

			this->academicDegreeLabel->Location = System::Drawing::Point(14, 261);
			this->academicDegreeLabel->Name = L"academicDegreeLabel";
			this->academicDegreeLabel->Size = System::Drawing::Size(100, 16);
			this->academicDegreeLabel->TabIndex = 19;
			this->academicDegreeLabel->Text = L"Academic degree";

			this->Controls->Add(this->academicDegreeLabel);
			this->Controls->Add(this->AcademicDegreeTextBox);

			menuStatus = 't';
		}

		private: System::Void studentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (menuStatus == 't')
			{
				this->Controls->Remove(workingTimeTextBox);
				this->Controls->Remove(subjectTextBox);
				this->Controls->Remove(AcademicDegreeTextBox);
				this->Controls->Remove(workingTimeLabel);
				this->Controls->Remove(subjectLabel);
				this->Controls->Remove(academicDegreeLabel);
			}
			else if (menuStatus == 'd')
			{
				this->Controls->Remove(fucultyTextBox);
				this->Controls->Remove(fucultyLabel);
			}
			this->gradeTextBox->Location = System::Drawing::Point(115, 199);
			this->gradeTextBox->Name = L"gradeTextBox";
			this->gradeTextBox->Size = System::Drawing::Size(315, 22);
			this->gradeTextBox->TabIndex = 14;

			this->gradeLabel->Location = System::Drawing::Point(14, 205);
			this->gradeLabel->Name = L"gradeLabel";
			this->gradeLabel->Size = System::Drawing::Size(44, 16);
			this->gradeLabel->TabIndex = 15;
			this->gradeLabel->Text = L"Grade";

			this->Controls->Add(this->gradeTextBox);
			this->Controls->Add(this->gradeLabel);

			menuStatus = 's';
		}

		private: System::Void deanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (menuStatus == 't')
			{
				this->Controls->Remove(workingTimeTextBox);
				this->Controls->Remove(subjectTextBox);
				this->Controls->Remove(AcademicDegreeTextBox);
				this->Controls->Remove(workingTimeLabel);
				this->Controls->Remove(subjectLabel);
				this->Controls->Remove(academicDegreeLabel);
			}
			else if (menuStatus == 's')
			{
				this->Controls->Remove(gradeTextBox);
				this->Controls->Remove(gradeLabel);
			}
			this->fucultyTextBox->Location = System::Drawing::Point(115, 199);
			this->fucultyTextBox->Name = L"fucultyTextBox";
			this->fucultyTextBox->Size = System::Drawing::Size(315, 22);
			this->fucultyTextBox->TabIndex = 14;

			this->fucultyLabel->Location = System::Drawing::Point(14, 205);
			this->fucultyLabel->Name = L"fucultyLabel";
			this->fucultyLabel->Size = System::Drawing::Size(44, 16);
			this->fucultyLabel->TabIndex = 15;
			this->fucultyLabel->Text = L"Fuculty";

			this->Controls->Add(this->fucultyTextBox);
			this->Controls->Add(this->fucultyLabel);

			menuStatus = 'd';
		}
		private: System::Void AddressTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			int count = 0;
			String^ d = AddressTextBox->Text->ToString();
			for (int i = 0; i < d->Length; i++)
			{
				if (d[i] == ',')
					count++;
			}
			if (count!=3)
			{
				e->Cancel = true;
				AddressTextBox->Focus();
				errorProvider1->SetError(AddressTextBox, "Invalid format. Please enter with the following template:" +
					"(City), (Street), #(Building No), (#Flat)");
			}
			else
			{
				e->Cancel = false;
				errorProvider1->Clear();
			}
		}
};
}
