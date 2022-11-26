#pragma once

namespace OPO2SUMproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ loginPanel;
	protected:
	private: System::Windows::Forms::Label^ loginPasswordLabel;
	private: System::Windows::Forms::TextBox^ loginPasswordTextBox;
	private: System::Windows::Forms::TextBox^ loginUsernameTextBox;
	private: System::Windows::Forms::Label^ loginUsernameLabel;
	private: System::Windows::Forms::Label^ loginLoginLabel;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ loginRegisterButton;
	private: System::Windows::Forms::Panel^ managerTablePanel;
	private: System::Windows::Forms::TabControl^ managerTabControl;
	private: System::Windows::Forms::TabPage^ clientMTabPage;
	private: System::Windows::Forms::TabPage^ orderMTabPage;
	private: System::Windows::Forms::TabPage^ stockMTabPage;
	private: System::Windows::Forms::TabPage^ statisticMTabPage;
	private: System::Windows::Forms::DataGridView^ clientMDGV;
	private: System::Windows::Forms::Button^ clientMResearchButton;
	private: System::Windows::Forms::Button^ clientMAddButton;
	private: System::Windows::Forms::Panel^ addClientPanel;
	private: System::Windows::Forms::Label^ addClientTitleLabel;
	private: System::Windows::Forms::Button^ addClientExitButton;
	private: System::Windows::Forms::Label^ addClientLNameLabel;
	private: System::Windows::Forms::Label^ addClientFNameLabel;
	private: System::Windows::Forms::Button^ addClient;
	private: System::Windows::Forms::TextBox^ addClientBirthdateTextBox;
	private: System::Windows::Forms::TextBox^ addClientLNameTextBox;
	private: System::Windows::Forms::TextBox^ addClientFNameTextBox;
	private: System::Windows::Forms::Label^ addClientBirthdateLabel;
	private: System::Windows::Forms::Label^ clientMCityLabel;
	private: System::Windows::Forms::Label^ clientMLNameLabel;
	private: System::Windows::Forms::Label^ clientMFNameLabel;
	private: System::Windows::Forms::TextBox^ clientMCityTextBox;
	private: System::Windows::Forms::TextBox^ clientMLNameTextBox;
	private: System::Windows::Forms::TextBox^ clientMFNameTextBox;








	private: System::ComponentModel::IContainer^ components;

	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			this->loginPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->loginLoginLabel = (gcnew System::Windows::Forms::Label());
			this->addClientPanel = (gcnew System::Windows::Forms::Panel());
			this->addClient = (gcnew System::Windows::Forms::Button());
			this->addClientBirthdateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addClientLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addClientFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addClientBirthdateLabel = (gcnew System::Windows::Forms::Label());
			this->addClientLNameLabel = (gcnew System::Windows::Forms::Label());
			this->addClientFNameLabel = (gcnew System::Windows::Forms::Label());
			this->addClientTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addClientExitButton = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->managerTablePanel = (gcnew System::Windows::Forms::Panel());
			this->managerTabControl = (gcnew System::Windows::Forms::TabControl());
			this->clientMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->clientMCityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMCityLabel = (gcnew System::Windows::Forms::Label());
			this->clientMLNameLabel = (gcnew System::Windows::Forms::Label());
			this->clientMFNameLabel = (gcnew System::Windows::Forms::Label());
			this->clientMAddButton = (gcnew System::Windows::Forms::Button());
			this->clientMResearchButton = (gcnew System::Windows::Forms::Button());
			this->clientMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->orderMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->stockMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->statisticMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->loginPanel->SuspendLayout();
			this->addClientPanel->SuspendLayout();
			this->managerTablePanel->SuspendLayout();
			this->managerTabControl->SuspendLayout();
			this->clientMTabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->BeginInit();
			this->SuspendLayout();
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->loginRegisterButton);
			this->loginPanel->Controls->Add(this->loginPasswordLabel);
			this->loginPanel->Controls->Add(this->loginPasswordTextBox);
			this->loginPanel->Controls->Add(this->loginUsernameTextBox);
			this->loginPanel->Controls->Add(this->loginUsernameLabel);
			this->loginPanel->Controls->Add(this->loginLoginLabel);
			this->loginPanel->Location = System::Drawing::Point(12, 12);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(405, 355);
			this->loginPanel->TabIndex = 0;
			// 
			// loginRegisterButton
			// 
			this->loginRegisterButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->loginRegisterButton->Location = System::Drawing::Point(327, 4);
			this->loginRegisterButton->Name = L"loginRegisterButton";
			this->loginRegisterButton->Size = System::Drawing::Size(75, 30);
			this->loginRegisterButton->TabIndex = 5;
			this->loginRegisterButton->Text = L"Register";
			this->loginRegisterButton->UseVisualStyleBackColor = true;
			// 
			// loginPasswordLabel
			// 
			this->loginPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginPasswordLabel->AutoSize = true;
			this->loginPasswordLabel->Location = System::Drawing::Point(164, 219);
			this->loginPasswordLabel->Name = L"loginPasswordLabel";
			this->loginPasswordLabel->Size = System::Drawing::Size(69, 17);
			this->loginPasswordLabel->TabIndex = 4;
			this->loginPasswordLabel->Text = L"Password";
			// 
			// loginPasswordTextBox
			// 
			this->loginPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginPasswordTextBox->Location = System::Drawing::Point(152, 239);
			this->loginPasswordTextBox->Name = L"loginPasswordTextBox";
			this->loginPasswordTextBox->Size = System::Drawing::Size(101, 22);
			this->loginPasswordTextBox->TabIndex = 3;
			// 
			// loginUsernameTextBox
			// 
			this->loginUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginUsernameTextBox->Location = System::Drawing::Point(152, 162);
			this->loginUsernameTextBox->Name = L"loginUsernameTextBox";
			this->loginUsernameTextBox->Size = System::Drawing::Size(101, 22);
			this->loginUsernameTextBox->TabIndex = 2;
			// 
			// loginUsernameLabel
			// 
			this->loginUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginUsernameLabel->AutoSize = true;
			this->loginUsernameLabel->Location = System::Drawing::Point(164, 142);
			this->loginUsernameLabel->Name = L"loginUsernameLabel";
			this->loginUsernameLabel->Size = System::Drawing::Size(73, 17);
			this->loginUsernameLabel->TabIndex = 1;
			this->loginUsernameLabel->Text = L"Username";
			// 
			// loginLoginLabel
			// 
			this->loginLoginLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginLoginLabel->AutoSize = true;
			this->loginLoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLoginLabel->Location = System::Drawing::Point(152, 51);
			this->loginLoginLabel->Name = L"loginLoginLabel";
			this->loginLoginLabel->Size = System::Drawing::Size(96, 38);
			this->loginLoginLabel->TabIndex = 0;
			this->loginLoginLabel->Text = L"Login";
			// 
			// addClientPanel
			// 
			this->addClientPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addClientPanel->Controls->Add(this->addClient);
			this->addClientPanel->Controls->Add(this->addClientBirthdateTextBox);
			this->addClientPanel->Controls->Add(this->addClientLNameTextBox);
			this->addClientPanel->Controls->Add(this->addClientFNameTextBox);
			this->addClientPanel->Controls->Add(this->addClientBirthdateLabel);
			this->addClientPanel->Controls->Add(this->addClientLNameLabel);
			this->addClientPanel->Controls->Add(this->addClientFNameLabel);
			this->addClientPanel->Controls->Add(this->addClientTitleLabel);
			this->addClientPanel->Controls->Add(this->addClientExitButton);
			this->addClientPanel->Location = System::Drawing::Point(6, 6);
			this->addClientPanel->Name = L"addClientPanel";
			this->addClientPanel->Size = System::Drawing::Size(452, 387);
			this->addClientPanel->TabIndex = 3;
			this->addClientPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::addClientPanel_Paint);
			// 
			// addClient
			// 
			this->addClient->Location = System::Drawing::Point(264, 272);
			this->addClient->Name = L"addClient";
			this->addClient->Size = System::Drawing::Size(113, 35);
			this->addClient->TabIndex = 8;
			this->addClient->Text = L"OK";
			this->addClient->UseVisualStyleBackColor = true;
			// 
			// addClientBirthdateTextBox
			// 
			this->addClientBirthdateTextBox->Location = System::Drawing::Point(7, 166);
			this->addClientBirthdateTextBox->Name = L"addClientBirthdateTextBox";
			this->addClientBirthdateTextBox->Size = System::Drawing::Size(133, 22);
			this->addClientBirthdateTextBox->TabIndex = 7;
			// 
			// addClientLNameTextBox
			// 
			this->addClientLNameTextBox->Location = System::Drawing::Point(7, 120);
			this->addClientLNameTextBox->Name = L"addClientLNameTextBox";
			this->addClientLNameTextBox->Size = System::Drawing::Size(133, 22);
			this->addClientLNameTextBox->TabIndex = 6;
			// 
			// addClientFNameTextBox
			// 
			this->addClientFNameTextBox->Location = System::Drawing::Point(7, 74);
			this->addClientFNameTextBox->Name = L"addClientFNameTextBox";
			this->addClientFNameTextBox->Size = System::Drawing::Size(133, 22);
			this->addClientFNameTextBox->TabIndex = 5;
			// 
			// addClientBirthdateLabel
			// 
			this->addClientBirthdateLabel->AutoSize = true;
			this->addClientBirthdateLabel->Location = System::Drawing::Point(4, 145);
			this->addClientBirthdateLabel->Name = L"addClientBirthdateLabel";
			this->addClientBirthdateLabel->Size = System::Drawing::Size(65, 17);
			this->addClientBirthdateLabel->TabIndex = 4;
			this->addClientBirthdateLabel->Text = L"Birthdate";
			// 
			// addClientLNameLabel
			// 
			this->addClientLNameLabel->AutoSize = true;
			this->addClientLNameLabel->Location = System::Drawing::Point(4, 99);
			this->addClientLNameLabel->Name = L"addClientLNameLabel";
			this->addClientLNameLabel->Size = System::Drawing::Size(76, 17);
			this->addClientLNameLabel->TabIndex = 3;
			this->addClientLNameLabel->Text = L"Last Name";
			// 
			// addClientFNameLabel
			// 
			this->addClientFNameLabel->AutoSize = true;
			this->addClientFNameLabel->Location = System::Drawing::Point(4, 54);
			this->addClientFNameLabel->Name = L"addClientFNameLabel";
			this->addClientFNameLabel->Size = System::Drawing::Size(76, 17);
			this->addClientFNameLabel->TabIndex = 2;
			this->addClientFNameLabel->Text = L"First Name";
			// 
			// addClientTitleLabel
			// 
			this->addClientTitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addClientTitleLabel->AutoSize = true;
			this->addClientTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addClientTitleLabel->Location = System::Drawing::Point(101, 3);
			this->addClientTitleLabel->Name = L"addClientTitleLabel";
			this->addClientTitleLabel->Size = System::Drawing::Size(167, 38);
			this->addClientTitleLabel->TabIndex = 1;
			this->addClientTitleLabel->Text = L"Add Client";
			// 
			// addClientExitButton
			// 
			this->addClientExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addClientExitButton->Location = System::Drawing::Point(424, 3);
			this->addClientExitButton->Name = L"addClientExitButton";
			this->addClientExitButton->Size = System::Drawing::Size(25, 23);
			this->addClientExitButton->TabIndex = 0;
			this->addClientExitButton->Text = L"X";
			this->addClientExitButton->UseVisualStyleBackColor = true;
			this->addClientExitButton->Click += gcnew System::EventHandler(this, &MyForm::addClientExitButton_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// managerTablePanel
			// 
			this->managerTablePanel->Controls->Add(this->managerTabControl);
			this->managerTablePanel->Location = System::Drawing::Point(448, 12);
			this->managerTablePanel->Name = L"managerTablePanel";
			this->managerTablePanel->Size = System::Drawing::Size(478, 435);
			this->managerTablePanel->TabIndex = 2;
			// 
			// managerTabControl
			// 
			this->managerTabControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->managerTabControl->Controls->Add(this->clientMTabPage);
			this->managerTabControl->Controls->Add(this->orderMTabPage);
			this->managerTabControl->Controls->Add(this->stockMTabPage);
			this->managerTabControl->Controls->Add(this->statisticMTabPage);
			this->managerTabControl->Location = System::Drawing::Point(3, 3);
			this->managerTabControl->Name = L"managerTabControl";
			this->managerTabControl->SelectedIndex = 0;
			this->managerTabControl->Size = System::Drawing::Size(472, 428);
			this->managerTabControl->TabIndex = 0;
			// 
			// clientMTabPage
			// 
			this->clientMTabPage->Controls->Add(this->clientMCityTextBox);
			this->clientMTabPage->Controls->Add(this->clientMLNameTextBox);
			this->clientMTabPage->Controls->Add(this->clientMFNameTextBox);
			this->clientMTabPage->Controls->Add(this->addClientPanel);
			this->clientMTabPage->Controls->Add(this->clientMCityLabel);
			this->clientMTabPage->Controls->Add(this->clientMLNameLabel);
			this->clientMTabPage->Controls->Add(this->clientMFNameLabel);
			this->clientMTabPage->Controls->Add(this->clientMAddButton);
			this->clientMTabPage->Controls->Add(this->clientMResearchButton);
			this->clientMTabPage->Controls->Add(this->clientMDGV);
			this->clientMTabPage->Location = System::Drawing::Point(4, 25);
			this->clientMTabPage->Name = L"clientMTabPage";
			this->clientMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->clientMTabPage->Size = System::Drawing::Size(464, 399);
			this->clientMTabPage->TabIndex = 0;
			this->clientMTabPage->Text = L"Client";
			this->clientMTabPage->UseVisualStyleBackColor = true;
			// 
			// clientMCityTextBox
			// 
			this->clientMCityTextBox->Location = System::Drawing::Point(91, 77);
			this->clientMCityTextBox->Name = L"clientMCityTextBox";
			this->clientMCityTextBox->Size = System::Drawing::Size(131, 22);
			this->clientMCityTextBox->TabIndex = 8;
			// 
			// clientMLNameTextBox
			// 
			this->clientMLNameTextBox->Location = System::Drawing::Point(91, 51);
			this->clientMLNameTextBox->Name = L"clientMLNameTextBox";
			this->clientMLNameTextBox->Size = System::Drawing::Size(131, 22);
			this->clientMLNameTextBox->TabIndex = 7;
			// 
			// clientMFNameTextBox
			// 
			this->clientMFNameTextBox->Location = System::Drawing::Point(91, 27);
			this->clientMFNameTextBox->Name = L"clientMFNameTextBox";
			this->clientMFNameTextBox->Size = System::Drawing::Size(132, 22);
			this->clientMFNameTextBox->TabIndex = 6;
			// 
			// clientMCityLabel
			// 
			this->clientMCityLabel->AutoSize = true;
			this->clientMCityLabel->Location = System::Drawing::Point(3, 80);
			this->clientMCityLabel->Name = L"clientMCityLabel";
			this->clientMCityLabel->Size = System::Drawing::Size(39, 17);
			this->clientMCityLabel->TabIndex = 5;
			this->clientMCityLabel->Text = L"City :";
			this->clientMCityLabel->Click += gcnew System::EventHandler(this, &MyForm::clientMCityLabel_Click);
			// 
			// clientMLNameLabel
			// 
			this->clientMLNameLabel->AutoSize = true;
			this->clientMLNameLabel->Location = System::Drawing::Point(3, 54);
			this->clientMLNameLabel->Name = L"clientMLNameLabel";
			this->clientMLNameLabel->Size = System::Drawing::Size(82, 17);
			this->clientMLNameLabel->TabIndex = 4;
			this->clientMLNameLabel->Text = L"Last name :";
			// 
			// clientMFNameLabel
			// 
			this->clientMFNameLabel->AutoSize = true;
			this->clientMFNameLabel->Location = System::Drawing::Point(3, 27);
			this->clientMFNameLabel->Name = L"clientMFNameLabel";
			this->clientMFNameLabel->Size = System::Drawing::Size(82, 17);
			this->clientMFNameLabel->TabIndex = 3;
			this->clientMFNameLabel->Text = L"First name :";
			// 
			// clientMAddButton
			// 
			this->clientMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMAddButton->Location = System::Drawing::Point(383, 368);
			this->clientMAddButton->Name = L"clientMAddButton";
			this->clientMAddButton->Size = System::Drawing::Size(75, 23);
			this->clientMAddButton->TabIndex = 2;
			this->clientMAddButton->Text = L"Add";
			this->clientMAddButton->UseVisualStyleBackColor = true;
			this->clientMAddButton->Click += gcnew System::EventHandler(this, &MyForm::clientMAddButton_Click);
			// 
			// clientMResearchButton
			// 
			this->clientMResearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMResearchButton->Location = System::Drawing::Point(383, 185);
			this->clientMResearchButton->Name = L"clientMResearchButton";
			this->clientMResearchButton->Size = System::Drawing::Size(75, 23);
			this->clientMResearchButton->TabIndex = 1;
			this->clientMResearchButton->Text = L"Search";
			this->clientMResearchButton->UseVisualStyleBackColor = true;
			// 
			// clientMDGV
			// 
			this->clientMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->clientMDGV->Location = System::Drawing::Point(6, 211);
			this->clientMDGV->Name = L"clientMDGV";
			this->clientMDGV->RowHeadersWidth = 51;
			this->clientMDGV->RowTemplate->Height = 24;
			this->clientMDGV->Size = System::Drawing::Size(452, 151);
			this->clientMDGV->TabIndex = 0;
			// 
			// orderMTabPage
			// 
			this->orderMTabPage->Location = System::Drawing::Point(4, 25);
			this->orderMTabPage->Name = L"orderMTabPage";
			this->orderMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->orderMTabPage->Size = System::Drawing::Size(464, 399);
			this->orderMTabPage->TabIndex = 1;
			this->orderMTabPage->Text = L"Order";
			this->orderMTabPage->UseVisualStyleBackColor = true;
			// 
			// stockMTabPage
			// 
			this->stockMTabPage->Location = System::Drawing::Point(4, 25);
			this->stockMTabPage->Name = L"stockMTabPage";
			this->stockMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->stockMTabPage->Size = System::Drawing::Size(464, 399);
			this->stockMTabPage->TabIndex = 2;
			this->stockMTabPage->Text = L"Stock";
			this->stockMTabPage->UseVisualStyleBackColor = true;
			// 
			// statisticMTabPage
			// 
			this->statisticMTabPage->Location = System::Drawing::Point(4, 25);
			this->statisticMTabPage->Name = L"statisticMTabPage";
			this->statisticMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->statisticMTabPage->Size = System::Drawing::Size(464, 399);
			this->statisticMTabPage->TabIndex = 3;
			this->statisticMTabPage->Text = L"Statistic";
			this->statisticMTabPage->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1055);
			this->Controls->Add(this->managerTablePanel);
			this->Controls->Add(this->loginPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->addClientPanel->ResumeLayout(false);
			this->addClientPanel->PerformLayout();
			this->managerTablePanel->ResumeLayout(false);
			this->managerTabControl->ResumeLayout(false);
			this->clientMTabPage->ResumeLayout(false);
			this->clientMTabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		addClientPanel->Hide();
	}
private: System::Void addClientPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void addClientExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addClientPanel->Hide();
}
private: System::Void clientMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addClientPanel->Show();
}
};
}
