#pragma once
#include "Delegat.h"
#include "Database.h"
#include "CountForm.h"

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� AddMaterialForm
	/// </summary>
	public ref class AddMaterialForm : public System::Windows::Forms::Form
	{
	private:
		returnMaterialData^ deleg;
	public:
		AddMaterialForm(returnMaterialData^ sender) {
			this->InitializeComponent();
			deleg = sender;
		};
	public:
		AddMaterialForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AddMaterialForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TreeView^ treeView1;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"�������� ��� ����� � ��������"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"�������� ��� ����� �� �������"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"�������� ��� ����� � �����"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"�������� ��� ��������� �����"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"�������� ��� ���������������� �����"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"��������� ����������"));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(676, 849);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 47;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(394, 852);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 26);
			this->label2->TabIndex = 46;
			this->label2->Text = L"������� ������ �������:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(794, 849);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 36);
			this->button6->TabIndex = 45;
			this->button6->Text = L"�����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AddMaterialForm::button6_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(390, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1450, 807);
			this->dataGridView2->TabIndex = 44;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddMaterialForm::dataGridView2_CellContentClick);
			this->dataGridView2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddMaterialForm::dataGridView2_MouseDoubleClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(109, 853);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 25);
			this->label4->TabIndex = 43;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(119, 852);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->Location = System::Drawing::Point(27, 852);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 41;
			this->label1->Text = L"�����:";
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(15, 12);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"����1";
			treeNode1->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode1->Text = L"�������� ��� ����� � ��������";
			treeNode2->Name = L"����2";
			treeNode2->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode2->Text = L"�������� ��� ����� �� �������";
			treeNode3->Name = L"����3";
			treeNode3->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode3->Text = L"�������� ��� ����� � �����";
			treeNode4->Name = L"����4";
			treeNode4->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode4->Text = L"�������� ��� ��������� �����";
			treeNode5->Name = L"����5";
			treeNode5->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode5->Text = L"�������� ��� ���������������� �����";
			treeNode6->Name = L"����6";
			treeNode6->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode6->Text = L"��������� ����������";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(6) {
				treeNode1, treeNode2, treeNode3,
					treeNode4, treeNode5, treeNode6
			});
			this->treeView1->Size = System::Drawing::Size(369, 807);
			this->treeView1->TabIndex = 40;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &AddMaterialForm::treeView1_AfterSelect);
			// 
			// AddMaterialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1882, 931);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->Name = L"AddMaterialForm";
			this->Text = L"AddMaterialForm";
			this->Load += gcnew System::EventHandler(this, &AddMaterialForm::AddMaterialForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Database^ db = gcnew Database();
		DataTable^ dtR;
		int count = 0;

	public: void GetDataNumericUpDown(String^ dataNum)
	{
		DataGridViewRow^ selectedRow = dataGridView2->SelectedRows[0];
		deleg(selectedRow, dataNum);
	}

	private: System::Void AddMaterialForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "����� ����������, �������";
		AddMaterialForm::Width = 975; //��������� ����������������� ������� �����
		AddMaterialForm::Height = 525;
		dataGridView2->AutoResizeColumns();//���������� ������
		dataGridView2->RowHeadersWidth = 5; // ���������� �������� ������ ������� �� ������

		db->openConnection();
		dataGridView2->DataSource = db->getTableMaterial();
		db->closeConnection();

		for (int i = 0; i < dataGridView2->Rows->Count - 6; i++)
		{
			count++;
		}
		label4->Text = count.ToString();
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		int id = Convert::ToInt32(treeView1->SelectedNode->Index);

		switch (id)
		{
		case 0:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[0]->Selected = true;
			break;
		}
		case 1:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[9]->Selected = true;
			break;
		}
		case 2:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[23]->Selected = true;
			break;
		}
		case 3:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[30]->Selected = true;
			break;
		}
		case 4:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[33]->Selected = true;
			break;
		}
		case 5:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[36]->Selected = true;
			break;
		}
		default:
		{
			MessageBox::Show("�� ���-�� ������ � ����");
		}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < dataGridView2->RowCount; i++)
		{
			dataGridView2->Rows[i]->Selected = false;
			for (int j = 0; j < dataGridView2->ColumnCount; j++)
				if (dataGridView2->Rows[i]->Cells[j]->Value != nullptr)
					if (dataGridView2->Rows[i]->Cells[j]->Value->ToString()->Contains(textBox1->Text))
					{
						dataGridView2->Rows[i]->Selected = true;
						break;
					}
		}
	}
	private: System::Void dataGridView2_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// �������� ��������� ������ �� DataGridView2 
		DataGridViewRow^ selectedRow = dataGridView2->SelectedRows[0];

		// �������� �������� � ������ "���� ���."
		if (selectedRow->Cells["���� ���."]->Value != DBNull::Value) {
			// ���� �������� �� ����� DBNull, �������� �������
			CountForm^ Cf = gcnew CountForm(gcnew returnNumber(this, &AddMaterialForm::GetDataNumericUpDown), selectedRow);
			Cf->ShowDialog();
		}
		else {
			// ���� �������� ����� DBNull, ���������� ���������
			MessageBox::Show("��������� �������");
			// ������� ������
			dataGridView2->ClearSelection();
			// ������������ ����� ����� �������� �� ������ ��� ������
		};

	}

	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
