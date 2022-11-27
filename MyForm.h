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
	private: System::Windows::Forms::Button^ clientMSearchButton;

	private: System::Windows::Forms::Button^ clientMAddButton;
	private: System::Windows::Forms::Panel^ addClientPanel;
	private: System::Windows::Forms::Label^ addClientTitleLabel;
	private: System::Windows::Forms::Button^ addClientExitButton;
	private: System::Windows::Forms::Label^ addClientLNameLabel;
	private: System::Windows::Forms::Label^ addClientFNameLabel;
	private: System::Windows::Forms::Button^ addClientValidateButton;

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
	private: System::Windows::Forms::Panel^ clientMPanel;
	private: System::Windows::Forms::Button^ clientMModifyButton;
	private: System::Windows::Forms::Button^ clientMDeleteButton;
	private: System::Windows::Forms::Panel^ orderMPanel;
	private: System::Windows::Forms::Button^ orderMModifyButton;

	private: System::Windows::Forms::Button^ orderMDeleteButton;
	private: System::Windows::Forms::DataGridView^ orderMDGV;
	private: System::Windows::Forms::Button^ orderMSearchButton;
	private: System::Windows::Forms::Button^ orderMAddButton;
	private: System::Windows::Forms::Button^ loginValidateButton;
	private: System::Windows::Forms::Panel^ statisticMPanel;

	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Button^ registerValidateButton;
	private: System::Windows::Forms::Button^ registerLoginButton;
	private: System::Windows::Forms::Label^ registerPasswordLabel;
	private: System::Windows::Forms::TextBox^ registerPasswordTextBox;
	private: System::Windows::Forms::TextBox^ registerUsernameTextBox;
	private: System::Windows::Forms::Label^ registerUsernameLabel;
	private: System::Windows::Forms::Label^ registerRegisterLabel;
	private: System::Windows::Forms::Panel^ stockMPanel;
	private: System::Windows::Forms::Button^ stockMSearchButton;
	private: System::Windows::Forms::Button^ stockMAddButton;
	private: System::Windows::Forms::Button^ stockMModifyButton;
	private: System::Windows::Forms::Button^ stockMDeleteButton;
	private: System::Windows::Forms::DataGridView^ stockMDGV;
	private: System::Windows::Forms::Panel^ addOrderPanel;

	private: System::Windows::Forms::Button^ addOrderValidateButton;
	private: System::Windows::Forms::TextBox^ addOrderDateTextBox;
	private: System::Windows::Forms::TextBox^ addOrderLNameTextBox;
	private: System::Windows::Forms::TextBox^ addOrderFNameTextBox;
	private: System::Windows::Forms::Label^ addOrderDateLabe;
	private: System::Windows::Forms::Label^ addOrderLNameLabel;
	private: System::Windows::Forms::Label^ addOrderFNameLabel;
	private: System::Windows::Forms::Label^ addOrderTitleLabel;
	private: System::Windows::Forms::Button^ addOrderExitButton;
	private: System::Windows::Forms::Panel^ addStockPanel;
	private: System::Windows::Forms::Button^ addStockValidateButton;
	private: System::Windows::Forms::TextBox^ addStockQuantityTextBox;
	private: System::Windows::Forms::TextBox^ addStockReferenceTextBox;
	private: System::Windows::Forms::TextBox^ addStockNameTextBox;
	private: System::Windows::Forms::Label^ addStockQuantityLabel;
	private: System::Windows::Forms::Label^ addStockReferenceLabel;
	private: System::Windows::Forms::Label^ addStockNameLabel;
	private: System::Windows::Forms::Label^ addStockTitleLabel;
	private: System::Windows::Forms::Button^ addStockExitButton;








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
			this->loginValidateButton = (gcnew System::Windows::Forms::Button());
			this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			this->loginPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->loginLoginLabel = (gcnew System::Windows::Forms::Label());
			this->registerPanel = (gcnew System::Windows::Forms::Panel());
			this->registerValidateButton = (gcnew System::Windows::Forms::Button());
			this->registerLoginButton = (gcnew System::Windows::Forms::Button());
			this->registerPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->registerPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->registerRegisterLabel = (gcnew System::Windows::Forms::Label());
			this->addClientPanel = (gcnew System::Windows::Forms::Panel());
			this->addClientValidateButton = (gcnew System::Windows::Forms::Button());
			this->addClientBirthdateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addClientLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addClientFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addClientBirthdateLabel = (gcnew System::Windows::Forms::Label());
			this->addClientLNameLabel = (gcnew System::Windows::Forms::Label());
			this->addClientFNameLabel = (gcnew System::Windows::Forms::Label());
			this->addClientTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addClientExitButton = (gcnew System::Windows::Forms::Button());
			this->clientMPanel = (gcnew System::Windows::Forms::Panel());
			this->clientMModifyButton = (gcnew System::Windows::Forms::Button());
			this->clientMDeleteButton = (gcnew System::Windows::Forms::Button());
			this->clientMFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMCityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->clientMAddButton = (gcnew System::Windows::Forms::Button());
			this->clientMSearchButton = (gcnew System::Windows::Forms::Button());
			this->clientMCityLabel = (gcnew System::Windows::Forms::Label());
			this->clientMFNameLabel = (gcnew System::Windows::Forms::Label());
			this->clientMLNameLabel = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->managerTablePanel = (gcnew System::Windows::Forms::Panel());
			this->managerTabControl = (gcnew System::Windows::Forms::TabControl());
			this->clientMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->orderMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->orderMPanel = (gcnew System::Windows::Forms::Panel());
			this->orderMSearchButton = (gcnew System::Windows::Forms::Button());
			this->orderMAddButton = (gcnew System::Windows::Forms::Button());
			this->orderMModifyButton = (gcnew System::Windows::Forms::Button());
			this->orderMDeleteButton = (gcnew System::Windows::Forms::Button());
			this->orderMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->addOrderPanel = (gcnew System::Windows::Forms::Panel());
			this->addOrderValidateButton = (gcnew System::Windows::Forms::Button());
			this->addOrderDateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOrderLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOrderFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOrderDateLabe = (gcnew System::Windows::Forms::Label());
			this->addOrderLNameLabel = (gcnew System::Windows::Forms::Label());
			this->addOrderFNameLabel = (gcnew System::Windows::Forms::Label());
			this->addOrderTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addOrderExitButton = (gcnew System::Windows::Forms::Button());
			this->stockMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->stockMPanel = (gcnew System::Windows::Forms::Panel());
			this->stockMSearchButton = (gcnew System::Windows::Forms::Button());
			this->stockMAddButton = (gcnew System::Windows::Forms::Button());
			this->stockMModifyButton = (gcnew System::Windows::Forms::Button());
			this->stockMDeleteButton = (gcnew System::Windows::Forms::Button());
			this->stockMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->statisticMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->statisticMPanel = (gcnew System::Windows::Forms::Panel());
			this->addStockPanel = (gcnew System::Windows::Forms::Panel());
			this->addStockValidateButton = (gcnew System::Windows::Forms::Button());
			this->addStockQuantityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockReferenceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockQuantityLabel = (gcnew System::Windows::Forms::Label());
			this->addStockReferenceLabel = (gcnew System::Windows::Forms::Label());
			this->addStockNameLabel = (gcnew System::Windows::Forms::Label());
			this->addStockTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addStockExitButton = (gcnew System::Windows::Forms::Button());
			this->loginPanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			this->addClientPanel->SuspendLayout();
			this->clientMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->BeginInit();
			this->managerTablePanel->SuspendLayout();
			this->managerTabControl->SuspendLayout();
			this->clientMTabPage->SuspendLayout();
			this->orderMTabPage->SuspendLayout();
			this->orderMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderMDGV))->BeginInit();
			this->addOrderPanel->SuspendLayout();
			this->stockMTabPage->SuspendLayout();
			this->stockMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockMDGV))->BeginInit();
			this->statisticMTabPage->SuspendLayout();
			this->addStockPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->loginValidateButton);
			this->loginPanel->Controls->Add(this->loginRegisterButton);
			this->loginPanel->Controls->Add(this->loginPasswordLabel);
			this->loginPanel->Controls->Add(this->loginPasswordTextBox);
			this->loginPanel->Controls->Add(this->loginUsernameTextBox);
			this->loginPanel->Controls->Add(this->loginUsernameLabel);
			this->loginPanel->Controls->Add(this->loginLoginLabel);
			this->loginPanel->Location = System::Drawing::Point(12, 12);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(478, 435);
			this->loginPanel->TabIndex = 0;
			// 
			// loginValidateButton
			// 
			this->loginValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->loginValidateButton->Location = System::Drawing::Point(189, 337);
			this->loginValidateButton->Name = L"loginValidateButton";
			this->loginValidateButton->Size = System::Drawing::Size(101, 32);
			this->loginValidateButton->TabIndex = 11;
			this->loginValidateButton->Text = L"Validate";
			this->loginValidateButton->UseVisualStyleBackColor = true;
			// 
			// loginRegisterButton
			// 
			this->loginRegisterButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->loginRegisterButton->Location = System::Drawing::Point(400, 3);
			this->loginRegisterButton->Name = L"loginRegisterButton";
			this->loginRegisterButton->Size = System::Drawing::Size(75, 32);
			this->loginRegisterButton->TabIndex = 5;
			this->loginRegisterButton->Text = L"Register";
			this->loginRegisterButton->UseVisualStyleBackColor = true;
			this->loginRegisterButton->Click += gcnew System::EventHandler(this, &MyForm::loginRegisterButton_Click);
			// 
			// loginPasswordLabel
			// 
			this->loginPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginPasswordLabel->AutoSize = true;
			this->loginPasswordLabel->Location = System::Drawing::Point(201, 219);
			this->loginPasswordLabel->Name = L"loginPasswordLabel";
			this->loginPasswordLabel->Size = System::Drawing::Size(69, 17);
			this->loginPasswordLabel->TabIndex = 4;
			this->loginPasswordLabel->Text = L"Password";
			// 
			// loginPasswordTextBox
			// 
			this->loginPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginPasswordTextBox->Location = System::Drawing::Point(189, 239);
			this->loginPasswordTextBox->Name = L"loginPasswordTextBox";
			this->loginPasswordTextBox->Size = System::Drawing::Size(101, 22);
			this->loginPasswordTextBox->TabIndex = 3;
			// 
			// loginUsernameTextBox
			// 
			this->loginUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginUsernameTextBox->Location = System::Drawing::Point(189, 162);
			this->loginUsernameTextBox->Name = L"loginUsernameTextBox";
			this->loginUsernameTextBox->Size = System::Drawing::Size(101, 22);
			this->loginUsernameTextBox->TabIndex = 2;
			// 
			// loginUsernameLabel
			// 
			this->loginUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginUsernameLabel->AutoSize = true;
			this->loginUsernameLabel->Location = System::Drawing::Point(201, 142);
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
			this->loginLoginLabel->Location = System::Drawing::Point(189, 51);
			this->loginLoginLabel->Name = L"loginLoginLabel";
			this->loginLoginLabel->Size = System::Drawing::Size(96, 38);
			this->loginLoginLabel->TabIndex = 0;
			this->loginLoginLabel->Text = L"Login";
			// 
			// registerPanel
			// 
			this->registerPanel->Controls->Add(this->registerValidateButton);
			this->registerPanel->Controls->Add(this->registerLoginButton);
			this->registerPanel->Controls->Add(this->registerPasswordLabel);
			this->registerPanel->Controls->Add(this->registerPasswordTextBox);
			this->registerPanel->Controls->Add(this->registerUsernameTextBox);
			this->registerPanel->Controls->Add(this->registerUsernameLabel);
			this->registerPanel->Controls->Add(this->registerRegisterLabel);
			this->registerPanel->Location = System::Drawing::Point(12, 12);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(478, 435);
			this->registerPanel->TabIndex = 12;
			// 
			// registerValidateButton
			// 
			this->registerValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->registerValidateButton->Location = System::Drawing::Point(189, 337);
			this->registerValidateButton->Name = L"registerValidateButton";
			this->registerValidateButton->Size = System::Drawing::Size(101, 32);
			this->registerValidateButton->TabIndex = 11;
			this->registerValidateButton->Text = L"Validate";
			this->registerValidateButton->UseVisualStyleBackColor = true;
			// 
			// registerLoginButton
			// 
			this->registerLoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->registerLoginButton->Location = System::Drawing::Point(400, 3);
			this->registerLoginButton->Name = L"registerLoginButton";
			this->registerLoginButton->Size = System::Drawing::Size(75, 32);
			this->registerLoginButton->TabIndex = 5;
			this->registerLoginButton->Text = L"Login";
			this->registerLoginButton->UseVisualStyleBackColor = true;
			this->registerLoginButton->Click += gcnew System::EventHandler(this, &MyForm::registerLoginButton_Click);
			// 
			// registerPasswordLabel
			// 
			this->registerPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordLabel->AutoSize = true;
			this->registerPasswordLabel->Location = System::Drawing::Point(7, 163);
			this->registerPasswordLabel->Name = L"registerPasswordLabel";
			this->registerPasswordLabel->Size = System::Drawing::Size(69, 17);
			this->registerPasswordLabel->TabIndex = 4;
			this->registerPasswordLabel->Text = L"Password";
			// 
			// registerPasswordTextBox
			// 
			this->registerPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordTextBox->Location = System::Drawing::Point(97, 160);
			this->registerPasswordTextBox->Name = L"registerPasswordTextBox";
			this->registerPasswordTextBox->Size = System::Drawing::Size(188, 22);
			this->registerPasswordTextBox->TabIndex = 3;
			// 
			// registerUsernameTextBox
			// 
			this->registerUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameTextBox->Location = System::Drawing::Point(97, 124);
			this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			this->registerUsernameTextBox->Size = System::Drawing::Size(188, 22);
			this->registerUsernameTextBox->TabIndex = 2;
			// 
			// registerUsernameLabel
			// 
			this->registerUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameLabel->AutoSize = true;
			this->registerUsernameLabel->Location = System::Drawing::Point(3, 127);
			this->registerUsernameLabel->Name = L"registerUsernameLabel";
			this->registerUsernameLabel->Size = System::Drawing::Size(73, 17);
			this->registerUsernameLabel->TabIndex = 1;
			this->registerUsernameLabel->Text = L"Username";
			// 
			// registerRegisterLabel
			// 
			this->registerRegisterLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerRegisterLabel->AutoSize = true;
			this->registerRegisterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerRegisterLabel->Location = System::Drawing::Point(166, 50);
			this->registerRegisterLabel->Name = L"registerRegisterLabel";
			this->registerRegisterLabel->Size = System::Drawing::Size(139, 38);
			this->registerRegisterLabel->TabIndex = 0;
			this->registerRegisterLabel->Text = L"Register";
			// 
			// addClientPanel
			// 
			this->addClientPanel->Controls->Add(this->addClientValidateButton);
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
			this->addClientPanel->Size = System::Drawing::Size(460, 388);
			this->addClientPanel->TabIndex = 3;
			// 
			// addClientValidateButton
			// 
			this->addClientValidateButton->Location = System::Drawing::Point(264, 272);
			this->addClientValidateButton->Name = L"addClientValidateButton";
			this->addClientValidateButton->Size = System::Drawing::Size(113, 35);
			this->addClientValidateButton->TabIndex = 8;
			this->addClientValidateButton->Text = L"Validate";
			this->addClientValidateButton->UseVisualStyleBackColor = true;
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
			this->addClientExitButton->Location = System::Drawing::Point(432, 3);
			this->addClientExitButton->Name = L"addClientExitButton";
			this->addClientExitButton->Size = System::Drawing::Size(25, 23);
			this->addClientExitButton->TabIndex = 0;
			this->addClientExitButton->Text = L"X";
			this->addClientExitButton->UseVisualStyleBackColor = true;
			this->addClientExitButton->Click += gcnew System::EventHandler(this, &MyForm::addClientExitButton_Click);
			// 
			// clientMPanel
			// 
			this->clientMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientMPanel->Controls->Add(this->clientMModifyButton);
			this->clientMPanel->Controls->Add(this->clientMDeleteButton);
			this->clientMPanel->Controls->Add(this->clientMFNameTextBox);
			this->clientMPanel->Controls->Add(this->clientMLNameTextBox);
			this->clientMPanel->Controls->Add(this->clientMCityTextBox);
			this->clientMPanel->Controls->Add(this->clientMDGV);
			this->clientMPanel->Controls->Add(this->clientMAddButton);
			this->clientMPanel->Controls->Add(this->clientMSearchButton);
			this->clientMPanel->Controls->Add(this->clientMCityLabel);
			this->clientMPanel->Controls->Add(this->clientMFNameLabel);
			this->clientMPanel->Controls->Add(this->clientMLNameLabel);
			this->clientMPanel->Location = System::Drawing::Point(6, 6);
			this->clientMPanel->Name = L"clientMPanel";
			this->clientMPanel->Size = System::Drawing::Size(460, 388);
			this->clientMPanel->TabIndex = 4;
			// 
			// clientMModifyButton
			// 
			this->clientMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMModifyButton->Location = System::Drawing::Point(301, 353);
			this->clientMModifyButton->Name = L"clientMModifyButton";
			this->clientMModifyButton->Size = System::Drawing::Size(75, 32);
			this->clientMModifyButton->TabIndex = 10;
			this->clientMModifyButton->Text = L"Modify";
			this->clientMModifyButton->UseVisualStyleBackColor = true;
			// 
			// clientMDeleteButton
			// 
			this->clientMDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMDeleteButton->Location = System::Drawing::Point(382, 353);
			this->clientMDeleteButton->Name = L"clientMDeleteButton";
			this->clientMDeleteButton->Size = System::Drawing::Size(75, 32);
			this->clientMDeleteButton->TabIndex = 9;
			this->clientMDeleteButton->Text = L"Delete";
			this->clientMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// clientMFNameTextBox
			// 
			this->clientMFNameTextBox->Location = System::Drawing::Point(91, 37);
			this->clientMFNameTextBox->Name = L"clientMFNameTextBox";
			this->clientMFNameTextBox->Size = System::Drawing::Size(131, 22);
			this->clientMFNameTextBox->TabIndex = 6;
			// 
			// clientMLNameTextBox
			// 
			this->clientMLNameTextBox->Location = System::Drawing::Point(91, 65);
			this->clientMLNameTextBox->Name = L"clientMLNameTextBox";
			this->clientMLNameTextBox->Size = System::Drawing::Size(131, 22);
			this->clientMLNameTextBox->TabIndex = 7;
			// 
			// clientMCityTextBox
			// 
			this->clientMCityTextBox->Location = System::Drawing::Point(91, 95);
			this->clientMCityTextBox->Name = L"clientMCityTextBox";
			this->clientMCityTextBox->Size = System::Drawing::Size(131, 22);
			this->clientMCityTextBox->TabIndex = 8;
			// 
			// clientMDGV
			// 
			this->clientMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->clientMDGV->Location = System::Drawing::Point(3, 196);
			this->clientMDGV->Name = L"clientMDGV";
			this->clientMDGV->RowHeadersWidth = 51;
			this->clientMDGV->RowTemplate->Height = 24;
			this->clientMDGV->Size = System::Drawing::Size(454, 151);
			this->clientMDGV->TabIndex = 0;
			// 
			// clientMAddButton
			// 
			this->clientMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMAddButton->Location = System::Drawing::Point(220, 353);
			this->clientMAddButton->Name = L"clientMAddButton";
			this->clientMAddButton->Size = System::Drawing::Size(75, 32);
			this->clientMAddButton->TabIndex = 2;
			this->clientMAddButton->Text = L"Add";
			this->clientMAddButton->UseVisualStyleBackColor = true;
			this->clientMAddButton->Click += gcnew System::EventHandler(this, &MyForm::clientMAddButton_Click);
			// 
			// clientMSearchButton
			// 
			this->clientMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMSearchButton->Location = System::Drawing::Point(382, 158);
			this->clientMSearchButton->Name = L"clientMSearchButton";
			this->clientMSearchButton->Size = System::Drawing::Size(75, 32);
			this->clientMSearchButton->TabIndex = 1;
			this->clientMSearchButton->Text = L"Search";
			this->clientMSearchButton->UseVisualStyleBackColor = true;
			// 
			// clientMCityLabel
			// 
			this->clientMCityLabel->AutoSize = true;
			this->clientMCityLabel->Location = System::Drawing::Point(3, 98);
			this->clientMCityLabel->Name = L"clientMCityLabel";
			this->clientMCityLabel->Size = System::Drawing::Size(39, 17);
			this->clientMCityLabel->TabIndex = 5;
			this->clientMCityLabel->Text = L"City :";
			// 
			// clientMFNameLabel
			// 
			this->clientMFNameLabel->AutoSize = true;
			this->clientMFNameLabel->Location = System::Drawing::Point(3, 40);
			this->clientMFNameLabel->Name = L"clientMFNameLabel";
			this->clientMFNameLabel->Size = System::Drawing::Size(82, 17);
			this->clientMFNameLabel->TabIndex = 3;
			this->clientMFNameLabel->Text = L"First name :";
			// 
			// clientMLNameLabel
			// 
			this->clientMLNameLabel->AutoSize = true;
			this->clientMLNameLabel->Location = System::Drawing::Point(3, 68);
			this->clientMLNameLabel->Name = L"clientMLNameLabel";
			this->clientMLNameLabel->Size = System::Drawing::Size(82, 17);
			this->clientMLNameLabel->TabIndex = 4;
			this->clientMLNameLabel->Text = L"Last name :";
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
			this->managerTablePanel->Location = System::Drawing::Point(496, 12);
			this->managerTablePanel->Name = L"managerTablePanel";
			this->managerTablePanel->Size = System::Drawing::Size(486, 435);
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
			this->managerTabControl->Size = System::Drawing::Size(480, 429);
			this->managerTabControl->TabIndex = 0;
			// 
			// clientMTabPage
			// 
			this->clientMTabPage->Controls->Add(this->addClientPanel);
			this->clientMTabPage->Controls->Add(this->clientMPanel);
			this->clientMTabPage->Location = System::Drawing::Point(4, 25);
			this->clientMTabPage->Name = L"clientMTabPage";
			this->clientMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->clientMTabPage->Size = System::Drawing::Size(472, 400);
			this->clientMTabPage->TabIndex = 0;
			this->clientMTabPage->Text = L"Client";
			this->clientMTabPage->UseVisualStyleBackColor = true;
			// 
			// orderMTabPage
			// 
			this->orderMTabPage->Controls->Add(this->orderMPanel);
			this->orderMTabPage->Controls->Add(this->addOrderPanel);
			this->orderMTabPage->Location = System::Drawing::Point(4, 25);
			this->orderMTabPage->Name = L"orderMTabPage";
			this->orderMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->orderMTabPage->Size = System::Drawing::Size(472, 400);
			this->orderMTabPage->TabIndex = 1;
			this->orderMTabPage->Text = L"Order";
			this->orderMTabPage->UseVisualStyleBackColor = true;
			// 
			// orderMPanel
			// 
			this->orderMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->orderMPanel->Controls->Add(this->orderMSearchButton);
			this->orderMPanel->Controls->Add(this->orderMAddButton);
			this->orderMPanel->Controls->Add(this->orderMModifyButton);
			this->orderMPanel->Controls->Add(this->orderMDeleteButton);
			this->orderMPanel->Controls->Add(this->orderMDGV);
			this->orderMPanel->Location = System::Drawing::Point(6, 6);
			this->orderMPanel->Name = L"orderMPanel";
			this->orderMPanel->Size = System::Drawing::Size(460, 388);
			this->orderMPanel->TabIndex = 0;
			// 
			// orderMSearchButton
			// 
			this->orderMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->orderMSearchButton->Location = System::Drawing::Point(382, 157);
			this->orderMSearchButton->Name = L"orderMSearchButton";
			this->orderMSearchButton->Size = System::Drawing::Size(75, 32);
			this->orderMSearchButton->TabIndex = 8;
			this->orderMSearchButton->Text = L"Search";
			this->orderMSearchButton->UseVisualStyleBackColor = true;
			// 
			// orderMAddButton
			// 
			this->orderMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->orderMAddButton->Location = System::Drawing::Point(220, 353);
			this->orderMAddButton->Name = L"orderMAddButton";
			this->orderMAddButton->Size = System::Drawing::Size(75, 32);
			this->orderMAddButton->TabIndex = 7;
			this->orderMAddButton->Text = L"Add";
			this->orderMAddButton->UseVisualStyleBackColor = true;
			this->orderMAddButton->Click += gcnew System::EventHandler(this, &MyForm::orderMAddButton_Click);
			// 
			// orderMModifyButton
			// 
			this->orderMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->orderMModifyButton->Location = System::Drawing::Point(301, 353);
			this->orderMModifyButton->Name = L"orderMModifyButton";
			this->orderMModifyButton->Size = System::Drawing::Size(75, 32);
			this->orderMModifyButton->TabIndex = 6;
			this->orderMModifyButton->Text = L"Modify";
			this->orderMModifyButton->UseVisualStyleBackColor = true;
			// 
			// orderMDeleteButton
			// 
			this->orderMDeleteButton->Location = System::Drawing::Point(382, 353);
			this->orderMDeleteButton->Name = L"orderMDeleteButton";
			this->orderMDeleteButton->Size = System::Drawing::Size(75, 32);
			this->orderMDeleteButton->TabIndex = 1;
			this->orderMDeleteButton->Text = L"Delete";
			this->orderMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// orderMDGV
			// 
			this->orderMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderMDGV->Location = System::Drawing::Point(3, 195);
			this->orderMDGV->Name = L"orderMDGV";
			this->orderMDGV->RowHeadersWidth = 51;
			this->orderMDGV->RowTemplate->Height = 24;
			this->orderMDGV->Size = System::Drawing::Size(454, 152);
			this->orderMDGV->TabIndex = 0;
			// 
			// addOrderPanel
			// 
			this->addOrderPanel->Controls->Add(this->addOrderValidateButton);
			this->addOrderPanel->Controls->Add(this->addOrderDateTextBox);
			this->addOrderPanel->Controls->Add(this->addOrderLNameTextBox);
			this->addOrderPanel->Controls->Add(this->addOrderFNameTextBox);
			this->addOrderPanel->Controls->Add(this->addOrderDateLabe);
			this->addOrderPanel->Controls->Add(this->addOrderLNameLabel);
			this->addOrderPanel->Controls->Add(this->addOrderFNameLabel);
			this->addOrderPanel->Controls->Add(this->addOrderTitleLabel);
			this->addOrderPanel->Controls->Add(this->addOrderExitButton);
			this->addOrderPanel->Location = System::Drawing::Point(6, 6);
			this->addOrderPanel->Name = L"addOrderPanel";
			this->addOrderPanel->Size = System::Drawing::Size(460, 388);
			this->addOrderPanel->TabIndex = 9;
			// 
			// addOrderValidateButton
			// 
			this->addOrderValidateButton->Location = System::Drawing::Point(264, 272);
			this->addOrderValidateButton->Name = L"addOrderValidateButton";
			this->addOrderValidateButton->Size = System::Drawing::Size(113, 35);
			this->addOrderValidateButton->TabIndex = 8;
			this->addOrderValidateButton->Text = L"Validate";
			this->addOrderValidateButton->UseVisualStyleBackColor = true;
			// 
			// addOrderDateTextBox
			// 
			this->addOrderDateTextBox->Location = System::Drawing::Point(7, 166);
			this->addOrderDateTextBox->Name = L"addOrderDateTextBox";
			this->addOrderDateTextBox->Size = System::Drawing::Size(133, 22);
			this->addOrderDateTextBox->TabIndex = 7;
			// 
			// addOrderLNameTextBox
			// 
			this->addOrderLNameTextBox->Location = System::Drawing::Point(7, 120);
			this->addOrderLNameTextBox->Name = L"addOrderLNameTextBox";
			this->addOrderLNameTextBox->Size = System::Drawing::Size(133, 22);
			this->addOrderLNameTextBox->TabIndex = 6;
			// 
			// addOrderFNameTextBox
			// 
			this->addOrderFNameTextBox->Location = System::Drawing::Point(7, 74);
			this->addOrderFNameTextBox->Name = L"addOrderFNameTextBox";
			this->addOrderFNameTextBox->Size = System::Drawing::Size(133, 22);
			this->addOrderFNameTextBox->TabIndex = 5;
			// 
			// addOrderDateLabe
			// 
			this->addOrderDateLabe->AutoSize = true;
			this->addOrderDateLabe->Location = System::Drawing::Point(4, 145);
			this->addOrderDateLabe->Name = L"addOrderDateLabe";
			this->addOrderDateLabe->Size = System::Drawing::Size(38, 17);
			this->addOrderDateLabe->TabIndex = 4;
			this->addOrderDateLabe->Text = L"Date";
			// 
			// addOrderLNameLabel
			// 
			this->addOrderLNameLabel->AutoSize = true;
			this->addOrderLNameLabel->Location = System::Drawing::Point(4, 99);
			this->addOrderLNameLabel->Name = L"addOrderLNameLabel";
			this->addOrderLNameLabel->Size = System::Drawing::Size(76, 17);
			this->addOrderLNameLabel->TabIndex = 3;
			this->addOrderLNameLabel->Text = L"Last Name";
			// 
			// addOrderFNameLabel
			// 
			this->addOrderFNameLabel->AutoSize = true;
			this->addOrderFNameLabel->Location = System::Drawing::Point(4, 54);
			this->addOrderFNameLabel->Name = L"addOrderFNameLabel";
			this->addOrderFNameLabel->Size = System::Drawing::Size(76, 17);
			this->addOrderFNameLabel->TabIndex = 2;
			this->addOrderFNameLabel->Text = L"First Name";
			// 
			// addOrderTitleLabel
			// 
			this->addOrderTitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addOrderTitleLabel->AutoSize = true;
			this->addOrderTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addOrderTitleLabel->Location = System::Drawing::Point(101, 3);
			this->addOrderTitleLabel->Name = L"addOrderTitleLabel";
			this->addOrderTitleLabel->Size = System::Drawing::Size(168, 38);
			this->addOrderTitleLabel->TabIndex = 1;
			this->addOrderTitleLabel->Text = L"Add Order";
			// 
			// addOrderExitButton
			// 
			this->addOrderExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addOrderExitButton->Location = System::Drawing::Point(432, 3);
			this->addOrderExitButton->Name = L"addOrderExitButton";
			this->addOrderExitButton->Size = System::Drawing::Size(25, 23);
			this->addOrderExitButton->TabIndex = 0;
			this->addOrderExitButton->Text = L"X";
			this->addOrderExitButton->UseVisualStyleBackColor = true;
			this->addOrderExitButton->Click += gcnew System::EventHandler(this, &MyForm::addOrderExitButton_Click);
			// 
			// stockMTabPage
			// 
			this->stockMTabPage->Controls->Add(this->stockMPanel);
			this->stockMTabPage->Controls->Add(this->addStockPanel);
			this->stockMTabPage->Location = System::Drawing::Point(4, 25);
			this->stockMTabPage->Name = L"stockMTabPage";
			this->stockMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->stockMTabPage->Size = System::Drawing::Size(472, 400);
			this->stockMTabPage->TabIndex = 2;
			this->stockMTabPage->Text = L"Stock";
			this->stockMTabPage->UseVisualStyleBackColor = true;
			// 
			// stockMPanel
			// 
			this->stockMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stockMPanel->Controls->Add(this->stockMSearchButton);
			this->stockMPanel->Controls->Add(this->stockMAddButton);
			this->stockMPanel->Controls->Add(this->stockMModifyButton);
			this->stockMPanel->Controls->Add(this->stockMDeleteButton);
			this->stockMPanel->Controls->Add(this->stockMDGV);
			this->stockMPanel->Location = System::Drawing::Point(6, 6);
			this->stockMPanel->Name = L"stockMPanel";
			this->stockMPanel->Size = System::Drawing::Size(460, 388);
			this->stockMPanel->TabIndex = 9;
			// 
			// stockMSearchButton
			// 
			this->stockMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->stockMSearchButton->Location = System::Drawing::Point(382, 157);
			this->stockMSearchButton->Name = L"stockMSearchButton";
			this->stockMSearchButton->Size = System::Drawing::Size(75, 32);
			this->stockMSearchButton->TabIndex = 8;
			this->stockMSearchButton->Text = L"Search";
			this->stockMSearchButton->UseVisualStyleBackColor = true;
			// 
			// stockMAddButton
			// 
			this->stockMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->stockMAddButton->Location = System::Drawing::Point(220, 353);
			this->stockMAddButton->Name = L"stockMAddButton";
			this->stockMAddButton->Size = System::Drawing::Size(75, 32);
			this->stockMAddButton->TabIndex = 7;
			this->stockMAddButton->Text = L"Add";
			this->stockMAddButton->UseVisualStyleBackColor = true;
			this->stockMAddButton->Click += gcnew System::EventHandler(this, &MyForm::stockMAddButton_Click);
			// 
			// stockMModifyButton
			// 
			this->stockMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->stockMModifyButton->Location = System::Drawing::Point(301, 353);
			this->stockMModifyButton->Name = L"stockMModifyButton";
			this->stockMModifyButton->Size = System::Drawing::Size(75, 32);
			this->stockMModifyButton->TabIndex = 6;
			this->stockMModifyButton->Text = L"Modify";
			this->stockMModifyButton->UseVisualStyleBackColor = true;
			// 
			// stockMDeleteButton
			// 
			this->stockMDeleteButton->Location = System::Drawing::Point(382, 353);
			this->stockMDeleteButton->Name = L"stockMDeleteButton";
			this->stockMDeleteButton->Size = System::Drawing::Size(75, 32);
			this->stockMDeleteButton->TabIndex = 1;
			this->stockMDeleteButton->Text = L"Delete";
			this->stockMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// stockMDGV
			// 
			this->stockMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->stockMDGV->Location = System::Drawing::Point(3, 195);
			this->stockMDGV->Name = L"stockMDGV";
			this->stockMDGV->RowHeadersWidth = 51;
			this->stockMDGV->RowTemplate->Height = 24;
			this->stockMDGV->Size = System::Drawing::Size(454, 152);
			this->stockMDGV->TabIndex = 0;
			// 
			// statisticMTabPage
			// 
			this->statisticMTabPage->Controls->Add(this->statisticMPanel);
			this->statisticMTabPage->Location = System::Drawing::Point(4, 25);
			this->statisticMTabPage->Name = L"statisticMTabPage";
			this->statisticMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->statisticMTabPage->Size = System::Drawing::Size(472, 400);
			this->statisticMTabPage->TabIndex = 3;
			this->statisticMTabPage->Text = L"Statistic";
			this->statisticMTabPage->UseVisualStyleBackColor = true;
			// 
			// statisticMPanel
			// 
			this->statisticMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->statisticMPanel->Location = System::Drawing::Point(6, 6);
			this->statisticMPanel->Name = L"statisticMPanel";
			this->statisticMPanel->Size = System::Drawing::Size(460, 388);
			this->statisticMPanel->TabIndex = 3;
			// 
			// addStockPanel
			// 
			this->addStockPanel->Controls->Add(this->addStockValidateButton);
			this->addStockPanel->Controls->Add(this->addStockQuantityTextBox);
			this->addStockPanel->Controls->Add(this->addStockReferenceTextBox);
			this->addStockPanel->Controls->Add(this->addStockNameTextBox);
			this->addStockPanel->Controls->Add(this->addStockQuantityLabel);
			this->addStockPanel->Controls->Add(this->addStockReferenceLabel);
			this->addStockPanel->Controls->Add(this->addStockNameLabel);
			this->addStockPanel->Controls->Add(this->addStockTitleLabel);
			this->addStockPanel->Controls->Add(this->addStockExitButton);
			this->addStockPanel->Location = System::Drawing::Point(6, 6);
			this->addStockPanel->Name = L"addStockPanel";
			this->addStockPanel->Size = System::Drawing::Size(460, 388);
			this->addStockPanel->TabIndex = 9;
			// 
			// addStockValidateButton
			// 
			this->addStockValidateButton->Location = System::Drawing::Point(264, 272);
			this->addStockValidateButton->Name = L"addStockValidateButton";
			this->addStockValidateButton->Size = System::Drawing::Size(113, 35);
			this->addStockValidateButton->TabIndex = 8;
			this->addStockValidateButton->Text = L"Validate";
			this->addStockValidateButton->UseVisualStyleBackColor = true;
			// 
			// addStockQuantityTextBox
			// 
			this->addStockQuantityTextBox->Location = System::Drawing::Point(7, 166);
			this->addStockQuantityTextBox->Name = L"addStockQuantityTextBox";
			this->addStockQuantityTextBox->Size = System::Drawing::Size(133, 22);
			this->addStockQuantityTextBox->TabIndex = 7;
			// 
			// addStockReferenceTextBox
			// 
			this->addStockReferenceTextBox->Location = System::Drawing::Point(7, 75);
			this->addStockReferenceTextBox->Name = L"addStockReferenceTextBox";
			this->addStockReferenceTextBox->Size = System::Drawing::Size(133, 22);
			this->addStockReferenceTextBox->TabIndex = 6;
			// 
			// addStockNameTextBox
			// 
			this->addStockNameTextBox->Location = System::Drawing::Point(7, 120);
			this->addStockNameTextBox->Name = L"addStockNameTextBox";
			this->addStockNameTextBox->Size = System::Drawing::Size(133, 22);
			this->addStockNameTextBox->TabIndex = 5;
			// 
			// addStockQuantityLabel
			// 
			this->addStockQuantityLabel->AutoSize = true;
			this->addStockQuantityLabel->Location = System::Drawing::Point(4, 145);
			this->addStockQuantityLabel->Name = L"addStockQuantityLabel";
			this->addStockQuantityLabel->Size = System::Drawing::Size(61, 17);
			this->addStockQuantityLabel->TabIndex = 4;
			this->addStockQuantityLabel->Text = L"Quantity";
			// 
			// addStockReferenceLabel
			// 
			this->addStockReferenceLabel->AutoSize = true;
			this->addStockReferenceLabel->Location = System::Drawing::Point(4, 55);
			this->addStockReferenceLabel->Name = L"addStockReferenceLabel";
			this->addStockReferenceLabel->Size = System::Drawing::Size(74, 17);
			this->addStockReferenceLabel->TabIndex = 3;
			this->addStockReferenceLabel->Text = L"Reference";
			// 
			// addStockNameLabel
			// 
			this->addStockNameLabel->AutoSize = true;
			this->addStockNameLabel->Location = System::Drawing::Point(4, 100);
			this->addStockNameLabel->Name = L"addStockNameLabel";
			this->addStockNameLabel->Size = System::Drawing::Size(45, 17);
			this->addStockNameLabel->TabIndex = 2;
			this->addStockNameLabel->Text = L"Name";
			// 
			// addStockTitleLabel
			// 
			this->addStockTitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockTitleLabel->AutoSize = true;
			this->addStockTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addStockTitleLabel->Location = System::Drawing::Point(101, 3);
			this->addStockTitleLabel->Name = L"addStockTitleLabel";
			this->addStockTitleLabel->Size = System::Drawing::Size(167, 38);
			this->addStockTitleLabel->TabIndex = 1;
			this->addStockTitleLabel->Text = L"Add Stock";
			// 
			// addStockExitButton
			// 
			this->addStockExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addStockExitButton->Location = System::Drawing::Point(432, 3);
			this->addStockExitButton->Name = L"addStockExitButton";
			this->addStockExitButton->Size = System::Drawing::Size(25, 23);
			this->addStockExitButton->TabIndex = 0;
			this->addStockExitButton->Text = L"X";
			this->addStockExitButton->UseVisualStyleBackColor = true;
			this->addStockExitButton->Click += gcnew System::EventHandler(this, &MyForm::addStockExitButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1055);
			this->Controls->Add(this->registerPanel);
			this->Controls->Add(this->managerTablePanel);
			this->Controls->Add(this->loginPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			this->addClientPanel->ResumeLayout(false);
			this->addClientPanel->PerformLayout();
			this->clientMPanel->ResumeLayout(false);
			this->clientMPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->EndInit();
			this->managerTablePanel->ResumeLayout(false);
			this->managerTabControl->ResumeLayout(false);
			this->clientMTabPage->ResumeLayout(false);
			this->orderMTabPage->ResumeLayout(false);
			this->orderMPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderMDGV))->EndInit();
			this->addOrderPanel->ResumeLayout(false);
			this->addOrderPanel->PerformLayout();
			this->stockMTabPage->ResumeLayout(false);
			this->stockMPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockMDGV))->EndInit();
			this->statisticMTabPage->ResumeLayout(false);
			this->addStockPanel->ResumeLayout(false);
			this->addStockPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	addClientPanel->Visible = false;
	clientMPanel->Visible = true;
	registerPanel->Visible = false;
	loginPanel->Visible = true;
	orderMPanel->Visible = true;
	addOrderPanel->Visible = false;
	addStockPanel->Visible = false;
	stockMPanel->Visible = true;
}
private: System::Void addClientExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	clientMPanel->Visible = true;
	addClientPanel->Visible = false;
}
private: System::Void clientMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addClientPanel->Visible = true;
	clientMPanel->Visible = false;
}
private: System::Void loginRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
	registerPanel->Visible = true;
	loginPanel->Visible = false;
}
private: System::Void registerLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	registerPanel->Visible = false;
}
private: System::Void addOrderExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	orderMPanel->Visible = true;
	addOrderPanel->Visible = false;
}
private: System::Void orderMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	orderMPanel->Visible = false;
	addOrderPanel->Visible = true;
}
private: System::Void stockMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addStockPanel->Visible = true;
	stockMPanel->Visible = false;
}
private: System::Void addStockExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addStockPanel->Visible = false;
	stockMPanel->Visible = true;
}
};
}
