#pragma once
#include <iostream>
#include <string.h>
namespace Viktorina {

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
	private: System::Windows::Forms::Button^ Next_Button;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label1;


	private: int answer = 0; //���������� ������ ����� �������
	private: int vote = 0; //���������� ������ ����� ���������� �������

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Next_Button = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Next_Button
			// 
			this->Next_Button->Location = System::Drawing::Point(266, 206);
			this->Next_Button->Name = L"Next_Button";
			this->Next_Button->Size = System::Drawing::Size(115, 39);
			this->Next_Button->TabIndex = 0;
			this->Next_Button->Text = L"������";
			this->Next_Button->UseVisualStyleBackColor = true;
			this->Next_Button->Click += gcnew System::EventHandler(this, &MyForm::Next_Button_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 36);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"Hello world";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 72);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(156, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"���������� ����������";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 108);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(273, 43);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"\r\n��� ������ �������� ����������. \r\n����� ��������� ���� � ������� ������������";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(12, 157);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(317, 43);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->Text = L"\r\n��� ������ � ��������. �������� ��� � ������� ������, \r\n��������� ��� �� ��� ��"
				L"�.";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"����� � ��������. \r\n����� ������ ��������� ������ ����� ������������\?";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(393, 249);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->Next_Button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Next_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (answer){
		case 0:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton1->Checked == 1)vote++;
			this->label1->Text = "������ �� ���, ��� ��������� ����������������\n� ������� ���� � ��� ������?";
			//������ ������
			this->radioButton1->Text = "��, �������";
			this->radioButton2->Text = "���, ��� ����������";
			this->radioButton3->Visible = false;
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 1:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton2->Checked == 1)vote++;
			this->label1->Text = "������ �� ���, ��� ��������� ����������������\n� ������� ���� � ��� ������?";
			//������ ������
			this->radioButton1->Text = "������� ���� � ��������\n����� ����� � ���� �������";
			this->radioButton2->Text = "��������� �� ���� � �������� ������ ���";
			this->radioButton3->Visible = true;
			this->radioButton3->Text = "���� ������ ������ � �����������, ��� - �� ���\n������ ����";
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 2:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton3->Checked == 1)vote++;
			this->label1->Text = "����� ���������� ����� �� ������ ��� ��������?";
			//������ ������
			this->radioButton1->Text = "��";
			this->radioButton2->Text = "42";
			this->radioButton3->Text = "����� ���������� ����� �� ������ ��� ��������?";
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 3:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton3->Checked == 1)vote++;
			this->label1->Text = "���������� ����� ��� ���� ������. �� ��������� � \n� �������� ������� ������ ��� ���. ������� ������ ����� ������?";
			//������ ������
			this->radioButton1->Text = "���� ����, ������ ������ �� �����";
			this->radioButton2->Text = "����������";
			this->radioButton3->Visible = false;
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 4:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton2->Checked == 1)vote++;
			this->label1->Text = "�� ������ �� ������, ��� ������� ������ �������\n������ �����������. ��� ����� ������� � ��� ����?";
			//������ ������
			this->radioButton1->Text = "���� ������� �������� ������� ������, ����� ������ ���";
			this->radioButton2->Text = "��� ��� ������ ������, �� ��� ��� �����!";
			this->radioButton3->Visible = false;
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 5:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton2->Checked == 1)vote++;
			this->label1->Text = "����� ���� ��� ������. �� ���, ��� ����������, ����� ���.\n�� ������ � ����� �������� ����� ���?";
			//������ ������
			this->radioButton1->Text = "2";
			this->radioButton2->Text = "1";
			this->radioButton3->Visible = true;
			this->radioButton3->Text = "0";
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 6:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton2->Checked == 1)vote++;
			this->label1->Text = "������ ���� �������. ��� ����� ��� �������?";
			//������ ������
			this->radioButton1->Text = "���� � �������� �������";
			this->radioButton2->Text = "������� � ���, ��� ��� ����������� ������������ ��������\n� ����� ��������������� ����������� ����� ����������";
			this->radioButton3->Text = "���� ����� ������� � �������\n������������ ��������� Microsoft";
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 7:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton2->Checked == 1)vote++;
			this->label1->Text = "��� ����� �������?";
			//������ ������
			this->radioButton1->Text = "������������� ����-��������";
			this->radioButton2->Text = "������� �� ����������";
			this->radioButton3->Text = "��������� ���������� ���� �������";
			this->radioButton4->Visible = false;
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			//������ ����� ������
			this->Next_Button->Text = "���������";
			answer++;
			break;
		case 8:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton3->Checked == 1)vote++;
			this->label1->Text = "����� ������������ ����� �� ������������� �����\n�������� �������� ����� ����?";
			//������ ������
			this->radioButton1->Text = "5";
			this->radioButton2->Text = "4";
			this->radioButton3->Text = "31";
			this->radioButton4->Visible = true;
			this->radioButton4->Text = "32";
			//������������� ��� ������ � ����������� ���������
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			answer++;
			break;
		case 9:
			if (this->radioButton1->Checked == 0 && this->radioButton2->Checked == 0 && this->radioButton3->Checked == 0 && this->radioButton4->Checked == 0)return;
			if (this->radioButton3->Checked == 1)vote++;
			MessageBox::Show("���� �������� �� ������� " + System::Convert::ToString(vote) + "/10 ������");
			Application::Exit();
			break;
		}
	}
	};
}
