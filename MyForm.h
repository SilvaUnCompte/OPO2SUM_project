#pragma once
#include "AccessData.h"
#include "DataManager.h"
#include <iostream>
#include <vector>

namespace OPO2SUMproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

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
	private: System::Windows::Forms::Panel^ clientMPanel;
	private: System::Windows::Forms::Panel^ orderMPanel;
	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Panel^ stockMPanel;

	private: System::Windows::Forms::Panel^ addStockPanel;
	private: System::Windows::Forms::Panel^ loginTextPanel;



	private: System::Windows::Forms::Panel^ menuButtonPanel;
	private: System::Windows::Forms::Panel^ menuLogoPanel;
	private: System::Windows::Forms::Panel^ titleBarPanel;
	private: System::Windows::Forms::Panel^ accountPanel;
	private: System::Windows::Forms::Panel^ hubPanel;
	private: System::Windows::Forms::Panel^ catalogCartPanel;
	private: System::Windows::Forms::Panel^ catalogOrderPanel;
	private: System::Windows::Forms::Panel^ statisticMPanel;
	private: System::Windows::Forms::TextBox^ loginPasswordTextBox;
	private: System::Windows::Forms::TextBox^ loginUsernameTextBox;
	private: System::Windows::Forms::Label^ loginLoginLabel;
	private: System::Windows::Forms::Button^ loginRegisterButton;
	private: System::Windows::Forms::DataGridView^ clientMDGV;
	private: System::Windows::Forms::Button^ clientMSearchButton;
	private: System::Windows::Forms::Label^ clientMCityLabel;
	private: System::Windows::Forms::Label^ clientMLNameLabel;
	private: System::Windows::Forms::Label^ clientMFNameLabel;
	private: System::Windows::Forms::TextBox^ clientMCityTextBox;
	private: System::Windows::Forms::TextBox^ clientMLNameTextBox;
	private: System::Windows::Forms::TextBox^ clientMFNameTextBox;
	private: System::Windows::Forms::Button^ clientMModifyButton;
	private: System::Windows::Forms::Button^ clientMDeleteButton;





	private: System::Windows::Forms::Button^ loginValidateButton;
	private: System::Windows::Forms::Button^ registerValidateButton;
	private: System::Windows::Forms::Button^ registerLoginButton;
	private: System::Windows::Forms::Label^ registerPasswordLabel;
	private: System::Windows::Forms::TextBox^ registerPasswordTextBox;
	private: System::Windows::Forms::TextBox^ registerUsernameTextBox;
	private: System::Windows::Forms::Label^ registerUsernameLabel;










	private: System::Windows::Forms::Button^ addStockValidateButton;
	private: System::Windows::Forms::TextBox^ addStockQuantityTextBox;
	private: System::Windows::Forms::TextBox^ addStockNameTextBox;
	private: System::Windows::Forms::Label^ addStockQuantityLabel;
	private: System::Windows::Forms::Label^ addStockNameLabel;
	private: System::Windows::Forms::Label^ addStockTitleLabel;
	private: System::Windows::Forms::Button^ addStockExitButton;

	private: System::Windows::Forms::Label^ stockMLabel;
	private: System::Windows::Forms::Label^ informationStockNameLabel;
	private: System::Windows::Forms::Label^ addStockStockLabel;
	private: System::Windows::Forms::Label^ addStockTVALabel;
	private: System::Windows::Forms::Label^ addStockMargeLabel;
	private: System::Windows::Forms::Label^ addStockCostLabel;
	private: System::Windows::Forms::TextBox^ addStockCostTextBox;
	private: System::Windows::Forms::Label^ addStockRestockingLabel;
	private: System::Windows::Forms::TextBox^ addStockStockTextBox;
	private: System::Windows::Forms::TextBox^ addStockTVATextBox;
	private: System::Windows::Forms::TextBox^ addStockMargeTextBox;
	private: System::Windows::Forms::TextBox^ addStockRestockingTextBox;
	private: System::Windows::Forms::DataGridView^ dataGridViewstat;
	private: System::Windows::Forms::Label^ registerErrorLabel;
	private: System::Windows::Forms::Label^ registerLastnameLabel;
	private: System::Windows::Forms::Label^ registerFirstnameLabel;
	private: System::Windows::Forms::TextBox^ registerLastnameTextBox;
	private: System::Windows::Forms::TextBox^ registerFirstnameTextBox;
	private: System::Windows::Forms::DateTimePicker^ registerDateTimePicker;
	private: System::Windows::Forms::Label^ registerBirthdayLabel;
	private: System::Windows::Forms::Label^ loginErrorLabel;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ menuClientButton;
	private: System::Windows::Forms::Button^ menuStatisticButton;
	private: System::Windows::Forms::Button^ menuStockButton;
	private: System::Windows::Forms::Button^ menuOrderButton;
	private: System::Windows::Forms::Label^ titleBarLabel;
	private: System::Windows::Forms::Label^ nameProjectLabel;
	private: System::Windows::Forms::Button^ menuAccountButton;
	private: System::Windows::Forms::TextBox^ accountAddressMoreTextBox;
	private: System::Windows::Forms::TextBox^ accountAddressCityTextBox;
	private: System::Windows::Forms::TextBox^ accountAddressNbTextBox;
	private: System::Windows::Forms::TextBox^ accountBirthdayTextBox;
	private: System::Windows::Forms::TextBox^ accountPasswordTextBox;
	private: System::Windows::Forms::TextBox^ accountLastnameTextBox;
	private: System::Windows::Forms::TextBox^ accountFirstnameTextBox;
	private: System::Windows::Forms::TextBox^ accountUsernameTextBox;
	private: System::Windows::Forms::Label^ accountAddressMoreLabel;
	private: System::Windows::Forms::Label^ accountPostalCodeLabel;
	private: System::Windows::Forms::Label^ accountCityLabel;
	private: System::Windows::Forms::Label^ accountStreetLabel;
	private: System::Windows::Forms::Label^ accountAddressLabel;
	private: System::Windows::Forms::Label^ accountBirthdayLabel;
	private: System::Windows::Forms::Label^ accountPasswordLabel;
	private: System::Windows::Forms::Label^ accountLastnameLabel;
	private: System::Windows::Forms::Label^ accountFirstnameLabel;
	private: System::Windows::Forms::Label^ accountUsernameLabel;
	private: System::Windows::Forms::Label^ accountTitleLabel;
	private: System::Windows::Forms::ComboBox^ accountAddressListComboBox;
	private: System::Windows::Forms::Button^ accountModifyButton;
	private: System::Windows::Forms::Button^ accountAddressAddButton;
	private: System::Windows::Forms::Button^ accountAddressDeleteButton;
	private: System::Windows::Forms::Button^ menuPersonnellManageButton;
	private: System::Windows::Forms::Button^ menuCatalogButton;
	private: System::Windows::Forms::Label^ accountErrorLabel;
	private: System::Windows::Forms::Label^ accountErrorAddAddressLabel;
	private: System::Windows::Forms::NumericUpDown^ accountAddressPostalNumericUpDown;
	private: System::Windows::Forms::Label^ accountSeparatorLabel;

	private: System::Windows::Forms::Button^ stockMAddButton;
	private: System::Windows::Forms::Button^ catalogCartButton;
	private: System::Windows::Forms::ListView^ catalogGlobalListView;
	private: System::Windows::Forms::TextBox^ catalogResearchTextBox;
	private: System::Windows::Forms::Label^ catalogOrderResearchLabel;
	private: System::Windows::Forms::Label^ catalogOrderTitleLabel;
	private: System::Windows::Forms::Label^ catalogCartTitleLabel;
	private: System::Windows::Forms::Label^ catalogAddressShippingLabel;
	private: System::Windows::Forms::Label^ catalogAddressBillingLabel;
	private: System::Windows::Forms::ComboBox^ catalogAddressShippingListComboBox;
	private: System::Windows::Forms::ComboBox^ catalogAddressBillingListComboBox;
	private: System::Windows::Forms::Button^ catalogCheckoutButton;
	private: System::Windows::Forms::Button^ catalogBackButton;
	private: System::Windows::Forms::ListView^ catalogSelectedListView;

	private: System::Windows::Forms::Button^ Purchase_Value_button;
	private: System::Windows::Forms::Button^ Commercial_Value_button;
	private: System::Windows::Forms::Button^ buys_down_button;
	private: System::Windows::Forms::Button^ top_buys_button;
	private: System::Windows::Forms::Button^ Amount_per_client_button;
	private: System::Windows::Forms::Button^ Prod_u_restocking_button;
	private: System::Windows::Forms::Button^ turnover_button;
	private: System::Windows::Forms::Button^ Panier_Poyen_Button;
	private: System::Windows::Forms::Label^ stat_label;


	private:
		Account^ connectedAccount;
		AddressManager^ addressManager = gcnew AddressManager();
		ContainManager^ containManager = gcnew ContainManager();
		ProductManager^ productManager = gcnew ProductManager();
		OrderManager^ orderManager = gcnew OrderManager();
		BillManager^ billManager = gcnew BillManager();


		Account^ connectedClient;
		Account^ connectedEmployee;
		Address^ connectedClientAddress;
		PersonnelManager^ personnelManager = gcnew PersonnelManager();
	private: System::Windows::Forms::ListView^ orderGlobalListView;
	private: System::Windows::Forms::TextBox^ orderFilterTextBox;
	private: System::Windows::Forms::Panel^ preCatalogPanel;
	private: System::Windows::Forms::Label^ preCatalogSentenceLabel;

	private: System::Windows::Forms::Button^ preCatalogLoginButton;
	private: System::Windows::Forms::Label^ preCatalogTitleLabel;
	private: System::Windows::Forms::Label^ preCatalogSearchLabel;
	private: System::Windows::Forms::TextBox^ preCatalogTextBox;
	private: System::Windows::Forms::ListView^ preCatalogListView;
	private: System::Windows::Forms::Panel^ registerTextPanel;
	private: System::Windows::Forms::Label^ registerCreateYourAccountLabel;
	private: System::Windows::Forms::Label^ registerBlueBarLabel;
	private: System::Windows::Forms::Label^ registerBlueBarLabel4;

	private: System::Windows::Forms::Label^ registerBlueBarLabel2;
	private: System::Windows::Forms::Label^ registerBlueBarLabel3;
	private: System::Windows::Forms::Button^ loginReturnPreCatalogButton;
	private: System::Windows::Forms::Label^ loginYouWantRegisterLabel;
	private: System::Windows::Forms::Label^ loginPasswordLabel;
	private: System::Windows::Forms::Label^ loginUsernameLabel;
	private: System::Windows::Forms::Label^ loginBarLabel;
	private: System::Windows::Forms::Label^ loginBarLabel2;
	private: System::Windows::Forms::Panel^ clientModifyPanel;
	private: System::Windows::Forms::Label^ clientModifyBarLabel;
	private: System::Windows::Forms::NumericUpDown^ clientModifyPostalCodeNumericUpDown;





	private: System::Windows::Forms::Button^ clientModifyAddAddressButton;

	private: System::Windows::Forms::Button^ clientModifyDeleteAddressButton;

	private: System::Windows::Forms::ComboBox^ clientModifyAddressPickerComboBox;
	private: System::Windows::Forms::TextBox^ clientModifyMoreInfoTextBox;



	private: System::Windows::Forms::TextBox^ clientModifyCityTextBox;

	private: System::Windows::Forms::TextBox^ clientModifyAddressStreetTextBox;



	private: System::Windows::Forms::TextBox^ clientModifyLastnameTextBox;

	private: System::Windows::Forms::TextBox^ clientModifyFirstnameTextBox;

	private: System::Windows::Forms::TextBox^ clientModifyUsernameTextBox;
	private: System::Windows::Forms::Label^ clientModifyMoreInfoLabel;

	private: System::Windows::Forms::Label^ clientModifyPostalCodeLabel;





	private: System::Windows::Forms::Label^ clientModifyCityLabel;

	private: System::Windows::Forms::Label^ clientModifyAddressStreetLabel;

	private: System::Windows::Forms::Label^ clientModifyAddressLabel;

	private: System::Windows::Forms::Label^ clientModifyBirthdayLabel;


	private: System::Windows::Forms::Label^ clientModifyLastnameLabel;

	private: System::Windows::Forms::Label^ clientModifyFirstnameLabel;

	private: System::Windows::Forms::Label^ clientModifyUsernameLabel;

	private: System::Windows::Forms::Label^ clientModifyInformationsLabel;
	private: System::Windows::Forms::DateTimePicker^ clientModifyBirthdayDateTimePicker;
	private: System::Windows::Forms::Button^ clientModifyApplyModifButton;
	private: System::Windows::Forms::Label^ clientModifyErrorBoxLabel;

	private: System::Windows::Forms::Panel^ employeeListViewPanel;
	private: System::Windows::Forms::Panel^ clientListViewPanel;
	private: System::Windows::Forms::Button^ employeeAddNewEmployeeButton;
	private: System::Windows::Forms::ListView^ employeeListView;
	private: System::Windows::Forms::Panel^ employeeModifyPanel;
	private: System::Windows::Forms::Label^ employeeModifyErrorBoxLabel;

	private: System::Windows::Forms::Button^ employeeModifyApplyModifButton;

	private: System::Windows::Forms::DateTimePicker^ employeeModifyBirthdayDateTimePicker;
	private: System::Windows::Forms::Label^ barSeparateLabel;


	private: System::Windows::Forms::NumericUpDown^ employeeModifyPostalCodeNumericUpDown;
	private: System::Windows::Forms::Button^ employeeModifyAddAddressButton;


	private: System::Windows::Forms::Button^ employeeModifyDeleteAddressButton;

	private: System::Windows::Forms::ComboBox^ employeeModifyAddressPickerComboBox;
	private: System::Windows::Forms::TextBox^ employeeModifyMoreInfoTextBox;


	private: System::Windows::Forms::TextBox^ employeeModifyCityTextBox;

	private: System::Windows::Forms::TextBox^ employeeModifyAddressStreetTextBox;

	private: System::Windows::Forms::TextBox^ employeeModifyLastnameTextBox;

	private: System::Windows::Forms::TextBox^ employeeModifyFirstnameTextBox;

	private: System::Windows::Forms::TextBox^ employeeModifyUsernameTextBox;
	private: System::Windows::Forms::Label^ employeeModifyMoreInfoLabel;


	private: System::Windows::Forms::Label^ employeeModifyPostalCodeLabel;

	private: System::Windows::Forms::Label^ employeeModifyCityLabel;

	private: System::Windows::Forms::Label^ employeeModifyAddressStreetLabel;

	private: System::Windows::Forms::Label^ employeeModifyAddressLabel;

	private: System::Windows::Forms::Label^ employeeModifyBirthdayLabel;

	private: System::Windows::Forms::Label^ employeeModifyLastnameLabel;

	private: System::Windows::Forms::Label^ employeeModifyFirstnameLabel;

	private: System::Windows::Forms::Label^ employeeModifyUsernameLabel;

	private: System::Windows::Forms::Label^ employeeModifyInformationsLabel;

	private: System::Windows::Forms::ListView^ clientListView;
	private: System::Windows::Forms::Label^ employeeModifyHireDateLabel;
	private: System::Windows::Forms::DateTimePicker^ employeeModifyHireDateDateTimePicker;
	private: System::Windows::Forms::Button^ employeeModifyBackButton;
	private: System::Windows::Forms::Button^ clientModifyBackButton;
	private: System::Windows::Forms::Panel^ employeeAddEmployeePanel;
	private: System::Windows::Forms::Label^ employeeAddEmployeeLastnameLabel;

	private: System::Windows::Forms::Label^ employeeAddEmployeeFirstnameLabel;

	private: System::Windows::Forms::Label^ employeeAddEmployeeUsernameLabel;

	private: System::Windows::Forms::Label^ employeeAddEmployeeLabel;
	private: System::Windows::Forms::DateTimePicker^ employeeAddEmployeeHireDateDateTimePicker;

	private: System::Windows::Forms::DateTimePicker^ employeeAddEmployeeBirthdayDateTimePicker;

	private: System::Windows::Forms::TextBox^ employeeAddEmployeePasswordTextBox;

	private: System::Windows::Forms::TextBox^ employeeAddEmployeeLastnameTextbox;

	private: System::Windows::Forms::TextBox^ employeeAddEmployeeFirstnameTextBox;

	private: System::Windows::Forms::TextBox^ employeeAddEmployeeUsernameTextBox;
	private: System::Windows::Forms::Button^ employeeAddEmployeeCancelButton;


	private: System::Windows::Forms::Button^ employeeAddEmployeeAddButton;

	private: System::Windows::Forms::CheckBox^ employeeAddEmployeeManagerCheckBox;

	private: System::Windows::Forms::Label^ employeeAddEmployeeHireDateLabel;

	private: System::Windows::Forms::Label^ employeeAddEmployeeBirthdayLabel;
	private: System::Windows::Forms::Label^ employeeAddEmployeePasswordLabel;
	private: System::Windows::Forms::Label^ employeeAddEmployeeErrorBoxLabel;
	private: System::Windows::Forms::Panel^ simulationPanel;
	private: System::Windows::Forms::Label^ simulationResultLabel;

	private: System::Windows::Forms::Label^ simulationMarkdownLabel;
	private: System::Windows::Forms::Label^ simulationDiscountLabel;
	private: System::Windows::Forms::Label^ simulationMargeLabel;
	private: System::Windows::Forms::Label^ simulationTVALabel;
	private: System::Windows::Forms::Label^ simulationEntryPriceLabel;
	private: System::Windows::Forms::Label^ simulationTitleLabel;

	private: System::Windows::Forms::ComboBox^ simulationMarkdownComboBox;

	private: System::Windows::Forms::ComboBox^ simulationDiscountComboBox;
	private: System::Windows::Forms::ComboBox^ simulationMargeComboBox;
	private: System::Windows::Forms::ComboBox^ simulationTVAComboBox;
	private: System::Windows::Forms::TextBox^ simulationEntryPriceTextBox;












		   AccountManager^ accountManager = gcnew AccountManager();


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   this->loginPanel = (gcnew System::Windows::Forms::Panel());
			   this->loginTextPanel = (gcnew System::Windows::Forms::Panel());
			   this->loginReturnPreCatalogButton = (gcnew System::Windows::Forms::Button());
			   this->loginYouWantRegisterLabel = (gcnew System::Windows::Forms::Label());
			   this->loginPasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			   this->loginUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->loginValidateButton = (gcnew System::Windows::Forms::Button());
			   this->loginLoginLabel = (gcnew System::Windows::Forms::Label());
			   this->loginErrorLabel = (gcnew System::Windows::Forms::Label());
			   this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->loginBarLabel = (gcnew System::Windows::Forms::Label());
			   this->loginBarLabel2 = (gcnew System::Windows::Forms::Label());
			   this->registerPanel = (gcnew System::Windows::Forms::Panel());
			   this->registerTextPanel = (gcnew System::Windows::Forms::Panel());
			   this->registerUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerLoginButton = (gcnew System::Windows::Forms::Button());
			   this->registerErrorLabel = (gcnew System::Windows::Forms::Label());
			   this->registerDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->registerValidateButton = (gcnew System::Windows::Forms::Button());
			   this->registerBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->registerCreateYourAccountLabel = (gcnew System::Windows::Forms::Label());
			   this->registerFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerBlueBarLabel = (gcnew System::Windows::Forms::Label());
			   this->registerLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->registerPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerPasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->registerBlueBarLabel4 = (gcnew System::Windows::Forms::Label());
			   this->registerUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->registerFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->registerBlueBarLabel2 = (gcnew System::Windows::Forms::Label());
			   this->registerBlueBarLabel3 = (gcnew System::Windows::Forms::Label());
			   this->stockMPanel = (gcnew System::Windows::Forms::Panel());
			   this->stockMAddButton = (gcnew System::Windows::Forms::Button());
			   this->stockMLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockPanel = (gcnew System::Windows::Forms::Panel());
			   this->addStockRestockingTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockStockTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockTVATextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockMargeTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockCostTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockRestockingLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockStockLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockTVALabel = (gcnew System::Windows::Forms::Label());
			   this->addStockMargeLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockCostLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockValidateButton = (gcnew System::Windows::Forms::Button());
			   this->addStockQuantityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockNameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->addStockQuantityLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockNameLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->addStockExitButton = (gcnew System::Windows::Forms::Button());
			   this->orderMPanel = (gcnew System::Windows::Forms::Panel());
			   this->orderFilterTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->orderGlobalListView = (gcnew System::Windows::Forms::ListView());
			   this->clientMPanel = (gcnew System::Windows::Forms::Panel());
			   this->clientMModifyButton = (gcnew System::Windows::Forms::Button());
			   this->clientMDeleteButton = (gcnew System::Windows::Forms::Button());
			   this->clientMFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientMLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientMCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientMDGV = (gcnew System::Windows::Forms::DataGridView());
			   this->clientMSearchButton = (gcnew System::Windows::Forms::Button());
			   this->clientMCityLabel = (gcnew System::Windows::Forms::Label());
			   this->clientMFNameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientMLNameLabel = (gcnew System::Windows::Forms::Label());
			   this->menuButtonPanel = (gcnew System::Windows::Forms::Panel());
			   this->menuPersonnellManageButton = (gcnew System::Windows::Forms::Button());
			   this->menuCatalogButton = (gcnew System::Windows::Forms::Button());
			   this->menuAccountButton = (gcnew System::Windows::Forms::Button());
			   this->menuStatisticButton = (gcnew System::Windows::Forms::Button());
			   this->menuStockButton = (gcnew System::Windows::Forms::Button());
			   this->menuOrderButton = (gcnew System::Windows::Forms::Button());
			   this->menuClientButton = (gcnew System::Windows::Forms::Button());
			   this->menuLogoPanel = (gcnew System::Windows::Forms::Panel());
			   this->nameProjectLabel = (gcnew System::Windows::Forms::Label());
			   this->titleBarPanel = (gcnew System::Windows::Forms::Panel());
			   this->titleBarLabel = (gcnew System::Windows::Forms::Label());
			   this->accountPanel = (gcnew System::Windows::Forms::Panel());
			   this->accountSeparatorLabel = (gcnew System::Windows::Forms::Label());
			   this->accountAddressPostalNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			   this->accountErrorAddAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->accountErrorLabel = (gcnew System::Windows::Forms::Label());
			   this->accountAddressAddButton = (gcnew System::Windows::Forms::Button());
			   this->accountAddressDeleteButton = (gcnew System::Windows::Forms::Button());
			   this->accountModifyButton = (gcnew System::Windows::Forms::Button());
			   this->accountAddressListComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->accountAddressMoreTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountAddressCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountAddressNbTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountBirthdayTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountAddressMoreLabel = (gcnew System::Windows::Forms::Label());
			   this->accountPostalCodeLabel = (gcnew System::Windows::Forms::Label());
			   this->accountCityLabel = (gcnew System::Windows::Forms::Label());
			   this->accountStreetLabel = (gcnew System::Windows::Forms::Label());
			   this->accountAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->accountBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->accountPasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->accountLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->accountFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->accountUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->accountTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->hubPanel = (gcnew System::Windows::Forms::Panel());
			   this->statisticMPanel = (gcnew System::Windows::Forms::Panel());
			   this->simulationPanel = (gcnew System::Windows::Forms::Panel());
			   this->simulationResultLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationMarkdownLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationDiscountLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationMargeLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationTVALabel = (gcnew System::Windows::Forms::Label());
			   this->simulationEntryPriceLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationMarkdownComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationDiscountComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationMargeComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationTVAComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationEntryPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->Purchase_Value_button = (gcnew System::Windows::Forms::Button());
			   this->Commercial_Value_button = (gcnew System::Windows::Forms::Button());
			   this->buys_down_button = (gcnew System::Windows::Forms::Button());
			   this->top_buys_button = (gcnew System::Windows::Forms::Button());
			   this->Amount_per_client_button = (gcnew System::Windows::Forms::Button());
			   this->Prod_u_restocking_button = (gcnew System::Windows::Forms::Button());
			   this->turnover_button = (gcnew System::Windows::Forms::Button());
			   this->Panier_Poyen_Button = (gcnew System::Windows::Forms::Button());
			   this->dataGridViewstat = (gcnew System::Windows::Forms::DataGridView());
			   this->stat_label = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeePanel = (gcnew System::Windows::Forms::Panel());
			   this->employeeAddEmployeeErrorBoxLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeHireDateDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->employeeAddEmployeeBirthdayDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->employeeAddEmployeePasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeLastnameTextbox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeCancelButton = (gcnew System::Windows::Forms::Button());
			   this->employeeAddEmployeeAddButton = (gcnew System::Windows::Forms::Button());
			   this->employeeAddEmployeeManagerCheckBox = (gcnew System::Windows::Forms::CheckBox());
			   this->employeeAddEmployeeHireDateLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeePasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeListViewPanel = (gcnew System::Windows::Forms::Panel());
			   this->employeeAddNewEmployeeButton = (gcnew System::Windows::Forms::Button());
			   this->employeeListView = (gcnew System::Windows::Forms::ListView());
			   this->clientListViewPanel = (gcnew System::Windows::Forms::Panel());
			   this->clientListView = (gcnew System::Windows::Forms::ListView());
			   this->clientModifyPanel = (gcnew System::Windows::Forms::Panel());
			   this->clientModifyBackButton = (gcnew System::Windows::Forms::Button());
			   this->clientModifyErrorBoxLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyApplyModifButton = (gcnew System::Windows::Forms::Button());
			   this->clientModifyBirthdayDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->clientModifyBarLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyPostalCodeNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			   this->clientModifyAddAddressButton = (gcnew System::Windows::Forms::Button());
			   this->clientModifyDeleteAddressButton = (gcnew System::Windows::Forms::Button());
			   this->clientModifyAddressPickerComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->clientModifyMoreInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyAddressStreetTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyMoreInfoLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyPostalCodeLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyCityLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyAddressStreetLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyInformationsLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyPanel = (gcnew System::Windows::Forms::Panel());
			   this->employeeModifyBackButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyHireDateLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyHireDateDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->employeeModifyErrorBoxLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyApplyModifButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyBirthdayDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->barSeparateLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyPostalCodeNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			   this->employeeModifyAddAddressButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyDeleteAddressButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyAddressPickerComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->employeeModifyMoreInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyAddressStreetTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyMoreInfoLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyPostalCodeLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyCityLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyAddressStreetLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyInformationsLabel = (gcnew System::Windows::Forms::Label());
			   this->preCatalogPanel = (gcnew System::Windows::Forms::Panel());
			   this->preCatalogSentenceLabel = (gcnew System::Windows::Forms::Label());
			   this->preCatalogLoginButton = (gcnew System::Windows::Forms::Button());
			   this->preCatalogTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->preCatalogSearchLabel = (gcnew System::Windows::Forms::Label());
			   this->preCatalogTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->preCatalogListView = (gcnew System::Windows::Forms::ListView());
			   this->catalogOrderPanel = (gcnew System::Windows::Forms::Panel());
			   this->catalogCartButton = (gcnew System::Windows::Forms::Button());
			   this->catalogGlobalListView = (gcnew System::Windows::Forms::ListView());
			   this->catalogResearchTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->catalogOrderResearchLabel = (gcnew System::Windows::Forms::Label());
			   this->catalogOrderTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->catalogCartPanel = (gcnew System::Windows::Forms::Panel());
			   this->catalogAddressShippingLabel = (gcnew System::Windows::Forms::Label());
			   this->catalogAddressBillingLabel = (gcnew System::Windows::Forms::Label());
			   this->catalogAddressShippingListComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->catalogAddressBillingListComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->catalogCheckoutButton = (gcnew System::Windows::Forms::Button());
			   this->catalogBackButton = (gcnew System::Windows::Forms::Button());
			   this->catalogSelectedListView = (gcnew System::Windows::Forms::ListView());
			   this->catalogCartTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->loginPanel->SuspendLayout();
			   this->loginTextPanel->SuspendLayout();
			   this->registerPanel->SuspendLayout();
			   this->registerTextPanel->SuspendLayout();
			   this->stockMPanel->SuspendLayout();
			   this->addStockPanel->SuspendLayout();
			   this->orderMPanel->SuspendLayout();
			   this->clientMPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->BeginInit();
			   this->menuButtonPanel->SuspendLayout();
			   this->menuLogoPanel->SuspendLayout();
			   this->titleBarPanel->SuspendLayout();
			   this->accountPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accountAddressPostalNumericUpDown))->BeginInit();
			   this->hubPanel->SuspendLayout();
			   this->statisticMPanel->SuspendLayout();
			   this->simulationPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewstat))->BeginInit();
			   this->employeeAddEmployeePanel->SuspendLayout();
			   this->employeeListViewPanel->SuspendLayout();
			   this->clientListViewPanel->SuspendLayout();
			   this->clientModifyPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientModifyPostalCodeNumericUpDown))->BeginInit();
			   this->employeeModifyPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeModifyPostalCodeNumericUpDown))->BeginInit();
			   this->preCatalogPanel->SuspendLayout();
			   this->catalogOrderPanel->SuspendLayout();
			   this->catalogCartPanel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // loginPanel
			   // 
			   this->loginPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				   static_cast<System::Int32>(static_cast<System::Byte>(230)));
			   this->loginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->loginPanel->Controls->Add(this->loginTextPanel);
			   this->loginPanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginPanel->Location = System::Drawing::Point(0, 0);
			   this->loginPanel->Margin = System::Windows::Forms::Padding(0);
			   this->loginPanel->Name = L"loginPanel";
			   this->loginPanel->Size = System::Drawing::Size(1188, 687);
			   this->loginPanel->TabIndex = 0;
			   // 
			   // loginTextPanel
			   // 
			   this->loginTextPanel->BackColor = System::Drawing::Color::White;
			   this->loginTextPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->loginTextPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->loginTextPanel->Controls->Add(this->loginReturnPreCatalogButton);
			   this->loginTextPanel->Controls->Add(this->loginYouWantRegisterLabel);
			   this->loginTextPanel->Controls->Add(this->loginPasswordLabel);
			   this->loginTextPanel->Controls->Add(this->loginRegisterButton);
			   this->loginTextPanel->Controls->Add(this->loginUsernameLabel);
			   this->loginTextPanel->Controls->Add(this->loginPasswordTextBox);
			   this->loginTextPanel->Controls->Add(this->loginValidateButton);
			   this->loginTextPanel->Controls->Add(this->loginLoginLabel);
			   this->loginTextPanel->Controls->Add(this->loginErrorLabel);
			   this->loginTextPanel->Controls->Add(this->loginUsernameTextBox);
			   this->loginTextPanel->Controls->Add(this->loginBarLabel);
			   this->loginTextPanel->Controls->Add(this->loginBarLabel2);
			   this->loginTextPanel->Location = System::Drawing::Point(399, 162);
			   this->loginTextPanel->Name = L"loginTextPanel";
			   this->loginTextPanel->Size = System::Drawing::Size(390, 363);
			   this->loginTextPanel->TabIndex = 19;
			   // 
			   // loginReturnPreCatalogButton
			   // 
			   this->loginReturnPreCatalogButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->loginReturnPreCatalogButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginReturnPreCatalogButton->Location = System::Drawing::Point(3, 3);
			   this->loginReturnPreCatalogButton->Name = L"loginReturnPreCatalogButton";
			   this->loginReturnPreCatalogButton->Size = System::Drawing::Size(30, 30);
			   this->loginReturnPreCatalogButton->TabIndex = 24;
			   this->loginReturnPreCatalogButton->Text = L"X";
			   this->loginReturnPreCatalogButton->UseVisualStyleBackColor = true;
			   this->loginReturnPreCatalogButton->Click += gcnew System::EventHandler(this, &MyForm::loginReturnPreCatalogButton_Click);
			   // 
			   // loginYouWantRegisterLabel
			   // 
			   this->loginYouWantRegisterLabel->AutoSize = true;
			   this->loginYouWantRegisterLabel->BackColor = System::Drawing::Color::Transparent;
			   this->loginYouWantRegisterLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginYouWantRegisterLabel->Location = System::Drawing::Point(57, 326);
			   this->loginYouWantRegisterLabel->Name = L"loginYouWantRegisterLabel";
			   this->loginYouWantRegisterLabel->Size = System::Drawing::Size(189, 17);
			   this->loginYouWantRegisterLabel->TabIndex = 23;
			   this->loginYouWantRegisterLabel->Text = L"You don\'t have an account \?";
			   // 
			   // loginPasswordLabel
			   // 
			   this->loginPasswordLabel->AutoSize = true;
			   this->loginPasswordLabel->BackColor = System::Drawing::Color::Transparent;
			   this->loginPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->loginPasswordLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginPasswordLabel->Location = System::Drawing::Point(96, 133);
			   this->loginPasswordLabel->Name = L"loginPasswordLabel";
			   this->loginPasswordLabel->Size = System::Drawing::Size(69, 17);
			   this->loginPasswordLabel->TabIndex = 20;
			   this->loginPasswordLabel->Text = L"Password";
			   // 
			   // loginRegisterButton
			   // 
			   this->loginRegisterButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->loginRegisterButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				   static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			   this->loginRegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->loginRegisterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->loginRegisterButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginRegisterButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->loginRegisterButton->Location = System::Drawing::Point(261, 319);
			   this->loginRegisterButton->Margin = System::Windows::Forms::Padding(0);
			   this->loginRegisterButton->Name = L"loginRegisterButton";
			   this->loginRegisterButton->Size = System::Drawing::Size(78, 28);
			   this->loginRegisterButton->TabIndex = 5;
			   this->loginRegisterButton->Text = L"Register";
			   this->loginRegisterButton->UseVisualStyleBackColor = false;
			   this->loginRegisterButton->Click += gcnew System::EventHandler(this, &MyForm::loginRegisterButton_Click);
			   // 
			   // loginUsernameLabel
			   // 
			   this->loginUsernameLabel->AutoSize = true;
			   this->loginUsernameLabel->BackColor = System::Drawing::Color::Transparent;
			   this->loginUsernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->loginUsernameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginUsernameLabel->Location = System::Drawing::Point(96, 79);
			   this->loginUsernameLabel->Name = L"loginUsernameLabel";
			   this->loginUsernameLabel->Size = System::Drawing::Size(73, 17);
			   this->loginUsernameLabel->TabIndex = 19;
			   this->loginUsernameLabel->Text = L"Username";
			   // 
			   // loginPasswordTextBox
			   // 
			   this->loginPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginPasswordTextBox->BackColor = System::Drawing::Color::White;
			   this->loginPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->loginPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->loginPasswordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginPasswordTextBox->Location = System::Drawing::Point(92, 154);
			   this->loginPasswordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->loginPasswordTextBox->Name = L"loginPasswordTextBox";
			   this->loginPasswordTextBox->Size = System::Drawing::Size(155, 20);
			   this->loginPasswordTextBox->TabIndex = 3;
			   this->loginPasswordTextBox->UseSystemPasswordChar = true;
			   this->loginPasswordTextBox->Click += gcnew System::EventHandler(this, &MyForm::loginPasswordTextBox_Click);
			   // 
			   // loginValidateButton
			   // 
			   this->loginValidateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				   static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			   this->loginValidateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->loginValidateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->loginValidateButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginValidateButton->Location = System::Drawing::Point(43, 255);
			   this->loginValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->loginValidateButton->Name = L"loginValidateButton";
			   this->loginValidateButton->Size = System::Drawing::Size(298, 45);
			   this->loginValidateButton->TabIndex = 11;
			   this->loginValidateButton->Text = L"Login";
			   this->loginValidateButton->UseVisualStyleBackColor = false;
			   this->loginValidateButton->Click += gcnew System::EventHandler(this, &MyForm::loginValidateButton_Click);
			   // 
			   // loginLoginLabel
			   // 
			   this->loginLoginLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginLoginLabel->AutoSize = true;
			   this->loginLoginLabel->BackColor = System::Drawing::Color::Transparent;
			   this->loginLoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->loginLoginLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginLoginLabel->Location = System::Drawing::Point(136, 4);
			   this->loginLoginLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->loginLoginLabel->Name = L"loginLoginLabel";
			   this->loginLoginLabel->Size = System::Drawing::Size(86, 32);
			   this->loginLoginLabel->TabIndex = 0;
			   this->loginLoginLabel->Text = L"Login";
			   // 
			   // loginErrorLabel
			   // 
			   this->loginErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginErrorLabel->BackColor = System::Drawing::Color::Transparent;
			   this->loginErrorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			   this->loginErrorLabel->Location = System::Drawing::Point(42, 202);
			   this->loginErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->loginErrorLabel->Name = L"loginErrorLabel";
			   this->loginErrorLabel->Size = System::Drawing::Size(298, 41);
			   this->loginErrorLabel->TabIndex = 18;
			   this->loginErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // loginUsernameTextBox
			   // 
			   this->loginUsernameTextBox->BackColor = System::Drawing::Color::White;
			   this->loginUsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->loginUsernameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->loginUsernameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginUsernameTextBox->Location = System::Drawing::Point(93, 100);
			   this->loginUsernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->loginUsernameTextBox->Name = L"loginUsernameTextBox";
			   this->loginUsernameTextBox->Size = System::Drawing::Size(155, 20);
			   this->loginUsernameTextBox->TabIndex = 2;
			   this->loginUsernameTextBox->Click += gcnew System::EventHandler(this, &MyForm::loginUsernameTextBox_Click);
			   // 
			   // loginBarLabel
			   // 
			   this->loginBarLabel->AutoSize = true;
			   this->loginBarLabel->BackColor = System::Drawing::Color::Transparent;
			   this->loginBarLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginBarLabel->Location = System::Drawing::Point(88, 107);
			   this->loginBarLabel->Name = L"loginBarLabel";
			   this->loginBarLabel->Size = System::Drawing::Size(160, 17);
			   this->loginBarLabel->TabIndex = 21;
			   this->loginBarLabel->Text = L"___________________";
			   // 
			   // loginBarLabel2
			   // 
			   this->loginBarLabel2->AutoSize = true;
			   this->loginBarLabel2->BackColor = System::Drawing::Color::Transparent;
			   this->loginBarLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->loginBarLabel2->Location = System::Drawing::Point(88, 161);
			   this->loginBarLabel2->Name = L"loginBarLabel2";
			   this->loginBarLabel2->Size = System::Drawing::Size(160, 17);
			   this->loginBarLabel2->TabIndex = 22;
			   this->loginBarLabel2->Text = L"___________________";
			   // 
			   // registerPanel
			   // 
			   this->registerPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->registerPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				   static_cast<System::Int32>(static_cast<System::Byte>(230)));
			   this->registerPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->registerPanel->Controls->Add(this->registerTextPanel);
			   this->registerPanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->registerPanel->Location = System::Drawing::Point(0, 0);
			   this->registerPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerPanel->Name = L"registerPanel";
			   this->registerPanel->Size = System::Drawing::Size(1188, 687);
			   this->registerPanel->TabIndex = 12;
			   // 
			   // registerTextPanel
			   // 
			   this->registerTextPanel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerTextPanel->BackColor = System::Drawing::Color::White;
			   this->registerTextPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->registerTextPanel->Controls->Add(this->registerUsernameTextBox);
			   this->registerTextPanel->Controls->Add(this->registerLoginButton);
			   this->registerTextPanel->Controls->Add(this->registerErrorLabel);
			   this->registerTextPanel->Controls->Add(this->registerDateTimePicker);
			   this->registerTextPanel->Controls->Add(this->registerValidateButton);
			   this->registerTextPanel->Controls->Add(this->registerBirthdayLabel);
			   this->registerTextPanel->Controls->Add(this->registerCreateYourAccountLabel);
			   this->registerTextPanel->Controls->Add(this->registerFirstnameTextBox);
			   this->registerTextPanel->Controls->Add(this->registerBlueBarLabel);
			   this->registerTextPanel->Controls->Add(this->registerLastnameTextBox);
			   this->registerTextPanel->Controls->Add(this->registerLastnameLabel);
			   this->registerTextPanel->Controls->Add(this->registerPasswordTextBox);
			   this->registerTextPanel->Controls->Add(this->registerPasswordLabel);
			   this->registerTextPanel->Controls->Add(this->registerBlueBarLabel4);
			   this->registerTextPanel->Controls->Add(this->registerUsernameLabel);
			   this->registerTextPanel->Controls->Add(this->registerFirstnameLabel);
			   this->registerTextPanel->Controls->Add(this->registerBlueBarLabel2);
			   this->registerTextPanel->Controls->Add(this->registerBlueBarLabel3);
			   this->registerTextPanel->Location = System::Drawing::Point(399, 93);
			   this->registerTextPanel->Name = L"registerTextPanel";
			   this->registerTextPanel->Size = System::Drawing::Size(390, 500);
			   this->registerTextPanel->TabIndex = 18;
			   // 
			   // registerUsernameTextBox
			   // 
			   this->registerUsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->registerUsernameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			   this->registerUsernameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerUsernameTextBox->Location = System::Drawing::Point(32, 84);
			   this->registerUsernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			   this->registerUsernameTextBox->Size = System::Drawing::Size(133, 20);
			   this->registerUsernameTextBox->TabIndex = 2;
			   // 
			   // registerLoginButton
			   // 
			   this->registerLoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->registerLoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				   static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			   this->registerLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->registerLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerLoginButton->Location = System::Drawing::Point(3, 3);
			   this->registerLoginButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerLoginButton->Name = L"registerLoginButton";
			   this->registerLoginButton->Size = System::Drawing::Size(30, 30);
			   this->registerLoginButton->TabIndex = 5;
			   this->registerLoginButton->Text = L"X";
			   this->registerLoginButton->UseVisualStyleBackColor = false;
			   this->registerLoginButton->Click += gcnew System::EventHandler(this, &MyForm::registerLoginButton_Click);
			   // 
			   // registerErrorLabel
			   // 
			   this->registerErrorLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			   this->registerErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerErrorLabel->ForeColor = System::Drawing::Color::Red;
			   this->registerErrorLabel->Location = System::Drawing::Point(56, 371);
			   this->registerErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->registerErrorLabel->Name = L"registerErrorLabel";
			   this->registerErrorLabel->Size = System::Drawing::Size(278, 49);
			   this->registerErrorLabel->TabIndex = 16;
			   this->registerErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // registerDateTimePicker
			   // 
			   this->registerDateTimePicker->CalendarForeColor = System::Drawing::Color::Black;
			   this->registerDateTimePicker->Location = System::Drawing::Point(33, 340);
			   this->registerDateTimePicker->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerDateTimePicker->Name = L"registerDateTimePicker";
			   this->registerDateTimePicker->Size = System::Drawing::Size(229, 22);
			   this->registerDateTimePicker->TabIndex = 9;
			   this->registerDateTimePicker->MaxDate = DateTime::Now;
			   // 
			   // registerValidateButton
			   // 
			   this->registerValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->registerValidateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				   static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			   this->registerValidateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->registerValidateButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerValidateButton->Location = System::Drawing::Point(71, 434);
			   this->registerValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerValidateButton->Name = L"registerValidateButton";
			   this->registerValidateButton->Size = System::Drawing::Size(278, 41);
			   this->registerValidateButton->TabIndex = 11;
			   this->registerValidateButton->Text = L"Register";
			   this->registerValidateButton->UseVisualStyleBackColor = false;
			   this->registerValidateButton->Click += gcnew System::EventHandler(this, &MyForm::registerValidateButton_Click);
			   // 
			   // registerBirthdayLabel
			   // 
			   this->registerBirthdayLabel->AutoSize = true;
			   this->registerBirthdayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			   this->registerBirthdayLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerBirthdayLabel->Location = System::Drawing::Point(29, 309);
			   this->registerBirthdayLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->registerBirthdayLabel->Name = L"registerBirthdayLabel";
			   this->registerBirthdayLabel->Size = System::Drawing::Size(71, 20);
			   this->registerBirthdayLabel->TabIndex = 17;
			   this->registerBirthdayLabel->Text = L"Birthday";
			   // 
			   // registerCreateYourAccountLabel
			   // 
			   this->registerCreateYourAccountLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerCreateYourAccountLabel->AutoSize = true;
			   this->registerCreateYourAccountLabel->BackColor = System::Drawing::Color::Transparent;
			   this->registerCreateYourAccountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerCreateYourAccountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerCreateYourAccountLabel->Location = System::Drawing::Point(73, 7);
			   this->registerCreateYourAccountLabel->Name = L"registerCreateYourAccountLabel";
			   this->registerCreateYourAccountLabel->Size = System::Drawing::Size(233, 29);
			   this->registerCreateYourAccountLabel->TabIndex = 19;
			   this->registerCreateYourAccountLabel->Text = L"Create Your Account";
			   // 
			   // registerFirstnameTextBox
			   // 
			   this->registerFirstnameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->registerFirstnameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerFirstnameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerFirstnameTextBox->Location = System::Drawing::Point(32, 144);
			   this->registerFirstnameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerFirstnameTextBox->Name = L"registerFirstnameTextBox";
			   this->registerFirstnameTextBox->Size = System::Drawing::Size(129, 20);
			   this->registerFirstnameTextBox->TabIndex = 12;
			   // 
			   // registerBlueBarLabel
			   // 
			   this->registerBlueBarLabel->AutoSize = true;
			   this->registerBlueBarLabel->BackColor = System::Drawing::Color::Transparent;
			   this->registerBlueBarLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerBlueBarLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerBlueBarLabel->Location = System::Drawing::Point(29, 88);
			   this->registerBlueBarLabel->Name = L"registerBlueBarLabel";
			   this->registerBlueBarLabel->Size = System::Drawing::Size(209, 20);
			   this->registerBlueBarLabel->TabIndex = 19;
			   this->registerBlueBarLabel->Text = L"____________________";
			   // 
			   // registerLastnameTextBox
			   // 
			   this->registerLastnameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->registerLastnameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerLastnameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerLastnameTextBox->Location = System::Drawing::Point(33, 209);
			   this->registerLastnameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerLastnameTextBox->Name = L"registerLastnameTextBox";
			   this->registerLastnameTextBox->Size = System::Drawing::Size(129, 20);
			   this->registerLastnameTextBox->TabIndex = 13;
			   // 
			   // registerLastnameLabel
			   // 
			   this->registerLastnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerLastnameLabel->AutoSize = true;
			   this->registerLastnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerLastnameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerLastnameLabel->Location = System::Drawing::Point(29, 184);
			   this->registerLastnameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->registerLastnameLabel->Name = L"registerLastnameLabel";
			   this->registerLastnameLabel->Size = System::Drawing::Size(83, 20);
			   this->registerLastnameLabel->TabIndex = 15;
			   this->registerLastnameLabel->Text = L"Lastname";
			   // 
			   // registerPasswordTextBox
			   // 
			   this->registerPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->registerPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerPasswordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerPasswordTextBox->Location = System::Drawing::Point(32, 272);
			   this->registerPasswordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->registerPasswordTextBox->Name = L"registerPasswordTextBox";
			   this->registerPasswordTextBox->PasswordChar = '*';
			   this->registerPasswordTextBox->Size = System::Drawing::Size(129, 20);
			   this->registerPasswordTextBox->TabIndex = 3;
			   // 
			   // registerPasswordLabel
			   // 
			   this->registerPasswordLabel->AutoSize = true;
			   this->registerPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerPasswordLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerPasswordLabel->Location = System::Drawing::Point(28, 247);
			   this->registerPasswordLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->registerPasswordLabel->Name = L"registerPasswordLabel";
			   this->registerPasswordLabel->Size = System::Drawing::Size(83, 20);
			   this->registerPasswordLabel->TabIndex = 4;
			   this->registerPasswordLabel->Text = L"Password";
			   // 
			   // registerBlueBarLabel4
			   // 
			   this->registerBlueBarLabel4->AutoSize = true;
			   this->registerBlueBarLabel4->BackColor = System::Drawing::Color::Transparent;
			   this->registerBlueBarLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerBlueBarLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerBlueBarLabel4->Location = System::Drawing::Point(28, 281);
			   this->registerBlueBarLabel4->Name = L"registerBlueBarLabel4";
			   this->registerBlueBarLabel4->Size = System::Drawing::Size(209, 20);
			   this->registerBlueBarLabel4->TabIndex = 20;
			   this->registerBlueBarLabel4->Text = L"____________________";
			   // 
			   // registerUsernameLabel
			   // 
			   this->registerUsernameLabel->AutoSize = true;
			   this->registerUsernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerUsernameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerUsernameLabel->Location = System::Drawing::Point(29, 60);
			   this->registerUsernameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->registerUsernameLabel->Name = L"registerUsernameLabel";
			   this->registerUsernameLabel->Size = System::Drawing::Size(86, 20);
			   this->registerUsernameLabel->TabIndex = 1;
			   this->registerUsernameLabel->Text = L"Username";
			   // 
			   // registerFirstnameLabel
			   // 
			   this->registerFirstnameLabel->AutoSize = true;
			   this->registerFirstnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerFirstnameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerFirstnameLabel->Location = System::Drawing::Point(28, 119);
			   this->registerFirstnameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->registerFirstnameLabel->Name = L"registerFirstnameLabel";
			   this->registerFirstnameLabel->Size = System::Drawing::Size(84, 20);
			   this->registerFirstnameLabel->TabIndex = 14;
			   this->registerFirstnameLabel->Text = L"Firstname";
			   // 
			   // registerBlueBarLabel2
			   // 
			   this->registerBlueBarLabel2->AutoSize = true;
			   this->registerBlueBarLabel2->BackColor = System::Drawing::Color::Transparent;
			   this->registerBlueBarLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerBlueBarLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerBlueBarLabel2->Location = System::Drawing::Point(28, 152);
			   this->registerBlueBarLabel2->Name = L"registerBlueBarLabel2";
			   this->registerBlueBarLabel2->Size = System::Drawing::Size(209, 20);
			   this->registerBlueBarLabel2->TabIndex = 21;
			   this->registerBlueBarLabel2->Text = L"____________________";
			   // 
			   // registerBlueBarLabel3
			   // 
			   this->registerBlueBarLabel3->AutoSize = true;
			   this->registerBlueBarLabel3->BackColor = System::Drawing::Color::Transparent;
			   this->registerBlueBarLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerBlueBarLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->registerBlueBarLabel3->Location = System::Drawing::Point(29, 216);
			   this->registerBlueBarLabel3->Name = L"registerBlueBarLabel3";
			   this->registerBlueBarLabel3->Size = System::Drawing::Size(209, 20);
			   this->registerBlueBarLabel3->TabIndex = 22;
			   this->registerBlueBarLabel3->Text = L"____________________";
			   // 
			   // stockMPanel
			   // 
			   this->stockMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->stockMPanel->Controls->Add(this->stockMAddButton);
			   this->stockMPanel->Controls->Add(this->stockMLabel);
			   this->stockMPanel->Location = System::Drawing::Point(220, 80);
			   this->stockMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->stockMPanel->Name = L"stockMPanel";
			   this->stockMPanel->Size = System::Drawing::Size(968, 607);
			   this->stockMPanel->TabIndex = 9;
			   // 
			   // stockMAddButton
			   // 
			   this->stockMAddButton->Location = System::Drawing::Point(831, 547);
			   this->stockMAddButton->Name = L"stockMAddButton";
			   this->stockMAddButton->Size = System::Drawing::Size(126, 49);
			   this->stockMAddButton->TabIndex = 16;
			   this->stockMAddButton->Text = L"Add new product";
			   this->stockMAddButton->UseVisualStyleBackColor = true;
			   this->stockMAddButton->Click += gcnew System::EventHandler(this, &MyForm::stockMAddButton_Click_1);
			   // 
			   // stockMLabel
			   // 
			   this->stockMLabel->AutoSize = true;
			   this->stockMLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->stockMLabel->Location = System::Drawing::Point(3, 3);
			   this->stockMLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->stockMLabel->Name = L"stockMLabel";
			   this->stockMLabel->Size = System::Drawing::Size(250, 38);
			   this->stockMLabel->TabIndex = 15;
			   this->stockMLabel->Text = L"Stock Manager";
			   // 
			   // addStockPanel
			   // 
			   this->addStockPanel->Controls->Add(this->addStockRestockingTextBox);
			   this->addStockPanel->Controls->Add(this->addStockStockTextBox);
			   this->addStockPanel->Controls->Add(this->addStockTVATextBox);
			   this->addStockPanel->Controls->Add(this->addStockMargeTextBox);
			   this->addStockPanel->Controls->Add(this->addStockCostTextBox);
			   this->addStockPanel->Controls->Add(this->addStockRestockingLabel);
			   this->addStockPanel->Controls->Add(this->addStockStockLabel);
			   this->addStockPanel->Controls->Add(this->addStockTVALabel);
			   this->addStockPanel->Controls->Add(this->addStockMargeLabel);
			   this->addStockPanel->Controls->Add(this->addStockCostLabel);
			   this->addStockPanel->Controls->Add(this->addStockValidateButton);
			   this->addStockPanel->Controls->Add(this->addStockQuantityTextBox);
			   this->addStockPanel->Controls->Add(this->addStockNameTextBox);
			   this->addStockPanel->Controls->Add(this->addStockQuantityLabel);
			   this->addStockPanel->Controls->Add(this->addStockNameLabel);
			   this->addStockPanel->Controls->Add(this->addStockTitleLabel);
			   this->addStockPanel->Controls->Add(this->addStockExitButton);
			   this->addStockPanel->Location = System::Drawing::Point(220, 80);
			   this->addStockPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockPanel->Name = L"addStockPanel";
			   this->addStockPanel->Size = System::Drawing::Size(968, 607);
			   this->addStockPanel->TabIndex = 9;
			   // 
			   // addStockRestockingTextBox
			   // 
			   this->addStockRestockingTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockRestockingTextBox->Location = System::Drawing::Point(2, 391);
			   this->addStockRestockingTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockRestockingTextBox->Name = L"addStockRestockingTextBox";
			   this->addStockRestockingTextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockRestockingTextBox->TabIndex = 16;
			   // 
			   // addStockStockTextBox
			   // 
			   this->addStockStockTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockStockTextBox->Location = System::Drawing::Point(2, 343);
			   this->addStockStockTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockStockTextBox->Name = L"addStockStockTextBox";
			   this->addStockStockTextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockStockTextBox->TabIndex = 17;
			   // 
			   // addStockTVATextBox
			   // 
			   this->addStockTVATextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockTVATextBox->Location = System::Drawing::Point(2, 295);
			   this->addStockTVATextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockTVATextBox->Name = L"addStockTVATextBox";
			   this->addStockTVATextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockTVATextBox->TabIndex = 16;
			   // 
			   // addStockMargeTextBox
			   // 
			   this->addStockMargeTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockMargeTextBox->Location = System::Drawing::Point(2, 248);
			   this->addStockMargeTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockMargeTextBox->Name = L"addStockMargeTextBox";
			   this->addStockMargeTextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockMargeTextBox->TabIndex = 15;
			   // 
			   // addStockCostTextBox
			   // 
			   this->addStockCostTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockCostTextBox->Location = System::Drawing::Point(2, 200);
			   this->addStockCostTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockCostTextBox->Name = L"addStockCostTextBox";
			   this->addStockCostTextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockCostTextBox->TabIndex = 14;
			   // 
			   // addStockRestockingLabel
			   // 
			   this->addStockRestockingLabel->AutoSize = true;
			   this->addStockRestockingLabel->Location = System::Drawing::Point(2, 370);
			   this->addStockRestockingLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockRestockingLabel->Name = L"addStockRestockingLabel";
			   this->addStockRestockingLabel->Size = System::Drawing::Size(141, 17);
			   this->addStockRestockingLabel->TabIndex = 13;
			   this->addStockRestockingLabel->Text = L"Restocking threshold";
			   // 
			   // addStockStockLabel
			   // 
			   this->addStockStockLabel->AutoSize = true;
			   this->addStockStockLabel->Location = System::Drawing::Point(2, 322);
			   this->addStockStockLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockStockLabel->Name = L"addStockStockLabel";
			   this->addStockStockLabel->Size = System::Drawing::Size(43, 17);
			   this->addStockStockLabel->TabIndex = 12;
			   this->addStockStockLabel->Text = L"Stock";
			   // 
			   // addStockTVALabel
			   // 
			   this->addStockTVALabel->AutoSize = true;
			   this->addStockTVALabel->Location = System::Drawing::Point(2, 274);
			   this->addStockTVALabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockTVALabel->Name = L"addStockTVALabel";
			   this->addStockTVALabel->Size = System::Drawing::Size(35, 17);
			   this->addStockTVALabel->TabIndex = 11;
			   this->addStockTVALabel->Text = L"TVA";
			   // 
			   // addStockMargeLabel
			   // 
			   this->addStockMargeLabel->AutoSize = true;
			   this->addStockMargeLabel->Location = System::Drawing::Point(2, 226);
			   this->addStockMargeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockMargeLabel->Name = L"addStockMargeLabel";
			   this->addStockMargeLabel->Size = System::Drawing::Size(48, 17);
			   this->addStockMargeLabel->TabIndex = 10;
			   this->addStockMargeLabel->Text = L"Marge";
			   // 
			   // addStockCostLabel
			   // 
			   this->addStockCostLabel->AutoSize = true;
			   this->addStockCostLabel->Location = System::Drawing::Point(2, 178);
			   this->addStockCostLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockCostLabel->Name = L"addStockCostLabel";
			   this->addStockCostLabel->Size = System::Drawing::Size(36, 17);
			   this->addStockCostLabel->TabIndex = 9;
			   this->addStockCostLabel->Text = L"Cost";
			   // 
			   // addStockValidateButton
			   // 
			   this->addStockValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockValidateButton->Location = System::Drawing::Point(879, 555);
			   this->addStockValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockValidateButton->Name = L"addStockValidateButton";
			   this->addStockValidateButton->Size = System::Drawing::Size(77, 39);
			   this->addStockValidateButton->TabIndex = 8;
			   this->addStockValidateButton->Text = L"Validate";
			   this->addStockValidateButton->UseVisualStyleBackColor = true;
			   this->addStockValidateButton->Click += gcnew System::EventHandler(this, &MyForm::addStockValidateButton_Click);
			   // 
			   // addStockQuantityTextBox
			   // 
			   this->addStockQuantityTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockQuantityTextBox->Location = System::Drawing::Point(2, 152);
			   this->addStockQuantityTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockQuantityTextBox->Name = L"addStockQuantityTextBox";
			   this->addStockQuantityTextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockQuantityTextBox->TabIndex = 7;
			   // 
			   // addStockNameTextBox
			   // 
			   this->addStockNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockNameTextBox->Location = System::Drawing::Point(2, 105);
			   this->addStockNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockNameTextBox->Name = L"addStockNameTextBox";
			   this->addStockNameTextBox->Size = System::Drawing::Size(363, 22);
			   this->addStockNameTextBox->TabIndex = 5;
			   // 
			   // addStockQuantityLabel
			   // 
			   this->addStockQuantityLabel->AutoSize = true;
			   this->addStockQuantityLabel->Location = System::Drawing::Point(2, 131);
			   this->addStockQuantityLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockQuantityLabel->Name = L"addStockQuantityLabel";
			   this->addStockQuantityLabel->Size = System::Drawing::Size(61, 17);
			   this->addStockQuantityLabel->TabIndex = 4;
			   this->addStockQuantityLabel->Text = L"Quantity";
			   // 
			   // addStockNameLabel
			   // 
			   this->addStockNameLabel->AutoSize = true;
			   this->addStockNameLabel->Location = System::Drawing::Point(2, 83);
			   this->addStockNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockNameLabel->Name = L"addStockNameLabel";
			   this->addStockNameLabel->Size = System::Drawing::Size(113, 17);
			   this->addStockNameLabel->TabIndex = 2;
			   this->addStockNameLabel->Text = L"Name of product";
			   // 
			   // addStockTitleLabel
			   // 
			   this->addStockTitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockTitleLabel->AutoSize = true;
			   this->addStockTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->addStockTitleLabel->Location = System::Drawing::Point(75, 20);
			   this->addStockTitleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->addStockTitleLabel->Name = L"addStockTitleLabel";
			   this->addStockTitleLabel->Size = System::Drawing::Size(262, 38);
			   this->addStockTitleLabel->TabIndex = 1;
			   this->addStockTitleLabel->Text = L"Add new product";
			   // 
			   // addStockExitButton
			   // 
			   this->addStockExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->addStockExitButton->Location = System::Drawing::Point(915, 10);
			   this->addStockExitButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->addStockExitButton->Name = L"addStockExitButton";
			   this->addStockExitButton->Size = System::Drawing::Size(42, 40);
			   this->addStockExitButton->TabIndex = 0;
			   this->addStockExitButton->Text = L"X";
			   this->addStockExitButton->UseVisualStyleBackColor = true;
			   this->addStockExitButton->Click += gcnew System::EventHandler(this, &MyForm::addStockExitButton_Click);
			   // 
			   // orderMPanel
			   // 
			   this->orderMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->orderMPanel->Controls->Add(this->orderFilterTextBox);
			   this->orderMPanel->Controls->Add(this->orderGlobalListView);
			   this->orderMPanel->Location = System::Drawing::Point(220, 80);
			   this->orderMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->orderMPanel->Name = L"orderMPanel";
			   this->orderMPanel->Size = System::Drawing::Size(968, 607);
			   this->orderMPanel->TabIndex = 0;
			   // 
			   // orderFilterTextBox
			   // 
			   this->orderFilterTextBox->Location = System::Drawing::Point(37, 23);
			   this->orderFilterTextBox->Name = L"orderFilterTextBox";
			   this->orderFilterTextBox->Size = System::Drawing::Size(264, 22);
			   this->orderFilterTextBox->TabIndex = 1;
			   this->orderFilterTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::orderFilterTextBox_TextChanged);
			   // 
			   // orderGlobalListView
			   // 
			   this->orderGlobalListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->orderGlobalListView->HideSelection = false;
			   this->orderGlobalListView->Location = System::Drawing::Point(21, 56);
			   this->orderGlobalListView->Name = L"orderGlobalListView";
			   this->orderGlobalListView->Size = System::Drawing::Size(921, 527);
			   this->orderGlobalListView->TabIndex = 0;
			   this->orderGlobalListView->UseCompatibleStateImageBehavior = false;
			   this->orderGlobalListView->View = System::Windows::Forms::View::List;
			   this->orderGlobalListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::orderGlobalListView_DoubleClick);
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
			   this->clientMPanel->Controls->Add(this->clientMSearchButton);
			   this->clientMPanel->Controls->Add(this->clientMCityLabel);
			   this->clientMPanel->Controls->Add(this->clientMFNameLabel);
			   this->clientMPanel->Controls->Add(this->clientMLNameLabel);
			   this->clientMPanel->Location = System::Drawing::Point(220, 80);
			   this->clientMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMPanel->Name = L"clientMPanel";
			   this->clientMPanel->Size = System::Drawing::Size(968, 607);
			   this->clientMPanel->TabIndex = 4;
			   // 
			   // clientMModifyButton
			   // 
			   this->clientMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->clientMModifyButton->Location = System::Drawing::Point(829, 566);
			   this->clientMModifyButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMModifyButton->Name = L"clientMModifyButton";
			   this->clientMModifyButton->Size = System::Drawing::Size(66, 36);
			   this->clientMModifyButton->TabIndex = 10;
			   this->clientMModifyButton->Text = L"Modify";
			   this->clientMModifyButton->UseVisualStyleBackColor = true;
			   // 
			   // clientMDeleteButton
			   // 
			   this->clientMDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->clientMDeleteButton->Location = System::Drawing::Point(900, 566);
			   this->clientMDeleteButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMDeleteButton->Name = L"clientMDeleteButton";
			   this->clientMDeleteButton->Size = System::Drawing::Size(66, 36);
			   this->clientMDeleteButton->TabIndex = 9;
			   this->clientMDeleteButton->Text = L"Delete";
			   this->clientMDeleteButton->UseVisualStyleBackColor = true;
			   // 
			   // clientMFNameTextBox
			   // 
			   this->clientMFNameTextBox->Location = System::Drawing::Point(80, 41);
			   this->clientMFNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMFNameTextBox->Name = L"clientMFNameTextBox";
			   this->clientMFNameTextBox->Size = System::Drawing::Size(90, 22);
			   this->clientMFNameTextBox->TabIndex = 6;
			   // 
			   // clientMLNameTextBox
			   // 
			   this->clientMLNameTextBox->Location = System::Drawing::Point(80, 73);
			   this->clientMLNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMLNameTextBox->Name = L"clientMLNameTextBox";
			   this->clientMLNameTextBox->Size = System::Drawing::Size(90, 22);
			   this->clientMLNameTextBox->TabIndex = 7;
			   // 
			   // clientMCityTextBox
			   // 
			   this->clientMCityTextBox->Location = System::Drawing::Point(80, 107);
			   this->clientMCityTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMCityTextBox->Name = L"clientMCityTextBox";
			   this->clientMCityTextBox->Size = System::Drawing::Size(90, 22);
			   this->clientMCityTextBox->TabIndex = 8;
			   // 
			   // clientMDGV
			   // 
			   this->clientMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			   dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			   dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			   dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			   dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			   dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			   this->clientMDGV->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			   this->clientMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			   dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			   dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			   dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			   dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			   dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			   this->clientMDGV->DefaultCellStyle = dataGridViewCellStyle7;
			   this->clientMDGV->Location = System::Drawing::Point(2, 390);
			   this->clientMDGV->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMDGV->Name = L"clientMDGV";
			   this->clientMDGV->RowHeadersWidth = 51;
			   this->clientMDGV->RowTemplate->Height = 24;
			   this->clientMDGV->Size = System::Drawing::Size(963, 170);
			   this->clientMDGV->TabIndex = 0;
			   // 
			   // clientMSearchButton
			   // 
			   this->clientMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->clientMSearchButton->Location = System::Drawing::Point(900, 347);
			   this->clientMSearchButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->clientMSearchButton->Name = L"clientMSearchButton";
			   this->clientMSearchButton->Size = System::Drawing::Size(66, 36);
			   this->clientMSearchButton->TabIndex = 1;
			   this->clientMSearchButton->Text = L"Search";
			   this->clientMSearchButton->UseVisualStyleBackColor = true;
			   // 
			   // clientMCityLabel
			   // 
			   this->clientMCityLabel->AutoSize = true;
			   this->clientMCityLabel->Location = System::Drawing::Point(2, 110);
			   this->clientMCityLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->clientMCityLabel->Name = L"clientMCityLabel";
			   this->clientMCityLabel->Size = System::Drawing::Size(39, 17);
			   this->clientMCityLabel->TabIndex = 5;
			   this->clientMCityLabel->Text = L"City :";
			   // 
			   // clientMFNameLabel
			   // 
			   this->clientMFNameLabel->AutoSize = true;
			   this->clientMFNameLabel->Location = System::Drawing::Point(2, 45);
			   this->clientMFNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->clientMFNameLabel->Name = L"clientMFNameLabel";
			   this->clientMFNameLabel->Size = System::Drawing::Size(82, 17);
			   this->clientMFNameLabel->TabIndex = 3;
			   this->clientMFNameLabel->Text = L"First name :";
			   // 
			   // clientMLNameLabel
			   // 
			   this->clientMLNameLabel->AutoSize = true;
			   this->clientMLNameLabel->Location = System::Drawing::Point(2, 76);
			   this->clientMLNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->clientMLNameLabel->Name = L"clientMLNameLabel";
			   this->clientMLNameLabel->Size = System::Drawing::Size(82, 17);
			   this->clientMLNameLabel->TabIndex = 4;
			   this->clientMLNameLabel->Text = L"Last name :";
			   // 
			   // menuButtonPanel
			   // 
			   this->menuButtonPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(76)));
			   this->menuButtonPanel->Controls->Add(this->menuPersonnellManageButton);
			   this->menuButtonPanel->Controls->Add(this->menuCatalogButton);
			   this->menuButtonPanel->Controls->Add(this->menuAccountButton);
			   this->menuButtonPanel->Controls->Add(this->menuStatisticButton);
			   this->menuButtonPanel->Controls->Add(this->menuStockButton);
			   this->menuButtonPanel->Controls->Add(this->menuOrderButton);
			   this->menuButtonPanel->Controls->Add(this->menuClientButton);
			   this->menuButtonPanel->Controls->Add(this->menuLogoPanel);
			   this->menuButtonPanel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->menuButtonPanel->Location = System::Drawing::Point(0, 0);
			   this->menuButtonPanel->Margin = System::Windows::Forms::Padding(0);
			   this->menuButtonPanel->Name = L"menuButtonPanel";
			   this->menuButtonPanel->Size = System::Drawing::Size(220, 687);
			   this->menuButtonPanel->TabIndex = 13;
			   // 
			   // menuPersonnellManageButton
			   // 
			   this->menuPersonnellManageButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuPersonnellManageButton->FlatAppearance->BorderSize = 0;
			   this->menuPersonnellManageButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuPersonnellManageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->menuPersonnellManageButton->ForeColor = System::Drawing::Color::White;
			   this->menuPersonnellManageButton->Location = System::Drawing::Point(-2, 380);
			   this->menuPersonnellManageButton->Name = L"menuPersonnellManageButton";
			   this->menuPersonnellManageButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuPersonnellManageButton->Size = System::Drawing::Size(220, 60);
			   this->menuPersonnellManageButton->TabIndex = 7;
			   this->menuPersonnellManageButton->Text = L"Personnel Manager";
			   this->menuPersonnellManageButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuPersonnellManageButton->UseVisualStyleBackColor = true;
			   this->menuPersonnellManageButton->Visible = false;
			   this->menuPersonnellManageButton->Click += gcnew System::EventHandler(this, &MyForm::menuPersonnellManageButton_Click);
			   this->menuPersonnellManageButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuPersonnellManageButton_MouseEnter);
			   this->menuPersonnellManageButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuPersonnellManageButton_MouseLeave);
			   // 
			   // menuCatalogButton
			   // 
			   this->menuCatalogButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuCatalogButton->Dock = System::Windows::Forms::DockStyle::Top;
			   this->menuCatalogButton->FlatAppearance->BorderSize = 0;
			   this->menuCatalogButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuCatalogButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->menuCatalogButton->ForeColor = System::Drawing::Color::White;
			   this->menuCatalogButton->Location = System::Drawing::Point(0, 80);
			   this->menuCatalogButton->Name = L"menuCatalogButton";
			   this->menuCatalogButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuCatalogButton->Size = System::Drawing::Size(220, 60);
			   this->menuCatalogButton->TabIndex = 2;
			   this->menuCatalogButton->Text = L"Catalog";
			   this->menuCatalogButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuCatalogButton->UseVisualStyleBackColor = true;
			   this->menuCatalogButton->Visible = false;
			   this->menuCatalogButton->Click += gcnew System::EventHandler(this, &MyForm::menuCatalogButton_Click);
			   this->menuCatalogButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuCatalogButton_MouseEnter);
			   this->menuCatalogButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuCatalogButton_MouseLeave);
			   // 
			   // menuAccountButton
			   // 
			   this->menuAccountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuAccountButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->menuAccountButton->FlatAppearance->BorderSize = 0;
			   this->menuAccountButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuAccountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->menuAccountButton->ForeColor = System::Drawing::Color::White;
			   this->menuAccountButton->Location = System::Drawing::Point(0, 627);
			   this->menuAccountButton->Name = L"menuAccountButton";
			   this->menuAccountButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuAccountButton->Size = System::Drawing::Size(220, 60);
			   this->menuAccountButton->TabIndex = 5;
			   this->menuAccountButton->Text = L"My Account";
			   this->menuAccountButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuAccountButton->UseVisualStyleBackColor = true;
			   this->menuAccountButton->Visible = false;
			   this->menuAccountButton->Click += gcnew System::EventHandler(this, &MyForm::menuAccountButton_Click);
			   this->menuAccountButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuAccountButton_MouseEnter);
			   this->menuAccountButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuAccountButton_MouseLeave);
			   // 
			   // menuStatisticButton
			   // 
			   this->menuStatisticButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuStatisticButton->FlatAppearance->BorderSize = 0;
			   this->menuStatisticButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuStatisticButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->menuStatisticButton->ForeColor = System::Drawing::Color::White;
			   this->menuStatisticButton->Location = System::Drawing::Point(-1, 260);
			   this->menuStatisticButton->Name = L"menuStatisticButton";
			   this->menuStatisticButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuStatisticButton->Size = System::Drawing::Size(220, 60);
			   this->menuStatisticButton->TabIndex = 4;
			   this->menuStatisticButton->Text = L"Statistic";
			   this->menuStatisticButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuStatisticButton->UseVisualStyleBackColor = true;
			   this->menuStatisticButton->Visible = false;
			   this->menuStatisticButton->Click += gcnew System::EventHandler(this, &MyForm::menuStatisticButton_Click);
			   this->menuStatisticButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuStatisticButton_MouseEnter);
			   this->menuStatisticButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuStatisticButton_MouseLeave);
			   // 
			   // menuStockButton
			   // 
			   this->menuStockButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuStockButton->FlatAppearance->BorderSize = 0;
			   this->menuStockButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuStockButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->menuStockButton->ForeColor = System::Drawing::Color::White;
			   this->menuStockButton->Location = System::Drawing::Point(0, 200);
			   this->menuStockButton->Name = L"menuStockButton";
			   this->menuStockButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuStockButton->Size = System::Drawing::Size(220, 60);
			   this->menuStockButton->TabIndex = 4;
			   this->menuStockButton->Text = L"Stock";
			   this->menuStockButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuStockButton->UseVisualStyleBackColor = true;
			   this->menuStockButton->Visible = false;
			   this->menuStockButton->Click += gcnew System::EventHandler(this, &MyForm::menuStockButton_Click);
			   this->menuStockButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuStockButton_MouseEnter);
			   this->menuStockButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuStockButton_MouseLeave);
			   // 
			   // menuOrderButton
			   // 
			   this->menuOrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuOrderButton->FlatAppearance->BorderSize = 0;
			   this->menuOrderButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuOrderButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->menuOrderButton->ForeColor = System::Drawing::Color::White;
			   this->menuOrderButton->Location = System::Drawing::Point(0, 140);
			   this->menuOrderButton->Name = L"menuOrderButton";
			   this->menuOrderButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuOrderButton->Size = System::Drawing::Size(220, 60);
			   this->menuOrderButton->TabIndex = 3;
			   this->menuOrderButton->Text = L"Order";
			   this->menuOrderButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuOrderButton->UseVisualStyleBackColor = true;
			   this->menuOrderButton->Visible = false;
			   this->menuOrderButton->Click += gcnew System::EventHandler(this, &MyForm::menuOrderButton_Click);
			   this->menuOrderButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuOrderButton_MouseEnter);
			   this->menuOrderButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuOrderButton_MouseLeave);
			   // 
			   // menuClientButton
			   // 
			   this->menuClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuClientButton->FlatAppearance->BorderSize = 0;
			   this->menuClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->menuClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->menuClientButton->ForeColor = System::Drawing::Color::White;
			   this->menuClientButton->Location = System::Drawing::Point(-2, 321);
			   this->menuClientButton->Name = L"menuClientButton";
			   this->menuClientButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			   this->menuClientButton->Size = System::Drawing::Size(220, 60);
			   this->menuClientButton->TabIndex = 1;
			   this->menuClientButton->Text = L"Client Manager";
			   this->menuClientButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->menuClientButton->UseVisualStyleBackColor = true;
			   this->menuClientButton->Visible = false;
			   this->menuClientButton->Click += gcnew System::EventHandler(this, &MyForm::menuClientButton_Click);
			   this->menuClientButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuClientButton_MouseEnter);
			   this->menuClientButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuClientButton_MouseLeave);
			   // 
			   // menuLogoPanel
			   // 
			   this->menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				   static_cast<System::Int32>(static_cast<System::Byte>(58)));
			   this->menuLogoPanel->Controls->Add(this->nameProjectLabel);
			   this->menuLogoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			   this->menuLogoPanel->Location = System::Drawing::Point(0, 0);
			   this->menuLogoPanel->Name = L"menuLogoPanel";
			   this->menuLogoPanel->Size = System::Drawing::Size(220, 80);
			   this->menuLogoPanel->TabIndex = 0;
			   // 
			   // nameProjectLabel
			   // 
			   this->nameProjectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->nameProjectLabel->ForeColor = System::Drawing::Color::LightGray;
			   this->nameProjectLabel->Location = System::Drawing::Point(0, 3);
			   this->nameProjectLabel->Margin = System::Windows::Forms::Padding(0);
			   this->nameProjectLabel->Name = L"nameProjectLabel";
			   this->nameProjectLabel->Size = System::Drawing::Size(220, 73);
			   this->nameProjectLabel->TabIndex = 0;
			   this->nameProjectLabel->Text = L"OPO2SUM";
			   this->nameProjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->nameProjectLabel->Click += gcnew System::EventHandler(this, &MyForm::nameProjectLabel_Click);
			   // 
			   // titleBarPanel
			   // 
			   this->titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				   static_cast<System::Int32>(static_cast<System::Byte>(136)));
			   this->titleBarPanel->Controls->Add(this->titleBarLabel);
			   this->titleBarPanel->Location = System::Drawing::Point(220, 0);
			   this->titleBarPanel->Name = L"titleBarPanel";
			   this->titleBarPanel->Size = System::Drawing::Size(968, 80);
			   this->titleBarPanel->TabIndex = 14;
			   // 
			   // titleBarLabel
			   // 
			   this->titleBarLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->titleBarLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->titleBarLabel->ForeColor = System::Drawing::Color::White;
			   this->titleBarLabel->Location = System::Drawing::Point(5, 3);
			   this->titleBarLabel->Name = L"titleBarLabel";
			   this->titleBarLabel->Size = System::Drawing::Size(960, 73);
			   this->titleBarLabel->TabIndex = 0;
			   this->titleBarLabel->Text = L"HOME";
			   this->titleBarLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // accountPanel
			   // 
			   this->accountPanel->Controls->Add(this->accountSeparatorLabel);
			   this->accountPanel->Controls->Add(this->accountAddressPostalNumericUpDown);
			   this->accountPanel->Controls->Add(this->accountErrorAddAddressLabel);
			   this->accountPanel->Controls->Add(this->accountErrorLabel);
			   this->accountPanel->Controls->Add(this->accountAddressAddButton);
			   this->accountPanel->Controls->Add(this->accountAddressDeleteButton);
			   this->accountPanel->Controls->Add(this->accountModifyButton);
			   this->accountPanel->Controls->Add(this->accountAddressListComboBox);
			   this->accountPanel->Controls->Add(this->accountAddressMoreTextBox);
			   this->accountPanel->Controls->Add(this->accountAddressCityTextBox);
			   this->accountPanel->Controls->Add(this->accountAddressNbTextBox);
			   this->accountPanel->Controls->Add(this->accountBirthdayTextBox);
			   this->accountPanel->Controls->Add(this->accountPasswordTextBox);
			   this->accountPanel->Controls->Add(this->accountLastnameTextBox);
			   this->accountPanel->Controls->Add(this->accountFirstnameTextBox);
			   this->accountPanel->Controls->Add(this->accountUsernameTextBox);
			   this->accountPanel->Controls->Add(this->accountAddressMoreLabel);
			   this->accountPanel->Controls->Add(this->accountPostalCodeLabel);
			   this->accountPanel->Controls->Add(this->accountCityLabel);
			   this->accountPanel->Controls->Add(this->accountStreetLabel);
			   this->accountPanel->Controls->Add(this->accountAddressLabel);
			   this->accountPanel->Controls->Add(this->accountBirthdayLabel);
			   this->accountPanel->Controls->Add(this->accountPasswordLabel);
			   this->accountPanel->Controls->Add(this->accountLastnameLabel);
			   this->accountPanel->Controls->Add(this->accountFirstnameLabel);
			   this->accountPanel->Controls->Add(this->accountUsernameLabel);
			   this->accountPanel->Controls->Add(this->accountTitleLabel);
			   this->accountPanel->Location = System::Drawing::Point(220, 80);
			   this->accountPanel->Name = L"accountPanel";
			   this->accountPanel->Size = System::Drawing::Size(968, 607);
			   this->accountPanel->TabIndex = 15;
			   // 
			   // accountSeparatorLabel
			   // 
			   this->accountSeparatorLabel->AutoSize = true;
			   this->accountSeparatorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->accountSeparatorLabel->Location = System::Drawing::Point(46, 229);
			   this->accountSeparatorLabel->Name = L"accountSeparatorLabel";
			   this->accountSeparatorLabel->Size = System::Drawing::Size(872, 38);
			   this->accountSeparatorLabel->TabIndex = 28;
			   this->accountSeparatorLabel->Text = L"_____________________________________________";
			   // 
			   // accountAddressPostalNumericUpDown
			   // 
			   this->accountAddressPostalNumericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			   this->accountAddressPostalNumericUpDown->Location = System::Drawing::Point(446, 474);
			   this->accountAddressPostalNumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			   this->accountAddressPostalNumericUpDown->Name = L"accountAddressPostalNumericUpDown";
			   this->accountAddressPostalNumericUpDown->Size = System::Drawing::Size(108, 22);
			   this->accountAddressPostalNumericUpDown->TabIndex = 27;
			   // 
			   // accountErrorAddAddressLabel
			   // 
			   this->accountErrorAddAddressLabel->BackColor = System::Drawing::Color::Transparent;
			   this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Red;
			   this->accountErrorAddAddressLabel->Location = System::Drawing::Point(713, 509);
			   this->accountErrorAddAddressLabel->Name = L"accountErrorAddAddressLabel";
			   this->accountErrorAddAddressLabel->Size = System::Drawing::Size(154, 40);
			   this->accountErrorAddAddressLabel->TabIndex = 26;
			   // 
			   // accountErrorLabel
			   // 
			   this->accountErrorLabel->BackColor = System::Drawing::Color::Transparent;
			   this->accountErrorLabel->ForeColor = System::Drawing::Color::Red;
			   this->accountErrorLabel->Location = System::Drawing::Point(738, 212);
			   this->accountErrorLabel->Name = L"accountErrorLabel";
			   this->accountErrorLabel->Size = System::Drawing::Size(154, 40);
			   this->accountErrorLabel->TabIndex = 24;
			   // 
			   // accountAddressAddButton
			   // 
			   this->accountAddressAddButton->Location = System::Drawing::Point(583, 524);
			   this->accountAddressAddButton->Name = L"accountAddressAddButton";
			   this->accountAddressAddButton->Size = System::Drawing::Size(118, 25);
			   this->accountAddressAddButton->TabIndex = 23;
			   this->accountAddressAddButton->Text = L"Add";
			   this->accountAddressAddButton->UseVisualStyleBackColor = true;
			   this->accountAddressAddButton->Click += gcnew System::EventHandler(this, &MyForm::accountAddressAddButton_Click);
			   // 
			   // accountAddressDeleteButton
			   // 
			   this->accountAddressDeleteButton->Location = System::Drawing::Point(583, 373);
			   this->accountAddressDeleteButton->Name = L"accountAddressDeleteButton";
			   this->accountAddressDeleteButton->Size = System::Drawing::Size(118, 25);
			   this->accountAddressDeleteButton->TabIndex = 22;
			   this->accountAddressDeleteButton->Text = L"Delete";
			   this->accountAddressDeleteButton->UseVisualStyleBackColor = true;
			   this->accountAddressDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::accountAddressDeleteButton_Click);
			   // 
			   // accountModifyButton
			   // 
			   this->accountModifyButton->Enabled = false;
			   this->accountModifyButton->Location = System::Drawing::Point(741, 180);
			   this->accountModifyButton->Name = L"accountModifyButton";
			   this->accountModifyButton->Size = System::Drawing::Size(136, 29);
			   this->accountModifyButton->TabIndex = 21;
			   this->accountModifyButton->Text = L"Modify account";
			   this->accountModifyButton->UseVisualStyleBackColor = true;
			   this->accountModifyButton->Click += gcnew System::EventHandler(this, &MyForm::accountModifyButton_Click);
			   // 
			   // accountAddressListComboBox
			   // 
			   this->accountAddressListComboBox->BackColor = System::Drawing::SystemColors::Window;
			   this->accountAddressListComboBox->FormattingEnabled = true;
			   this->accountAddressListComboBox->Location = System::Drawing::Point(88, 374);
			   this->accountAddressListComboBox->Name = L"accountAddressListComboBox";
			   this->accountAddressListComboBox->Size = System::Drawing::Size(466, 24);
			   this->accountAddressListComboBox->TabIndex = 20;
			   // 
			   // accountAddressMoreTextBox
			   // 
			   this->accountAddressMoreTextBox->Location = System::Drawing::Point(88, 524);
			   this->accountAddressMoreTextBox->Name = L"accountAddressMoreTextBox";
			   this->accountAddressMoreTextBox->Size = System::Drawing::Size(466, 22);
			   this->accountAddressMoreTextBox->TabIndex = 19;
			   // 
			   // accountAddressCityTextBox
			   // 
			   this->accountAddressCityTextBox->Location = System::Drawing::Point(276, 474);
			   this->accountAddressCityTextBox->Name = L"accountAddressCityTextBox";
			   this->accountAddressCityTextBox->Size = System::Drawing::Size(158, 22);
			   this->accountAddressCityTextBox->TabIndex = 17;
			   // 
			   // accountAddressNbTextBox
			   // 
			   this->accountAddressNbTextBox->Location = System::Drawing::Point(88, 474);
			   this->accountAddressNbTextBox->Name = L"accountAddressNbTextBox";
			   this->accountAddressNbTextBox->Size = System::Drawing::Size(176, 22);
			   this->accountAddressNbTextBox->TabIndex = 16;
			   // 
			   // accountBirthdayTextBox
			   // 
			   this->accountBirthdayTextBox->Enabled = false;
			   this->accountBirthdayTextBox->Location = System::Drawing::Point(278, 187);
			   this->accountBirthdayTextBox->Name = L"accountBirthdayTextBox";
			   this->accountBirthdayTextBox->Size = System::Drawing::Size(158, 22);
			   this->accountBirthdayTextBox->TabIndex = 15;
			   // 
			   // accountPasswordTextBox
			   // 
			   this->accountPasswordTextBox->Location = System::Drawing::Point(90, 187);
			   this->accountPasswordTextBox->Name = L"accountPasswordTextBox";
			   this->accountPasswordTextBox->Size = System::Drawing::Size(158, 22);
			   this->accountPasswordTextBox->TabIndex = 14;
			   this->accountPasswordTextBox->UseSystemPasswordChar = true;
			   this->accountPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // accountLastnameTextBox
			   // 
			   this->accountLastnameTextBox->Location = System::Drawing::Point(461, 114);
			   this->accountLastnameTextBox->Name = L"accountLastnameTextBox";
			   this->accountLastnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->accountLastnameTextBox->TabIndex = 13;
			   this->accountLastnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // accountFirstnameTextBox
			   // 
			   this->accountFirstnameTextBox->Location = System::Drawing::Point(278, 114);
			   this->accountFirstnameTextBox->Name = L"accountFirstnameTextBox";
			   this->accountFirstnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->accountFirstnameTextBox->TabIndex = 12;
			   this->accountFirstnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // accountUsernameTextBox
			   // 
			   this->accountUsernameTextBox->Enabled = false;
			   this->accountUsernameTextBox->Location = System::Drawing::Point(90, 114);
			   this->accountUsernameTextBox->Name = L"accountUsernameTextBox";
			   this->accountUsernameTextBox->Size = System::Drawing::Size(158, 22);
			   this->accountUsernameTextBox->TabIndex = 11;
			   // 
			   // accountAddressMoreLabel
			   // 
			   this->accountAddressMoreLabel->AutoSize = true;
			   this->accountAddressMoreLabel->Location = System::Drawing::Point(107, 502);
			   this->accountAddressMoreLabel->Name = L"accountAddressMoreLabel";
			   this->accountAddressMoreLabel->Size = System::Drawing::Size(182, 17);
			   this->accountAddressMoreLabel->TabIndex = 10;
			   this->accountAddressMoreLabel->Text = L"More information (ex : floor)";
			   // 
			   // accountPostalCodeLabel
			   // 
			   this->accountPostalCodeLabel->AutoSize = true;
			   this->accountPostalCodeLabel->Location = System::Drawing::Point(456, 451);
			   this->accountPostalCodeLabel->Name = L"accountPostalCodeLabel";
			   this->accountPostalCodeLabel->Size = System::Drawing::Size(82, 17);
			   this->accountPostalCodeLabel->TabIndex = 9;
			   this->accountPostalCodeLabel->Text = L"Postal code";
			   // 
			   // accountCityLabel
			   // 
			   this->accountCityLabel->AutoSize = true;
			   this->accountCityLabel->Location = System::Drawing::Point(290, 451);
			   this->accountCityLabel->Name = L"accountCityLabel";
			   this->accountCityLabel->Size = System::Drawing::Size(31, 17);
			   this->accountCityLabel->TabIndex = 8;
			   this->accountCityLabel->Text = L"City";
			   // 
			   // accountStreetLabel
			   // 
			   this->accountStreetLabel->AutoSize = true;
			   this->accountStreetLabel->Location = System::Drawing::Point(105, 451);
			   this->accountStreetLabel->Name = L"accountStreetLabel";
			   this->accountStreetLabel->Size = System::Drawing::Size(128, 17);
			   this->accountStreetLabel->TabIndex = 7;
			   this->accountStreetLabel->Text = L"Number and Street";
			   // 
			   // accountAddressLabel
			   // 
			   this->accountAddressLabel->AutoSize = true;
			   this->accountAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->accountAddressLabel->Location = System::Drawing::Point(30, 300);
			   this->accountAddressLabel->Name = L"accountAddressLabel";
			   this->accountAddressLabel->Size = System::Drawing::Size(145, 38);
			   this->accountAddressLabel->TabIndex = 6;
			   this->accountAddressLabel->Text = L"Address";
			   // 
			   // accountBirthdayLabel
			   // 
			   this->accountBirthdayLabel->AutoSize = true;
			   this->accountBirthdayLabel->Location = System::Drawing::Point(292, 165);
			   this->accountBirthdayLabel->Name = L"accountBirthdayLabel";
			   this->accountBirthdayLabel->Size = System::Drawing::Size(60, 17);
			   this->accountBirthdayLabel->TabIndex = 5;
			   this->accountBirthdayLabel->Text = L"Birthday";
			   // 
			   // accountPasswordLabel
			   // 
			   this->accountPasswordLabel->AutoSize = true;
			   this->accountPasswordLabel->Location = System::Drawing::Point(107, 165);
			   this->accountPasswordLabel->Name = L"accountPasswordLabel";
			   this->accountPasswordLabel->Size = System::Drawing::Size(121, 17);
			   this->accountPasswordLabel->TabIndex = 4;
			   this->accountPasswordLabel->Text = L"Change password";
			   // 
			   // accountLastnameLabel
			   // 
			   this->accountLastnameLabel->AutoSize = true;
			   this->accountLastnameLabel->Location = System::Drawing::Point(467, 92);
			   this->accountLastnameLabel->Name = L"accountLastnameLabel";
			   this->accountLastnameLabel->Size = System::Drawing::Size(70, 17);
			   this->accountLastnameLabel->TabIndex = 3;
			   this->accountLastnameLabel->Text = L"Lastname";
			   // 
			   // accountFirstnameLabel
			   // 
			   this->accountFirstnameLabel->AutoSize = true;
			   this->accountFirstnameLabel->Location = System::Drawing::Point(292, 92);
			   this->accountFirstnameLabel->Name = L"accountFirstnameLabel";
			   this->accountFirstnameLabel->Size = System::Drawing::Size(70, 17);
			   this->accountFirstnameLabel->TabIndex = 2;
			   this->accountFirstnameLabel->Text = L"Firstname";
			   // 
			   // accountUsernameLabel
			   // 
			   this->accountUsernameLabel->AutoSize = true;
			   this->accountUsernameLabel->Location = System::Drawing::Point(107, 92);
			   this->accountUsernameLabel->Name = L"accountUsernameLabel";
			   this->accountUsernameLabel->Size = System::Drawing::Size(73, 17);
			   this->accountUsernameLabel->TabIndex = 1;
			   this->accountUsernameLabel->Text = L"Username";
			   // 
			   // accountTitleLabel
			   // 
			   this->accountTitleLabel->AutoSize = true;
			   this->accountTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->accountTitleLabel->Location = System::Drawing::Point(22, 22);
			   this->accountTitleLabel->Name = L"accountTitleLabel";
			   this->accountTitleLabel->Size = System::Drawing::Size(199, 38);
			   this->accountTitleLabel->TabIndex = 0;
			   this->accountTitleLabel->Text = L"My Account";
			   // 
			   // hubPanel
			   // 
			   this->hubPanel->Controls->Add(this->menuButtonPanel);
			   this->hubPanel->Controls->Add(this->titleBarPanel);
			   this->hubPanel->Controls->Add(this->statisticMPanel);
			   this->hubPanel->Controls->Add(this->orderMPanel);
			   this->hubPanel->Controls->Add(this->employeeAddEmployeePanel);
			   this->hubPanel->Controls->Add(this->employeeListViewPanel);
			   this->hubPanel->Controls->Add(this->clientListViewPanel);
			   this->hubPanel->Controls->Add(this->clientModifyPanel);
			   this->hubPanel->Controls->Add(this->accountPanel);
			   this->hubPanel->Controls->Add(this->clientMPanel);
			   this->hubPanel->Controls->Add(this->employeeModifyPanel);
			   this->hubPanel->Controls->Add(this->preCatalogPanel);
			   this->hubPanel->Controls->Add(this->catalogOrderPanel);
			   this->hubPanel->Controls->Add(this->catalogCartPanel);
			   this->hubPanel->Controls->Add(this->addStockPanel);
			   this->hubPanel->Controls->Add(this->stockMPanel);
			   this->hubPanel->Location = System::Drawing::Point(0, 0);
			   this->hubPanel->Name = L"hubPanel";
			   this->hubPanel->Size = System::Drawing::Size(1188, 687);
			   this->hubPanel->TabIndex = 29;
			   // 
			   // statisticMPanel
			   // 
			   this->statisticMPanel->Controls->Add(this->simulationPanel);
			   this->statisticMPanel->Controls->Add(this->Purchase_Value_button);
			   this->statisticMPanel->Controls->Add(this->Commercial_Value_button);
			   this->statisticMPanel->Controls->Add(this->buys_down_button);
			   this->statisticMPanel->Controls->Add(this->top_buys_button);
			   this->statisticMPanel->Controls->Add(this->Amount_per_client_button);
			   this->statisticMPanel->Controls->Add(this->Prod_u_restocking_button);
			   this->statisticMPanel->Controls->Add(this->turnover_button);
			   this->statisticMPanel->Controls->Add(this->Panier_Poyen_Button);
			   this->statisticMPanel->Controls->Add(this->dataGridViewstat);
			   this->statisticMPanel->Controls->Add(this->stat_label);
			   this->statisticMPanel->Location = System::Drawing::Point(220, 80);
			   this->statisticMPanel->Name = L"statisticMPanel";
			   this->statisticMPanel->Size = System::Drawing::Size(968, 607);
			   this->statisticMPanel->TabIndex = 10;
			   // 
			   // simulationPanel
			   // 
			   this->simulationPanel->Controls->Add(this->simulationResultLabel);
			   this->simulationPanel->Controls->Add(this->simulationMarkdownLabel);
			   this->simulationPanel->Controls->Add(this->simulationDiscountLabel);
			   this->simulationPanel->Controls->Add(this->simulationMargeLabel);
			   this->simulationPanel->Controls->Add(this->simulationTVALabel);
			   this->simulationPanel->Controls->Add(this->simulationEntryPriceLabel);
			   this->simulationPanel->Controls->Add(this->simulationTitleLabel);
			   this->simulationPanel->Controls->Add(this->simulationMarkdownComboBox);
			   this->simulationPanel->Controls->Add(this->simulationDiscountComboBox);
			   this->simulationPanel->Controls->Add(this->simulationMargeComboBox);
			   this->simulationPanel->Controls->Add(this->simulationTVAComboBox);
			   this->simulationPanel->Controls->Add(this->simulationEntryPriceTextBox);
			   this->simulationPanel->Location = System::Drawing::Point(24, 9);
			   this->simulationPanel->Name = L"simulationPanel";
			   this->simulationPanel->Size = System::Drawing::Size(918, 421);
			   this->simulationPanel->TabIndex = 17;
			   // 
			   // simulationResultLabel
			   // 
			   this->simulationResultLabel->Location = System::Drawing::Point(602, 277);
			   this->simulationResultLabel->Name = L"simulationResultLabel";
			   this->simulationResultLabel->Size = System::Drawing::Size(259, 109);
			   this->simulationResultLabel->TabIndex = 11;
			   this->simulationResultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // simulationMarkdownLabel
			   // 
			   this->simulationMarkdownLabel->AutoSize = true;
			   this->simulationMarkdownLabel->Location = System::Drawing::Point(727, 206);
			   this->simulationMarkdownLabel->Name = L"simulationMarkdownLabel";
			   this->simulationMarkdownLabel->Size = System::Drawing::Size(152, 17);
			   this->simulationMarkdownLabel->TabIndex = 10;
			   this->simulationMarkdownLabel->Text = L"Unknow Markdown (%)";
			   // 
			   // simulationDiscountLabel
			   // 
			   this->simulationDiscountLabel->AutoSize = true;
			   this->simulationDiscountLabel->Location = System::Drawing::Point(587, 206);
			   this->simulationDiscountLabel->Name = L"simulationDiscountLabel";
			   this->simulationDiscountLabel->Size = System::Drawing::Size(89, 17);
			   this->simulationDiscountLabel->TabIndex = 9;
			   this->simulationDiscountLabel->Text = L"Discount (%)";
			   // 
			   // simulationMargeLabel
			   // 
			   this->simulationMargeLabel->AutoSize = true;
			   this->simulationMargeLabel->Location = System::Drawing::Point(437, 206);
			   this->simulationMargeLabel->Name = L"simulationMargeLabel";
			   this->simulationMargeLabel->Size = System::Drawing::Size(74, 17);
			   this->simulationMargeLabel->TabIndex = 8;
			   this->simulationMargeLabel->Text = L"Marge (%)";
			   // 
			   // simulationTVALabel
			   // 
			   this->simulationTVALabel->AutoSize = true;
			   this->simulationTVALabel->Location = System::Drawing::Point(292, 204);
			   this->simulationTVALabel->Name = L"simulationTVALabel";
			   this->simulationTVALabel->Size = System::Drawing::Size(61, 17);
			   this->simulationTVALabel->TabIndex = 7;
			   this->simulationTVALabel->Text = L"TVA (%)";
			   // 
			   // simulationEntryPriceLabel
			   // 
			   this->simulationEntryPriceLabel->AutoSize = true;
			   this->simulationEntryPriceLabel->Location = System::Drawing::Point(54, 204);
			   this->simulationEntryPriceLabel->Name = L"simulationEntryPriceLabel";
			   this->simulationEntryPriceLabel->Size = System::Drawing::Size(83, 17);
			   this->simulationEntryPriceLabel->TabIndex = 6;
			   this->simulationEntryPriceLabel->Text = L"Stock Value";
			   // 
			   // simulationTitleLabel
			   // 
			   this->simulationTitleLabel->AutoSize = true;
			   this->simulationTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->simulationTitleLabel->Location = System::Drawing::Point(21, 86);
			   this->simulationTitleLabel->Name = L"simulationTitleLabel";
			   this->simulationTitleLabel->Size = System::Drawing::Size(168, 38);
			   this->simulationTitleLabel->TabIndex = 5;
			   this->simulationTitleLabel->Text = L"Simulation";
			   // 
			   // simulationMarkdownComboBox
			   // 
			   this->simulationMarkdownComboBox->FormattingEnabled = true;
			   this->simulationMarkdownComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"2", L"3", L"5" });
			   this->simulationMarkdownComboBox->Location = System::Drawing::Point(730, 227);
			   this->simulationMarkdownComboBox->Name = L"simulationMarkdownComboBox";
			   this->simulationMarkdownComboBox->Size = System::Drawing::Size(149, 24);
			   this->simulationMarkdownComboBox->TabIndex = 4;
			   this->simulationMarkdownComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationDiscountComboBox
			   // 
			   this->simulationDiscountComboBox->FormattingEnabled = true;
			   this->simulationDiscountComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0", L"5", L"6" });
			   this->simulationDiscountComboBox->Location = System::Drawing::Point(590, 227);
			   this->simulationDiscountComboBox->Name = L"simulationDiscountComboBox";
			   this->simulationDiscountComboBox->Size = System::Drawing::Size(121, 24);
			   this->simulationDiscountComboBox->TabIndex = 3;
			   this->simulationDiscountComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationMargeComboBox
			   // 
			   this->simulationMargeComboBox->FormattingEnabled = true;
			   this->simulationMargeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"5", L"10", L"15" });
			   this->simulationMargeComboBox->Location = System::Drawing::Point(440, 227);
			   this->simulationMargeComboBox->Name = L"simulationMargeComboBox";
			   this->simulationMargeComboBox->Size = System::Drawing::Size(121, 24);
			   this->simulationMargeComboBox->TabIndex = 2;
			   this->simulationMargeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationTVAComboBox
			   // 
			   this->simulationTVAComboBox->FormattingEnabled = true;
			   this->simulationTVAComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"5.5", L"10", L"20" });
			   this->simulationTVAComboBox->Location = System::Drawing::Point(293, 227);
			   this->simulationTVAComboBox->Name = L"simulationTVAComboBox";
			   this->simulationTVAComboBox->Size = System::Drawing::Size(121, 24);
			   this->simulationTVAComboBox->TabIndex = 1;
			   this->simulationTVAComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationEntryPriceTextBox
			   // 
			   this->simulationEntryPriceTextBox->Location = System::Drawing::Point(53, 227);
			   this->simulationEntryPriceTextBox->Name = L"simulationEntryPriceTextBox";
			   this->simulationEntryPriceTextBox->Size = System::Drawing::Size(186, 22);
			   this->simulationEntryPriceTextBox->TabIndex = 0;
			   this->simulationEntryPriceTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // Purchase_Value_button
			   // 
			   this->Purchase_Value_button->Location = System::Drawing::Point(730, 524);
			   this->Purchase_Value_button->Name = L"Purchase_Value_button";
			   this->Purchase_Value_button->Size = System::Drawing::Size(164, 50);
			   this->Purchase_Value_button->TabIndex = 8;
			   this->Purchase_Value_button->Text = L"Value Simulation";
			   this->Purchase_Value_button->UseVisualStyleBackColor = true;
			   this->Purchase_Value_button->Click += gcnew System::EventHandler(this, &MyForm::Purchase_Value_button_Click);
			   // 
			   // Commercial_Value_button
			   // 
			   this->Commercial_Value_button->Location = System::Drawing::Point(730, 460);
			   this->Commercial_Value_button->Name = L"Commercial_Value_button";
			   this->Commercial_Value_button->Size = System::Drawing::Size(164, 50);
			   this->Commercial_Value_button->TabIndex = 7;
			   this->Commercial_Value_button->Text = L"Commercial value of stock";
			   this->Commercial_Value_button->UseVisualStyleBackColor = true;
			   this->Commercial_Value_button->Click += gcnew System::EventHandler(this, &MyForm::Commercial_Value_button_Click);
			   // 
			   // buys_down_button
			   // 
			   this->buys_down_button->Location = System::Drawing::Point(502, 523);
			   this->buys_down_button->Name = L"buys_down_button";
			   this->buys_down_button->Size = System::Drawing::Size(164, 50);
			   this->buys_down_button->TabIndex = 6;
			   this->buys_down_button->Text = L"10 - buy";
			   this->buys_down_button->UseVisualStyleBackColor = true;
			   this->buys_down_button->Click += gcnew System::EventHandler(this, &MyForm::buys_down_button_Click);
			   // 
			   // top_buys_button
			   // 
			   this->top_buys_button->Location = System::Drawing::Point(502, 460);
			   this->top_buys_button->Name = L"top_buys_button";
			   this->top_buys_button->Size = System::Drawing::Size(164, 50);
			   this->top_buys_button->TabIndex = 5;
			   this->top_buys_button->Text = L"10 + buy";
			   this->top_buys_button->UseVisualStyleBackColor = true;
			   this->top_buys_button->Click += gcnew System::EventHandler(this, &MyForm::top_buys_button_Click);
			   // 
			   // Amount_per_client_button
			   // 
			   this->Amount_per_client_button->Location = System::Drawing::Point(279, 523);
			   this->Amount_per_client_button->Name = L"Amount_per_client_button";
			   this->Amount_per_client_button->Size = System::Drawing::Size(164, 50);
			   this->Amount_per_client_button->TabIndex = 4;
			   this->Amount_per_client_button->Text = L"Total amount per client";
			   this->Amount_per_client_button->UseVisualStyleBackColor = true;
			   this->Amount_per_client_button->Click += gcnew System::EventHandler(this, &MyForm::Amount_per_client_button_Click);
			   // 
			   // Prod_u_restocking_button
			   // 
			   this->Prod_u_restocking_button->Location = System::Drawing::Point(279, 460);
			   this->Prod_u_restocking_button->Name = L"Prod_u_restocking_button";
			   this->Prod_u_restocking_button->Size = System::Drawing::Size(164, 50);
			   this->Prod_u_restocking_button->TabIndex = 3;
			   this->Prod_u_restocking_button->Text = L"Products under restocking threshold";
			   this->Prod_u_restocking_button->UseVisualStyleBackColor = true;
			   this->Prod_u_restocking_button->Click += gcnew System::EventHandler(this, &MyForm::Prod_u_restocking_button_Click);
			   // 
			   // turnover_button
			   // 
			   this->turnover_button->Location = System::Drawing::Point(57, 524);
			   this->turnover_button->Name = L"turnover_button";
			   this->turnover_button->Size = System::Drawing::Size(164, 50);
			   this->turnover_button->TabIndex = 2;
			   this->turnover_button->Text = L"Turnover per month";
			   this->turnover_button->UseVisualStyleBackColor = true;
			   this->turnover_button->Click += gcnew System::EventHandler(this, &MyForm::turnover_button_Click);
			   // 
			   // Panier_Poyen_Button
			   // 
			   this->Panier_Poyen_Button->Location = System::Drawing::Point(57, 460);
			   this->Panier_Poyen_Button->Name = L"Panier_Poyen_Button";
			   this->Panier_Poyen_Button->Size = System::Drawing::Size(164, 50);
			   this->Panier_Poyen_Button->TabIndex = 1;
			   this->Panier_Poyen_Button->Text = L"Average basket";
			   this->Panier_Poyen_Button->UseVisualStyleBackColor = true;
			   this->Panier_Poyen_Button->Click += gcnew System::EventHandler(this, &MyForm::Panier_Poyen_Button_Click);
			   // 
			   // dataGridViewstat
			   // 
			   dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			   dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			   this->dataGridViewstat->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle8;
			   this->dataGridViewstat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->dataGridViewstat->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			   this->dataGridViewstat->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			   dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			   dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			   dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			   dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			   dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			   dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			   this->dataGridViewstat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			   this->dataGridViewstat->ColumnHeadersHeight = 29;
			   this->dataGridViewstat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			   dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			   dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			   dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			   dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			   dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			   dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			   this->dataGridViewstat->DefaultCellStyle = dataGridViewCellStyle10;
			   this->dataGridViewstat->Location = System::Drawing::Point(24, 56);
			   this->dataGridViewstat->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->dataGridViewstat->Name = L"dataGridViewstat";
			   this->dataGridViewstat->ReadOnly = true;
			   this->dataGridViewstat->RowHeadersWidth = 51;
			   this->dataGridViewstat->RowTemplate->Height = 24;
			   this->dataGridViewstat->Size = System::Drawing::Size(918, 371);
			   this->dataGridViewstat->TabIndex = 0;
			   // 
			   // stat_label
			   // 
			   this->stat_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->stat_label->Location = System::Drawing::Point(83, 4);
			   this->stat_label->Name = L"stat_label";
			   this->stat_label->Size = System::Drawing::Size(783, 40);
			   this->stat_label->TabIndex = 9;
			   this->stat_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // employeeAddEmployeePanel
			   // 
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeErrorBoxLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeHireDateDateTimePicker);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeBirthdayDateTimePicker);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeePasswordTextBox);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeLastnameTextbox);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeFirstnameTextBox);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeUsernameTextBox);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeCancelButton);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeAddButton);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeManagerCheckBox);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeHireDateLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeBirthdayLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeePasswordLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeLastnameLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeFirstnameLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeUsernameLabel);
			   this->employeeAddEmployeePanel->Controls->Add(this->employeeAddEmployeeLabel);
			   this->employeeAddEmployeePanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeePanel->Location = System::Drawing::Point(220, 80);
			   this->employeeAddEmployeePanel->Name = L"employeeAddEmployeePanel";
			   this->employeeAddEmployeePanel->Size = System::Drawing::Size(968, 607);
			   this->employeeAddEmployeePanel->TabIndex = 2;
			   // 
			   // employeeAddEmployeeErrorBoxLabel
			   // 
			   this->employeeAddEmployeeErrorBoxLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->employeeAddEmployeeErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			   this->employeeAddEmployeeErrorBoxLabel->Location = System::Drawing::Point(357, 468);
			   this->employeeAddEmployeeErrorBoxLabel->Name = L"employeeAddEmployeeErrorBoxLabel";
			   this->employeeAddEmployeeErrorBoxLabel->Size = System::Drawing::Size(268, 42);
			   this->employeeAddEmployeeErrorBoxLabel->TabIndex = 16;
			   this->employeeAddEmployeeErrorBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // employeeAddEmployeeHireDateDateTimePicker
			   // 
			   this->employeeAddEmployeeHireDateDateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeHireDateDateTimePicker->Location = System::Drawing::Point(357, 404);
			   this->employeeAddEmployeeHireDateDateTimePicker->Name = L"employeeAddEmployeeHireDateDateTimePicker";
			   this->employeeAddEmployeeHireDateDateTimePicker->Size = System::Drawing::Size(268, 22);
			   this->employeeAddEmployeeHireDateDateTimePicker->TabIndex = 15;
			   this->employeeAddEmployeeHireDateDateTimePicker->MaxDate = DateTime::Now;
			   // 
			   // employeeAddEmployeeBirthdayDateTimePicker
			   // 
			   this->employeeAddEmployeeBirthdayDateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeBirthdayDateTimePicker->Location = System::Drawing::Point(357, 342);
			   this->employeeAddEmployeeBirthdayDateTimePicker->Name = L"employeeAddEmployeeBirthdayDateTimePicker";
			   this->employeeAddEmployeeBirthdayDateTimePicker->Size = System::Drawing::Size(268, 22);
			   this->employeeAddEmployeeBirthdayDateTimePicker->TabIndex = 14;
			   this->employeeAddEmployeeBirthdayDateTimePicker->MaxDate = DateTime::Now;
			   // 
			   // employeeAddEmployeePasswordTextBox
			   // 
			   this->employeeAddEmployeePasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->employeeAddEmployeePasswordTextBox->Location = System::Drawing::Point(357, 282);
			   this->employeeAddEmployeePasswordTextBox->Name = L"employeeAddEmployeePasswordTextBox";
			   this->employeeAddEmployeePasswordTextBox->Size = System::Drawing::Size(268, 22);
			   this->employeeAddEmployeePasswordTextBox->TabIndex = 13;
			   // 
			   // employeeAddEmployeeLastnameTextbox
			   // 
			   this->employeeAddEmployeeLastnameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->employeeAddEmployeeLastnameTextbox->Location = System::Drawing::Point(357, 223);
			   this->employeeAddEmployeeLastnameTextbox->Name = L"employeeAddEmployeeLastnameTextbox";
			   this->employeeAddEmployeeLastnameTextbox->Size = System::Drawing::Size(268, 22);
			   this->employeeAddEmployeeLastnameTextbox->TabIndex = 12;
			   // 
			   // employeeAddEmployeeFirstnameTextBox
			   // 
			   this->employeeAddEmployeeFirstnameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->employeeAddEmployeeFirstnameTextBox->Location = System::Drawing::Point(357, 162);
			   this->employeeAddEmployeeFirstnameTextBox->Name = L"employeeAddEmployeeFirstnameTextBox";
			   this->employeeAddEmployeeFirstnameTextBox->Size = System::Drawing::Size(268, 22);
			   this->employeeAddEmployeeFirstnameTextBox->TabIndex = 11;
			   // 
			   // employeeAddEmployeeUsernameTextBox
			   // 
			   this->employeeAddEmployeeUsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->employeeAddEmployeeUsernameTextBox->Location = System::Drawing::Point(357, 105);
			   this->employeeAddEmployeeUsernameTextBox->Name = L"employeeAddEmployeeUsernameTextBox";
			   this->employeeAddEmployeeUsernameTextBox->Size = System::Drawing::Size(268, 22);
			   this->employeeAddEmployeeUsernameTextBox->TabIndex = 10;
			   // 
			   // employeeAddEmployeeCancelButton
			   // 
			   this->employeeAddEmployeeCancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeCancelButton->Location = System::Drawing::Point(550, 525);
			   this->employeeAddEmployeeCancelButton->Name = L"employeeAddEmployeeCancelButton";
			   this->employeeAddEmployeeCancelButton->Size = System::Drawing::Size(75, 34);
			   this->employeeAddEmployeeCancelButton->TabIndex = 9;
			   this->employeeAddEmployeeCancelButton->Text = L"Cancel";
			   this->employeeAddEmployeeCancelButton->UseVisualStyleBackColor = true;
			   // 
			   // employeeAddEmployeeAddButton
			   // 
			   this->employeeAddEmployeeAddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeAddButton->Location = System::Drawing::Point(454, 525);
			   this->employeeAddEmployeeAddButton->Name = L"employeeAddEmployeeAddButton";
			   this->employeeAddEmployeeAddButton->Size = System::Drawing::Size(75, 34);
			   this->employeeAddEmployeeAddButton->TabIndex = 8;
			   this->employeeAddEmployeeAddButton->Text = L"Add";
			   this->employeeAddEmployeeAddButton->UseVisualStyleBackColor = true;
			   // 
			   // employeeAddEmployeeManagerCheckBox
			   // 
			   this->employeeAddEmployeeManagerCheckBox->AutoSize = true;
			   this->employeeAddEmployeeManagerCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeManagerCheckBox->Location = System::Drawing::Point(357, 532);
			   this->employeeAddEmployeeManagerCheckBox->Name = L"employeeAddEmployeeManagerCheckBox";
			   this->employeeAddEmployeeManagerCheckBox->Size = System::Drawing::Size(86, 21);
			   this->employeeAddEmployeeManagerCheckBox->TabIndex = 7;
			   this->employeeAddEmployeeManagerCheckBox->Text = L"Manager";
			   this->employeeAddEmployeeManagerCheckBox->UseVisualStyleBackColor = true;
			   // 
			   // employeeAddEmployeeHireDateLabel
			   // 
			   this->employeeAddEmployeeHireDateLabel->AutoSize = true;
			   this->employeeAddEmployeeHireDateLabel->Location = System::Drawing::Point(368, 379);
			   this->employeeAddEmployeeHireDateLabel->Name = L"employeeAddEmployeeHireDateLabel";
			   this->employeeAddEmployeeHireDateLabel->Size = System::Drawing::Size(68, 17);
			   this->employeeAddEmployeeHireDateLabel->TabIndex = 6;
			   this->employeeAddEmployeeHireDateLabel->Text = L"Hire Date";
			   // 
			   // employeeAddEmployeeBirthdayLabel
			   // 
			   this->employeeAddEmployeeBirthdayLabel->AutoSize = true;
			   this->employeeAddEmployeeBirthdayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeBirthdayLabel->Location = System::Drawing::Point(368, 320);
			   this->employeeAddEmployeeBirthdayLabel->Name = L"employeeAddEmployeeBirthdayLabel";
			   this->employeeAddEmployeeBirthdayLabel->Size = System::Drawing::Size(60, 17);
			   this->employeeAddEmployeeBirthdayLabel->TabIndex = 5;
			   this->employeeAddEmployeeBirthdayLabel->Text = L"Birthday";
			   // 
			   // employeeAddEmployeePasswordLabel
			   // 
			   this->employeeAddEmployeePasswordLabel->AutoSize = true;
			   this->employeeAddEmployeePasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeePasswordLabel->Location = System::Drawing::Point(368, 260);
			   this->employeeAddEmployeePasswordLabel->Name = L"employeeAddEmployeePasswordLabel";
			   this->employeeAddEmployeePasswordLabel->Size = System::Drawing::Size(69, 17);
			   this->employeeAddEmployeePasswordLabel->TabIndex = 4;
			   this->employeeAddEmployeePasswordLabel->Text = L"Password";
			   // 
			   // employeeAddEmployeeLastnameLabel
			   // 
			   this->employeeAddEmployeeLastnameLabel->AutoSize = true;
			   this->employeeAddEmployeeLastnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeLastnameLabel->Location = System::Drawing::Point(368, 197);
			   this->employeeAddEmployeeLastnameLabel->Name = L"employeeAddEmployeeLastnameLabel";
			   this->employeeAddEmployeeLastnameLabel->Size = System::Drawing::Size(70, 17);
			   this->employeeAddEmployeeLastnameLabel->TabIndex = 3;
			   this->employeeAddEmployeeLastnameLabel->Text = L"Lastname";
			   // 
			   // employeeAddEmployeeFirstnameLabel
			   // 
			   this->employeeAddEmployeeFirstnameLabel->AutoSize = true;
			   this->employeeAddEmployeeFirstnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeFirstnameLabel->Location = System::Drawing::Point(368, 139);
			   this->employeeAddEmployeeFirstnameLabel->Name = L"employeeAddEmployeeFirstnameLabel";
			   this->employeeAddEmployeeFirstnameLabel->Size = System::Drawing::Size(70, 17);
			   this->employeeAddEmployeeFirstnameLabel->TabIndex = 2;
			   this->employeeAddEmployeeFirstnameLabel->Text = L"Firstname";
			   // 
			   // employeeAddEmployeeUsernameLabel
			   // 
			   this->employeeAddEmployeeUsernameLabel->AutoSize = true;
			   this->employeeAddEmployeeUsernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeUsernameLabel->Location = System::Drawing::Point(368, 84);
			   this->employeeAddEmployeeUsernameLabel->Name = L"employeeAddEmployeeUsernameLabel";
			   this->employeeAddEmployeeUsernameLabel->Size = System::Drawing::Size(73, 17);
			   this->employeeAddEmployeeUsernameLabel->TabIndex = 1;
			   this->employeeAddEmployeeUsernameLabel->Text = L"Username";
			   // 
			   // employeeAddEmployeeLabel
			   // 
			   this->employeeAddEmployeeLabel->AutoSize = true;
			   this->employeeAddEmployeeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeLabel->Location = System::Drawing::Point(350, 6);
			   this->employeeAddEmployeeLabel->Name = L"employeeAddEmployeeLabel";
			   this->employeeAddEmployeeLabel->Size = System::Drawing::Size(263, 32);
			   this->employeeAddEmployeeLabel->TabIndex = 0;
			   this->employeeAddEmployeeLabel->Text = L"Add New Employee";
			   // 
			   // employeeListViewPanel
			   // 
			   this->employeeListViewPanel->Controls->Add(this->employeeAddNewEmployeeButton);
			   this->employeeListViewPanel->Controls->Add(this->employeeListView);
			   this->employeeListViewPanel->Location = System::Drawing::Point(220, 80);
			   this->employeeListViewPanel->Name = L"employeeListViewPanel";
			   this->employeeListViewPanel->Size = System::Drawing::Size(968, 607);
			   this->employeeListViewPanel->TabIndex = 33;
			   // 
			   // employeeAddNewEmployeeButton
			   // 
			   this->employeeAddNewEmployeeButton->Location = System::Drawing::Point(778, 528);
			   this->employeeAddNewEmployeeButton->Name = L"employeeAddNewEmployeeButton";
			   this->employeeAddNewEmployeeButton->Size = System::Drawing::Size(145, 43);
			   this->employeeAddNewEmployeeButton->TabIndex = 1;
			   this->employeeAddNewEmployeeButton->Text = L"Add New Employee";
			   this->employeeAddNewEmployeeButton->UseVisualStyleBackColor = true;
			   this->employeeAddNewEmployeeButton->Click += gcnew System::EventHandler(this, &MyForm::employeeAddNewEmployeeButton_Click);
			   // 
			   // employeeListView
			   // 
			   this->employeeListView->HideSelection = false;
			   this->employeeListView->Location = System::Drawing::Point(53, 35);
			   this->employeeListView->Name = L"employeeListView";
			   this->employeeListView->Size = System::Drawing::Size(870, 441);
			   this->employeeListView->TabIndex = 0;
			   this->employeeListView->UseCompatibleStateImageBehavior = false;
			   // 
			   // clientListViewPanel
			   // 
			   this->clientListViewPanel->Controls->Add(this->clientListView);
			   this->clientListViewPanel->Location = System::Drawing::Point(220, 80);
			   this->clientListViewPanel->Name = L"clientListViewPanel";
			   this->clientListViewPanel->Size = System::Drawing::Size(968, 607);
			   this->clientListViewPanel->TabIndex = 32;
			   // 
			   // clientListView
			   // 
			   this->clientListView->HideSelection = false;
			   this->clientListView->Location = System::Drawing::Point(22, 21);
			   this->clientListView->Name = L"clientListView";
			   this->clientListView->Size = System::Drawing::Size(920, 573);
			   this->clientListView->TabIndex = 0;
			   this->clientListView->UseCompatibleStateImageBehavior = false;
			   // 
			   // clientModifyPanel
			   // 
			   this->clientModifyPanel->Controls->Add(this->clientModifyBackButton);
			   this->clientModifyPanel->Controls->Add(this->clientModifyErrorBoxLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyApplyModifButton);
			   this->clientModifyPanel->Controls->Add(this->clientModifyBirthdayDateTimePicker);
			   this->clientModifyPanel->Controls->Add(this->clientModifyBarLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyPostalCodeNumericUpDown);
			   this->clientModifyPanel->Controls->Add(this->clientModifyAddAddressButton);
			   this->clientModifyPanel->Controls->Add(this->clientModifyDeleteAddressButton);
			   this->clientModifyPanel->Controls->Add(this->clientModifyAddressPickerComboBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyMoreInfoTextBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyCityTextBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyAddressStreetTextBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyLastnameTextBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyFirstnameTextBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyUsernameTextBox);
			   this->clientModifyPanel->Controls->Add(this->clientModifyMoreInfoLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyPostalCodeLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyCityLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyAddressStreetLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyAddressLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyBirthdayLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyLastnameLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyFirstnameLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyUsernameLabel);
			   this->clientModifyPanel->Controls->Add(this->clientModifyInformationsLabel);
			   this->clientModifyPanel->Location = System::Drawing::Point(220, 80);
			   this->clientModifyPanel->Name = L"clientModifyPanel";
			   this->clientModifyPanel->Size = System::Drawing::Size(968, 607);
			   this->clientModifyPanel->TabIndex = 29;
			   // 
			   // clientModifyBackButton
			   // 
			   this->clientModifyBackButton->Location = System::Drawing::Point(927, 10);
			   this->clientModifyBackButton->Name = L"clientModifyBackButton";
			   this->clientModifyBackButton->Size = System::Drawing::Size(30, 30);
			   this->clientModifyBackButton->TabIndex = 32;
			   this->clientModifyBackButton->Text = L"X";
			   this->clientModifyBackButton->UseVisualStyleBackColor = true;
			   this->clientModifyBackButton->Click += gcnew System::EventHandler(this, &MyForm::clientModifyBackButton_Click);
			   // 
			   // clientModifyErrorBoxLabel
			   // 
			   this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			   this->clientModifyErrorBoxLabel->Location = System::Drawing::Point(741, 556);
			   this->clientModifyErrorBoxLabel->Name = L"clientModifyErrorBoxLabel";
			   this->clientModifyErrorBoxLabel->Size = System::Drawing::Size(177, 38);
			   this->clientModifyErrorBoxLabel->TabIndex = 31;
			   // 
			   // clientModifyApplyModifButton
			   // 
			   this->clientModifyApplyModifButton->Location = System::Drawing::Point(741, 524);
			   this->clientModifyApplyModifButton->Name = L"clientModifyApplyModifButton";
			   this->clientModifyApplyModifButton->Size = System::Drawing::Size(177, 26);
			   this->clientModifyApplyModifButton->TabIndex = 30;
			   this->clientModifyApplyModifButton->Text = L"Apply Modifications";
			   this->clientModifyApplyModifButton->UseVisualStyleBackColor = true;
			   // 
			   // clientModifyBirthdayDateTimePicker
			   // 
			   this->clientModifyBirthdayDateTimePicker->Location = System::Drawing::Point(90, 187);
			   this->clientModifyBirthdayDateTimePicker->Name = L"clientModifyBirthdayDateTimePicker";
			   this->clientModifyBirthdayDateTimePicker->Size = System::Drawing::Size(200, 22);
			   this->clientModifyBirthdayDateTimePicker->TabIndex = 29;
			   this->clientModifyBirthdayDateTimePicker->MaxDate = DateTime::Now;
			   // 
			   // clientModifyBarLabel
			   // 
			   this->clientModifyBarLabel->AutoSize = true;
			   this->clientModifyBarLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->clientModifyBarLabel->Location = System::Drawing::Point(46, 229);
			   this->clientModifyBarLabel->Name = L"clientModifyBarLabel";
			   this->clientModifyBarLabel->Size = System::Drawing::Size(872, 38);
			   this->clientModifyBarLabel->TabIndex = 28;
			   this->clientModifyBarLabel->Text = L"_____________________________________________";
			   // 
			   // clientModifyPostalCodeNumericUpDown
			   // 
			   this->clientModifyPostalCodeNumericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				   1000, 0, 0,
					   0
			   });
			   this->clientModifyPostalCodeNumericUpDown->Location = System::Drawing::Point(446, 474);
			   this->clientModifyPostalCodeNumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				   100000, 0, 0,
					   0
			   });
			   this->clientModifyPostalCodeNumericUpDown->Name = L"clientModifyPostalCodeNumericUpDown";
			   this->clientModifyPostalCodeNumericUpDown->Size = System::Drawing::Size(108, 22);
			   this->clientModifyPostalCodeNumericUpDown->TabIndex = 27;
			   // 
			   // clientModifyAddAddressButton
			   // 
			   this->clientModifyAddAddressButton->Location = System::Drawing::Point(583, 524);
			   this->clientModifyAddAddressButton->Name = L"clientModifyAddAddressButton";
			   this->clientModifyAddAddressButton->Size = System::Drawing::Size(118, 25);
			   this->clientModifyAddAddressButton->TabIndex = 23;
			   this->clientModifyAddAddressButton->Text = L"Add";
			   this->clientModifyAddAddressButton->UseVisualStyleBackColor = true;
			   // 
			   // clientModifyDeleteAddressButton
			   // 
			   this->clientModifyDeleteAddressButton->Location = System::Drawing::Point(583, 373);
			   this->clientModifyDeleteAddressButton->Name = L"clientModifyDeleteAddressButton";
			   this->clientModifyDeleteAddressButton->Size = System::Drawing::Size(118, 25);
			   this->clientModifyDeleteAddressButton->TabIndex = 22;
			   this->clientModifyDeleteAddressButton->Text = L"Delete";
			   this->clientModifyDeleteAddressButton->UseVisualStyleBackColor = true;
			   // 
			   // clientModifyAddressPickerComboBox
			   // 
			   this->clientModifyAddressPickerComboBox->BackColor = System::Drawing::SystemColors::Window;
			   this->clientModifyAddressPickerComboBox->FormattingEnabled = true;
			   this->clientModifyAddressPickerComboBox->Location = System::Drawing::Point(88, 374);
			   this->clientModifyAddressPickerComboBox->Name = L"clientModifyAddressPickerComboBox";
			   this->clientModifyAddressPickerComboBox->Size = System::Drawing::Size(466, 24);
			   this->clientModifyAddressPickerComboBox->TabIndex = 20;
			   // 
			   // clientModifyMoreInfoTextBox
			   // 
			   this->clientModifyMoreInfoTextBox->Location = System::Drawing::Point(88, 524);
			   this->clientModifyMoreInfoTextBox->Name = L"clientModifyMoreInfoTextBox";
			   this->clientModifyMoreInfoTextBox->Size = System::Drawing::Size(466, 22);
			   this->clientModifyMoreInfoTextBox->TabIndex = 19;
			   // 
			   // clientModifyCityTextBox
			   // 
			   this->clientModifyCityTextBox->Location = System::Drawing::Point(276, 474);
			   this->clientModifyCityTextBox->Name = L"clientModifyCityTextBox";
			   this->clientModifyCityTextBox->Size = System::Drawing::Size(158, 22);
			   this->clientModifyCityTextBox->TabIndex = 17;
			   // 
			   // clientModifyAddressStreetTextBox
			   // 
			   this->clientModifyAddressStreetTextBox->Location = System::Drawing::Point(88, 474);
			   this->clientModifyAddressStreetTextBox->Name = L"clientModifyAddressStreetTextBox";
			   this->clientModifyAddressStreetTextBox->Size = System::Drawing::Size(176, 22);
			   this->clientModifyAddressStreetTextBox->TabIndex = 16;
			   // 
			   // clientModifyLastnameTextBox
			   // 
			   this->clientModifyLastnameTextBox->Location = System::Drawing::Point(461, 114);
			   this->clientModifyLastnameTextBox->Name = L"clientModifyLastnameTextBox";
			   this->clientModifyLastnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->clientModifyLastnameTextBox->TabIndex = 13;
			   // 
			   // clientModifyFirstnameTextBox
			   // 
			   this->clientModifyFirstnameTextBox->Location = System::Drawing::Point(278, 114);
			   this->clientModifyFirstnameTextBox->Name = L"clientModifyFirstnameTextBox";
			   this->clientModifyFirstnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->clientModifyFirstnameTextBox->TabIndex = 12;
			   // 
			   // clientModifyUsernameTextBox
			   // 
			   this->clientModifyUsernameTextBox->Location = System::Drawing::Point(90, 114);
			   this->clientModifyUsernameTextBox->Name = L"clientModifyUsernameTextBox";
			   this->clientModifyUsernameTextBox->Size = System::Drawing::Size(158, 22);
			   this->clientModifyUsernameTextBox->TabIndex = 11;
			   // 
			   // clientModifyMoreInfoLabel
			   // 
			   this->clientModifyMoreInfoLabel->AutoSize = true;
			   this->clientModifyMoreInfoLabel->Location = System::Drawing::Point(107, 502);
			   this->clientModifyMoreInfoLabel->Name = L"clientModifyMoreInfoLabel";
			   this->clientModifyMoreInfoLabel->Size = System::Drawing::Size(182, 17);
			   this->clientModifyMoreInfoLabel->TabIndex = 10;
			   this->clientModifyMoreInfoLabel->Text = L"More information (ex : floor)";
			   // 
			   // clientModifyPostalCodeLabel
			   // 
			   this->clientModifyPostalCodeLabel->AutoSize = true;
			   this->clientModifyPostalCodeLabel->Location = System::Drawing::Point(456, 451);
			   this->clientModifyPostalCodeLabel->Name = L"clientModifyPostalCodeLabel";
			   this->clientModifyPostalCodeLabel->Size = System::Drawing::Size(82, 17);
			   this->clientModifyPostalCodeLabel->TabIndex = 9;
			   this->clientModifyPostalCodeLabel->Text = L"Postal code";
			   // 
			   // clientModifyCityLabel
			   // 
			   this->clientModifyCityLabel->AutoSize = true;
			   this->clientModifyCityLabel->Location = System::Drawing::Point(290, 451);
			   this->clientModifyCityLabel->Name = L"clientModifyCityLabel";
			   this->clientModifyCityLabel->Size = System::Drawing::Size(31, 17);
			   this->clientModifyCityLabel->TabIndex = 8;
			   this->clientModifyCityLabel->Text = L"City";
			   // 
			   // clientModifyAddressStreetLabel
			   // 
			   this->clientModifyAddressStreetLabel->AutoSize = true;
			   this->clientModifyAddressStreetLabel->Location = System::Drawing::Point(105, 451);
			   this->clientModifyAddressStreetLabel->Name = L"clientModifyAddressStreetLabel";
			   this->clientModifyAddressStreetLabel->Size = System::Drawing::Size(128, 17);
			   this->clientModifyAddressStreetLabel->TabIndex = 7;
			   this->clientModifyAddressStreetLabel->Text = L"Number and Street";
			   // 
			   // clientModifyAddressLabel
			   // 
			   this->clientModifyAddressLabel->AutoSize = true;
			   this->clientModifyAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->clientModifyAddressLabel->Location = System::Drawing::Point(30, 300);
			   this->clientModifyAddressLabel->Name = L"clientModifyAddressLabel";
			   this->clientModifyAddressLabel->Size = System::Drawing::Size(145, 38);
			   this->clientModifyAddressLabel->TabIndex = 6;
			   this->clientModifyAddressLabel->Text = L"Address";
			   // 
			   // clientModifyBirthdayLabel
			   // 
			   this->clientModifyBirthdayLabel->AutoSize = true;
			   this->clientModifyBirthdayLabel->Location = System::Drawing::Point(107, 165);
			   this->clientModifyBirthdayLabel->Name = L"clientModifyBirthdayLabel";
			   this->clientModifyBirthdayLabel->Size = System::Drawing::Size(60, 17);
			   this->clientModifyBirthdayLabel->TabIndex = 5;
			   this->clientModifyBirthdayLabel->Text = L"Birthday";
			   // 
			   // clientModifyLastnameLabel
			   // 
			   this->clientModifyLastnameLabel->AutoSize = true;
			   this->clientModifyLastnameLabel->Location = System::Drawing::Point(467, 92);
			   this->clientModifyLastnameLabel->Name = L"clientModifyLastnameLabel";
			   this->clientModifyLastnameLabel->Size = System::Drawing::Size(70, 17);
			   this->clientModifyLastnameLabel->TabIndex = 3;
			   this->clientModifyLastnameLabel->Text = L"Lastname";
			   // 
			   // clientModifyFirstnameLabel
			   // 
			   this->clientModifyFirstnameLabel->AutoSize = true;
			   this->clientModifyFirstnameLabel->Location = System::Drawing::Point(292, 92);
			   this->clientModifyFirstnameLabel->Name = L"clientModifyFirstnameLabel";
			   this->clientModifyFirstnameLabel->Size = System::Drawing::Size(70, 17);
			   this->clientModifyFirstnameLabel->TabIndex = 2;
			   this->clientModifyFirstnameLabel->Text = L"Firstname";
			   // 
			   // clientModifyUsernameLabel
			   // 
			   this->clientModifyUsernameLabel->AutoSize = true;
			   this->clientModifyUsernameLabel->Location = System::Drawing::Point(107, 92);
			   this->clientModifyUsernameLabel->Name = L"clientModifyUsernameLabel";
			   this->clientModifyUsernameLabel->Size = System::Drawing::Size(73, 17);
			   this->clientModifyUsernameLabel->TabIndex = 1;
			   this->clientModifyUsernameLabel->Text = L"Username";
			   // 
			   // clientModifyInformationsLabel
			   // 
			   this->clientModifyInformationsLabel->AutoSize = true;
			   this->clientModifyInformationsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->clientModifyInformationsLabel->Location = System::Drawing::Point(22, 22);
			   this->clientModifyInformationsLabel->Name = L"clientModifyInformationsLabel";
			   this->clientModifyInformationsLabel->Size = System::Drawing::Size(207, 38);
			   this->clientModifyInformationsLabel->TabIndex = 0;
			   this->clientModifyInformationsLabel->Text = L"Informations";
			   // 
			   // employeeModifyPanel
			   // 
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyBackButton);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyHireDateLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyHireDateDateTimePicker);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyErrorBoxLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyApplyModifButton);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyBirthdayDateTimePicker);
			   this->employeeModifyPanel->Controls->Add(this->barSeparateLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyPostalCodeNumericUpDown);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyAddAddressButton);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyDeleteAddressButton);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyAddressPickerComboBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyMoreInfoTextBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyCityTextBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyAddressStreetTextBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyLastnameTextBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyFirstnameTextBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyUsernameTextBox);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyMoreInfoLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyPostalCodeLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyCityLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyAddressStreetLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyAddressLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyBirthdayLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyLastnameLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyFirstnameLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyUsernameLabel);
			   this->employeeModifyPanel->Controls->Add(this->employeeModifyInformationsLabel);
			   this->employeeModifyPanel->Location = System::Drawing::Point(220, 80);
			   this->employeeModifyPanel->Name = L"employeeModifyPanel";
			   this->employeeModifyPanel->Size = System::Drawing::Size(968, 607);
			   this->employeeModifyPanel->TabIndex = 32;
			   // 
			   // employeeModifyBackButton
			   // 
			   this->employeeModifyBackButton->BackColor = System::Drawing::Color::White;
			   this->employeeModifyBackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->employeeModifyBackButton->Location = System::Drawing::Point(927, 9);
			   this->employeeModifyBackButton->Name = L"employeeModifyBackButton";
			   this->employeeModifyBackButton->Size = System::Drawing::Size(30, 30);
			   this->employeeModifyBackButton->TabIndex = 34;
			   this->employeeModifyBackButton->Text = L"X";
			   this->employeeModifyBackButton->UseVisualStyleBackColor = false;
			   this->employeeModifyBackButton->Click += gcnew System::EventHandler(this, &MyForm::employeeModifyBackButton_Click);
			   // 
			   // employeeModifyHireDateLabel
			   // 
			   this->employeeModifyHireDateLabel->AutoSize = true;
			   this->employeeModifyHireDateLabel->Location = System::Drawing::Point(422, 166);
			   this->employeeModifyHireDateLabel->Name = L"employeeModifyHireDateLabel";
			   this->employeeModifyHireDateLabel->Size = System::Drawing::Size(68, 17);
			   this->employeeModifyHireDateLabel->TabIndex = 33;
			   this->employeeModifyHireDateLabel->Text = L"Hire Date";
			   // 
			   // employeeModifyHireDateDateTimePicker
			   // 
			   this->employeeModifyHireDateDateTimePicker->Location = System::Drawing::Point(416, 187);
			   this->employeeModifyHireDateDateTimePicker->Name = L"employeeModifyHireDateDateTimePicker";
			   this->employeeModifyHireDateDateTimePicker->Size = System::Drawing::Size(200, 22);
			   this->employeeModifyHireDateDateTimePicker->TabIndex = 32;
			   this->employeeModifyHireDateDateTimePicker->MaxDate = DateTime::Now;
			   // 
			   // employeeModifyErrorBoxLabel
			   // 
			   this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			   this->employeeModifyErrorBoxLabel->Location = System::Drawing::Point(741, 556);
			   this->employeeModifyErrorBoxLabel->Name = L"employeeModifyErrorBoxLabel";
			   this->employeeModifyErrorBoxLabel->Size = System::Drawing::Size(177, 38);
			   this->employeeModifyErrorBoxLabel->TabIndex = 31;
			   // 
			   // employeeModifyApplyModifButton
			   // 
			   this->employeeModifyApplyModifButton->Location = System::Drawing::Point(741, 524);
			   this->employeeModifyApplyModifButton->Name = L"employeeModifyApplyModifButton";
			   this->employeeModifyApplyModifButton->Size = System::Drawing::Size(177, 26);
			   this->employeeModifyApplyModifButton->TabIndex = 30;
			   this->employeeModifyApplyModifButton->Text = L"Apply Modifications";
			   this->employeeModifyApplyModifButton->UseVisualStyleBackColor = true;
			   // 
			   // employeeModifyBirthdayDateTimePicker
			   // 
			   this->employeeModifyBirthdayDateTimePicker->Location = System::Drawing::Point(90, 187);
			   this->employeeModifyBirthdayDateTimePicker->Name = L"employeeModifyBirthdayDateTimePicker";
			   this->employeeModifyBirthdayDateTimePicker->Size = System::Drawing::Size(200, 22);
			   this->employeeModifyBirthdayDateTimePicker->TabIndex = 29;
			   this->employeeModifyBirthdayDateTimePicker->MaxDate = DateTime::Now;
			   // 
			   // barSeparateLabel
			   // 
			   this->barSeparateLabel->AutoSize = true;
			   this->barSeparateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->barSeparateLabel->Location = System::Drawing::Point(46, 229);
			   this->barSeparateLabel->Name = L"barSeparateLabel";
			   this->barSeparateLabel->Size = System::Drawing::Size(872, 38);
			   this->barSeparateLabel->TabIndex = 28;
			   this->barSeparateLabel->Text = L"_____________________________________________";
			   // 
			   // employeeModifyPostalCodeNumericUpDown
			   // 
			   this->employeeModifyPostalCodeNumericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				   1000, 0, 0,
					   0
			   });
			   this->employeeModifyPostalCodeNumericUpDown->Location = System::Drawing::Point(446, 474);
			   this->employeeModifyPostalCodeNumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				   100000, 0, 0,
					   0
			   });
			   this->employeeModifyPostalCodeNumericUpDown->Name = L"employeeModifyPostalCodeNumericUpDown";
			   this->employeeModifyPostalCodeNumericUpDown->Size = System::Drawing::Size(108, 22);
			   this->employeeModifyPostalCodeNumericUpDown->TabIndex = 27;
			   // 
			   // employeeModifyAddAddressButton
			   // 
			   this->employeeModifyAddAddressButton->Location = System::Drawing::Point(583, 524);
			   this->employeeModifyAddAddressButton->Name = L"employeeModifyAddAddressButton";
			   this->employeeModifyAddAddressButton->Size = System::Drawing::Size(118, 25);
			   this->employeeModifyAddAddressButton->TabIndex = 23;
			   this->employeeModifyAddAddressButton->Text = L"Add";
			   this->employeeModifyAddAddressButton->UseVisualStyleBackColor = true;
			   // 
			   // employeeModifyDeleteAddressButton
			   // 
			   this->employeeModifyDeleteAddressButton->Location = System::Drawing::Point(583, 373);
			   this->employeeModifyDeleteAddressButton->Name = L"employeeModifyDeleteAddressButton";
			   this->employeeModifyDeleteAddressButton->Size = System::Drawing::Size(118, 25);
			   this->employeeModifyDeleteAddressButton->TabIndex = 22;
			   this->employeeModifyDeleteAddressButton->Text = L"Delete";
			   this->employeeModifyDeleteAddressButton->UseVisualStyleBackColor = true;
			   // 
			   // employeeModifyAddressPickerComboBox
			   // 
			   this->employeeModifyAddressPickerComboBox->BackColor = System::Drawing::SystemColors::Window;
			   this->employeeModifyAddressPickerComboBox->FormattingEnabled = true;
			   this->employeeModifyAddressPickerComboBox->Location = System::Drawing::Point(88, 374);
			   this->employeeModifyAddressPickerComboBox->Name = L"employeeModifyAddressPickerComboBox";
			   this->employeeModifyAddressPickerComboBox->Size = System::Drawing::Size(466, 24);
			   this->employeeModifyAddressPickerComboBox->TabIndex = 20;
			   // 
			   // employeeModifyMoreInfoTextBox
			   // 
			   this->employeeModifyMoreInfoTextBox->Location = System::Drawing::Point(88, 524);
			   this->employeeModifyMoreInfoTextBox->Name = L"employeeModifyMoreInfoTextBox";
			   this->employeeModifyMoreInfoTextBox->Size = System::Drawing::Size(466, 22);
			   this->employeeModifyMoreInfoTextBox->TabIndex = 19;
			   // 
			   // employeeModifyCityTextBox
			   // 
			   this->employeeModifyCityTextBox->Location = System::Drawing::Point(276, 474);
			   this->employeeModifyCityTextBox->Name = L"employeeModifyCityTextBox";
			   this->employeeModifyCityTextBox->Size = System::Drawing::Size(158, 22);
			   this->employeeModifyCityTextBox->TabIndex = 17;
			   // 
			   // employeeModifyAddressStreetTextBox
			   // 
			   this->employeeModifyAddressStreetTextBox->Location = System::Drawing::Point(88, 474);
			   this->employeeModifyAddressStreetTextBox->Name = L"employeeModifyAddressStreetTextBox";
			   this->employeeModifyAddressStreetTextBox->Size = System::Drawing::Size(176, 22);
			   this->employeeModifyAddressStreetTextBox->TabIndex = 16;
			   // 
			   // employeeModifyLastnameTextBox
			   // 
			   this->employeeModifyLastnameTextBox->Location = System::Drawing::Point(461, 114);
			   this->employeeModifyLastnameTextBox->Name = L"employeeModifyLastnameTextBox";
			   this->employeeModifyLastnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->employeeModifyLastnameTextBox->TabIndex = 13;
			   // 
			   // employeeModifyFirstnameTextBox
			   // 
			   this->employeeModifyFirstnameTextBox->Location = System::Drawing::Point(278, 114);
			   this->employeeModifyFirstnameTextBox->Name = L"employeeModifyFirstnameTextBox";
			   this->employeeModifyFirstnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->employeeModifyFirstnameTextBox->TabIndex = 12;
			   // 
			   // employeeModifyUsernameTextBox
			   // 
			   this->employeeModifyUsernameTextBox->Location = System::Drawing::Point(90, 114);
			   this->employeeModifyUsernameTextBox->Name = L"employeeModifyUsernameTextBox";
			   this->employeeModifyUsernameTextBox->Size = System::Drawing::Size(158, 22);
			   this->employeeModifyUsernameTextBox->TabIndex = 11;
			   // 
			   // employeeModifyMoreInfoLabel
			   // 
			   this->employeeModifyMoreInfoLabel->AutoSize = true;
			   this->employeeModifyMoreInfoLabel->Location = System::Drawing::Point(107, 502);
			   this->employeeModifyMoreInfoLabel->Name = L"employeeModifyMoreInfoLabel";
			   this->employeeModifyMoreInfoLabel->Size = System::Drawing::Size(182, 17);
			   this->employeeModifyMoreInfoLabel->TabIndex = 10;
			   this->employeeModifyMoreInfoLabel->Text = L"More information (ex : floor)";
			   // 
			   // employeeModifyPostalCodeLabel
			   // 
			   this->employeeModifyPostalCodeLabel->AutoSize = true;
			   this->employeeModifyPostalCodeLabel->Location = System::Drawing::Point(456, 451);
			   this->employeeModifyPostalCodeLabel->Name = L"employeeModifyPostalCodeLabel";
			   this->employeeModifyPostalCodeLabel->Size = System::Drawing::Size(82, 17);
			   this->employeeModifyPostalCodeLabel->TabIndex = 9;
			   this->employeeModifyPostalCodeLabel->Text = L"Postal code";
			   // 
			   // employeeModifyCityLabel
			   // 
			   this->employeeModifyCityLabel->AutoSize = true;
			   this->employeeModifyCityLabel->Location = System::Drawing::Point(290, 451);
			   this->employeeModifyCityLabel->Name = L"employeeModifyCityLabel";
			   this->employeeModifyCityLabel->Size = System::Drawing::Size(31, 17);
			   this->employeeModifyCityLabel->TabIndex = 8;
			   this->employeeModifyCityLabel->Text = L"City";
			   // 
			   // employeeModifyAddressStreetLabel
			   // 
			   this->employeeModifyAddressStreetLabel->AutoSize = true;
			   this->employeeModifyAddressStreetLabel->Location = System::Drawing::Point(105, 451);
			   this->employeeModifyAddressStreetLabel->Name = L"employeeModifyAddressStreetLabel";
			   this->employeeModifyAddressStreetLabel->Size = System::Drawing::Size(128, 17);
			   this->employeeModifyAddressStreetLabel->TabIndex = 7;
			   this->employeeModifyAddressStreetLabel->Text = L"Number and Street";
			   // 
			   // employeeModifyAddressLabel
			   // 
			   this->employeeModifyAddressLabel->AutoSize = true;
			   this->employeeModifyAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeModifyAddressLabel->Location = System::Drawing::Point(30, 300);
			   this->employeeModifyAddressLabel->Name = L"employeeModifyAddressLabel";
			   this->employeeModifyAddressLabel->Size = System::Drawing::Size(145, 38);
			   this->employeeModifyAddressLabel->TabIndex = 6;
			   this->employeeModifyAddressLabel->Text = L"Address";
			   // 
			   // employeeModifyBirthdayLabel
			   // 
			   this->employeeModifyBirthdayLabel->AutoSize = true;
			   this->employeeModifyBirthdayLabel->Location = System::Drawing::Point(107, 165);
			   this->employeeModifyBirthdayLabel->Name = L"employeeModifyBirthdayLabel";
			   this->employeeModifyBirthdayLabel->Size = System::Drawing::Size(60, 17);
			   this->employeeModifyBirthdayLabel->TabIndex = 5;
			   this->employeeModifyBirthdayLabel->Text = L"Birthday";
			   // 
			   // employeeModifyLastnameLabel
			   // 
			   this->employeeModifyLastnameLabel->AutoSize = true;
			   this->employeeModifyLastnameLabel->Location = System::Drawing::Point(467, 92);
			   this->employeeModifyLastnameLabel->Name = L"employeeModifyLastnameLabel";
			   this->employeeModifyLastnameLabel->Size = System::Drawing::Size(70, 17);
			   this->employeeModifyLastnameLabel->TabIndex = 3;
			   this->employeeModifyLastnameLabel->Text = L"Lastname";
			   // 
			   // employeeModifyFirstnameLabel
			   // 
			   this->employeeModifyFirstnameLabel->AutoSize = true;
			   this->employeeModifyFirstnameLabel->Location = System::Drawing::Point(292, 92);
			   this->employeeModifyFirstnameLabel->Name = L"employeeModifyFirstnameLabel";
			   this->employeeModifyFirstnameLabel->Size = System::Drawing::Size(70, 17);
			   this->employeeModifyFirstnameLabel->TabIndex = 2;
			   this->employeeModifyFirstnameLabel->Text = L"Firstname";
			   // 
			   // employeeModifyUsernameLabel
			   // 
			   this->employeeModifyUsernameLabel->AutoSize = true;
			   this->employeeModifyUsernameLabel->Location = System::Drawing::Point(107, 92);
			   this->employeeModifyUsernameLabel->Name = L"employeeModifyUsernameLabel";
			   this->employeeModifyUsernameLabel->Size = System::Drawing::Size(73, 17);
			   this->employeeModifyUsernameLabel->TabIndex = 1;
			   this->employeeModifyUsernameLabel->Text = L"Username";
			   // 
			   // employeeModifyInformationsLabel
			   // 
			   this->employeeModifyInformationsLabel->AutoSize = true;
			   this->employeeModifyInformationsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeModifyInformationsLabel->Location = System::Drawing::Point(22, 22);
			   this->employeeModifyInformationsLabel->Name = L"employeeModifyInformationsLabel";
			   this->employeeModifyInformationsLabel->Size = System::Drawing::Size(207, 38);
			   this->employeeModifyInformationsLabel->TabIndex = 0;
			   this->employeeModifyInformationsLabel->Text = L"Informations";
			   // 
			   // preCatalogPanel
			   // 
			   this->preCatalogPanel->Controls->Add(this->preCatalogSentenceLabel);
			   this->preCatalogPanel->Controls->Add(this->preCatalogLoginButton);
			   this->preCatalogPanel->Controls->Add(this->preCatalogTitleLabel);
			   this->preCatalogPanel->Controls->Add(this->preCatalogSearchLabel);
			   this->preCatalogPanel->Controls->Add(this->preCatalogTextBox);
			   this->preCatalogPanel->Controls->Add(this->preCatalogListView);
			   this->preCatalogPanel->Location = System::Drawing::Point(220, 80);
			   this->preCatalogPanel->Name = L"preCatalogPanel";
			   this->preCatalogPanel->Size = System::Drawing::Size(968, 607);
			   this->preCatalogPanel->TabIndex = 5;
			   // 
			   // preCatalogSentenceLabel
			   // 
			   this->preCatalogSentenceLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->preCatalogSentenceLabel->AutoSize = true;
			   this->preCatalogSentenceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->preCatalogSentenceLabel->Location = System::Drawing::Point(664, 556);
			   this->preCatalogSentenceLabel->Name = L"preCatalogSentenceLabel";
			   this->preCatalogSentenceLabel->Size = System::Drawing::Size(153, 17);
			   this->preCatalogSentenceLabel->TabIndex = 5;
			   this->preCatalogSentenceLabel->Text = L"Envie de commander \?";
			   // 
			   // preCatalogLoginButton
			   // 
			   this->preCatalogLoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->preCatalogLoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->preCatalogLoginButton->Location = System::Drawing::Point(825, 545);
			   this->preCatalogLoginButton->Name = L"preCatalogLoginButton";
			   this->preCatalogLoginButton->Size = System::Drawing::Size(117, 38);
			   this->preCatalogLoginButton->TabIndex = 4;
			   this->preCatalogLoginButton->Text = L"Login";
			   this->preCatalogLoginButton->UseVisualStyleBackColor = true;
			   this->preCatalogLoginButton->Click += gcnew System::EventHandler(this, &MyForm::preCatalogLoginButton_Click);
			   // 
			   // preCatalogTitleLabel
			   // 
			   this->preCatalogTitleLabel->AutoSize = true;
			   this->preCatalogTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->preCatalogTitleLabel->Location = System::Drawing::Point(13, 9);
			   this->preCatalogTitleLabel->Name = L"preCatalogTitleLabel";
			   this->preCatalogTitleLabel->Size = System::Drawing::Size(129, 38);
			   this->preCatalogTitleLabel->TabIndex = 3;
			   this->preCatalogTitleLabel->Text = L"Catalog";
			   // 
			   // preCatalogSearchLabel
			   // 
			   this->preCatalogSearchLabel->AutoSize = true;
			   this->preCatalogSearchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->preCatalogSearchLabel->Location = System::Drawing::Point(20, 84);
			   this->preCatalogSearchLabel->Name = L"preCatalogSearchLabel";
			   this->preCatalogSearchLabel->Size = System::Drawing::Size(53, 17);
			   this->preCatalogSearchLabel->TabIndex = 2;
			   this->preCatalogSearchLabel->Text = L"Search";
			   // 
			   // preCatalogTextBox
			   // 
			   this->preCatalogTextBox->Location = System::Drawing::Point(20, 110);
			   this->preCatalogTextBox->Name = L"preCatalogTextBox";
			   this->preCatalogTextBox->Size = System::Drawing::Size(155, 22);
			   this->preCatalogTextBox->TabIndex = 1;
			   this->preCatalogTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::preCatalogTextBox_TextChanged);
			   // 
			   // preCatalogListView
			   // 
			   this->preCatalogListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->preCatalogListView->HideSelection = false;
			   this->preCatalogListView->Location = System::Drawing::Point(19, 142);
			   this->preCatalogListView->Name = L"preCatalogListView";
			   this->preCatalogListView->Size = System::Drawing::Size(923, 354);
			   this->preCatalogListView->TabIndex = 0;
			   this->preCatalogListView->UseCompatibleStateImageBehavior = false;
			   this->preCatalogListView->View = System::Windows::Forms::View::List;
			   // 
			   // catalogOrderPanel
			   // 
			   this->catalogOrderPanel->Controls->Add(this->catalogCartButton);
			   this->catalogOrderPanel->Controls->Add(this->catalogGlobalListView);
			   this->catalogOrderPanel->Controls->Add(this->catalogResearchTextBox);
			   this->catalogOrderPanel->Controls->Add(this->catalogOrderResearchLabel);
			   this->catalogOrderPanel->Controls->Add(this->catalogOrderTitleLabel);
			   this->catalogOrderPanel->Location = System::Drawing::Point(220, 80);
			   this->catalogOrderPanel->Name = L"catalogOrderPanel";
			   this->catalogOrderPanel->Size = System::Drawing::Size(968, 607);
			   this->catalogOrderPanel->TabIndex = 18;
			   // 
			   // catalogCartButton
			   // 
			   this->catalogCartButton->Location = System::Drawing::Point(829, 538);
			   this->catalogCartButton->Name = L"catalogCartButton";
			   this->catalogCartButton->Size = System::Drawing::Size(102, 35);
			   this->catalogCartButton->TabIndex = 4;
			   this->catalogCartButton->Text = L"Cart";
			   this->catalogCartButton->UseVisualStyleBackColor = true;
			   this->catalogCartButton->Click += gcnew System::EventHandler(this, &MyForm::catalogCartButton_Click);
			   // 
			   // catalogGlobalListView
			   // 
			   this->catalogGlobalListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->catalogGlobalListView->HideSelection = false;
			   this->catalogGlobalListView->Location = System::Drawing::Point(21, 142);
			   this->catalogGlobalListView->Name = L"catalogGlobalListView";
			   this->catalogGlobalListView->Size = System::Drawing::Size(921, 377);
			   this->catalogGlobalListView->TabIndex = 3;
			   this->catalogGlobalListView->UseCompatibleStateImageBehavior = false;
			   this->catalogGlobalListView->View = System::Windows::Forms::View::List;
			   this->catalogGlobalListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::catalogGlobalListView_DoubleClick);
			   // 
			   // catalogResearchTextBox
			   // 
			   this->catalogResearchTextBox->Location = System::Drawing::Point(48, 104);
			   this->catalogResearchTextBox->Name = L"catalogResearchTextBox";
			   this->catalogResearchTextBox->Size = System::Drawing::Size(273, 22);
			   this->catalogResearchTextBox->TabIndex = 2;
			   this->catalogResearchTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::catalogResearchTextBox_TextChanged);
			   // 
			   // catalogOrderResearchLabel
			   // 
			   this->catalogOrderResearchLabel->AutoSize = true;
			   this->catalogOrderResearchLabel->Location = System::Drawing::Point(73, 82);
			   this->catalogOrderResearchLabel->Name = L"catalogOrderResearchLabel";
			   this->catalogOrderResearchLabel->Size = System::Drawing::Size(69, 17);
			   this->catalogOrderResearchLabel->TabIndex = 1;
			   this->catalogOrderResearchLabel->Text = L"Research";
			   // 
			   // catalogOrderTitleLabel
			   // 
			   this->catalogOrderTitleLabel->AutoSize = true;
			   this->catalogOrderTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->catalogOrderTitleLabel->Location = System::Drawing::Point(6, 6);
			   this->catalogOrderTitleLabel->Name = L"catalogOrderTitleLabel";
			   this->catalogOrderTitleLabel->Size = System::Drawing::Size(136, 38);
			   this->catalogOrderTitleLabel->TabIndex = 0;
			   this->catalogOrderTitleLabel->Text = L"Catalog";
			   // 
			   // catalogCartPanel
			   // 
			   this->catalogCartPanel->Controls->Add(this->catalogAddressShippingLabel);
			   this->catalogCartPanel->Controls->Add(this->catalogAddressBillingLabel);
			   this->catalogCartPanel->Controls->Add(this->catalogAddressShippingListComboBox);
			   this->catalogCartPanel->Controls->Add(this->catalogAddressBillingListComboBox);
			   this->catalogCartPanel->Controls->Add(this->catalogCheckoutButton);
			   this->catalogCartPanel->Controls->Add(this->catalogBackButton);
			   this->catalogCartPanel->Controls->Add(this->catalogSelectedListView);
			   this->catalogCartPanel->Controls->Add(this->catalogCartTitleLabel);
			   this->catalogCartPanel->Location = System::Drawing::Point(220, 80);
			   this->catalogCartPanel->Name = L"catalogCartPanel";
			   this->catalogCartPanel->Size = System::Drawing::Size(968, 607);
			   this->catalogCartPanel->TabIndex = 19;
			   // 
			   // catalogAddressShippingLabel
			   // 
			   this->catalogAddressShippingLabel->AutoSize = true;
			   this->catalogAddressShippingLabel->Location = System::Drawing::Point(659, 172);
			   this->catalogAddressShippingLabel->Name = L"catalogAddressShippingLabel";
			   this->catalogAddressShippingLabel->Size = System::Drawing::Size(117, 17);
			   this->catalogAddressShippingLabel->TabIndex = 7;
			   this->catalogAddressShippingLabel->Text = L"Address shipping";
			   // 
			   // catalogAddressBillingLabel
			   // 
			   this->catalogAddressBillingLabel->AutoSize = true;
			   this->catalogAddressBillingLabel->Location = System::Drawing::Point(659, 83);
			   this->catalogAddressBillingLabel->Name = L"catalogAddressBillingLabel";
			   this->catalogAddressBillingLabel->Size = System::Drawing::Size(100, 17);
			   this->catalogAddressBillingLabel->TabIndex = 6;
			   this->catalogAddressBillingLabel->Text = L"Address billing";
			   // 
			   // catalogAddressShippingListComboBox
			   // 
			   this->catalogAddressShippingListComboBox->FormattingEnabled = true;
			   this->catalogAddressShippingListComboBox->Location = System::Drawing::Point(649, 197);
			   this->catalogAddressShippingListComboBox->Name = L"catalogAddressShippingListComboBox";
			   this->catalogAddressShippingListComboBox->Size = System::Drawing::Size(246, 24);
			   this->catalogAddressShippingListComboBox->TabIndex = 5;
			   // 
			   // catalogAddressBillingListComboBox
			   // 
			   this->catalogAddressBillingListComboBox->FormattingEnabled = true;
			   this->catalogAddressBillingListComboBox->Location = System::Drawing::Point(649, 112);
			   this->catalogAddressBillingListComboBox->Name = L"catalogAddressBillingListComboBox";
			   this->catalogAddressBillingListComboBox->Size = System::Drawing::Size(246, 24);
			   this->catalogAddressBillingListComboBox->TabIndex = 4;
			   // 
			   // catalogCheckoutButton
			   // 
			   this->catalogCheckoutButton->Location = System::Drawing::Point(763, 300);
			   this->catalogCheckoutButton->Name = L"catalogCheckoutButton";
			   this->catalogCheckoutButton->Size = System::Drawing::Size(122, 40);
			   this->catalogCheckoutButton->TabIndex = 3;
			   this->catalogCheckoutButton->Text = L"Checkout";
			   this->catalogCheckoutButton->UseVisualStyleBackColor = true;
			   this->catalogCheckoutButton->Click += gcnew System::EventHandler(this, &MyForm::catalogCheckoutButton_Click);
			   // 
			   // catalogBackButton
			   // 
			   this->catalogBackButton->Location = System::Drawing::Point(662, 300);
			   this->catalogBackButton->Name = L"catalogBackButton";
			   this->catalogBackButton->Size = System::Drawing::Size(85, 40);
			   this->catalogBackButton->TabIndex = 2;
			   this->catalogBackButton->Text = L"Back";
			   this->catalogBackButton->UseVisualStyleBackColor = true;
			   this->catalogBackButton->Click += gcnew System::EventHandler(this, &MyForm::menuCatalogButton_Click);
			   // 
			   // catalogSelectedListView
			   // 
			   this->catalogSelectedListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->catalogSelectedListView->HideSelection = false;
			   this->catalogSelectedListView->Location = System::Drawing::Point(37, 77);
			   this->catalogSelectedListView->Name = L"catalogSelectedListView";
			   this->catalogSelectedListView->Size = System::Drawing::Size(571, 496);
			   this->catalogSelectedListView->TabIndex = 1;
			   this->catalogSelectedListView->UseCompatibleStateImageBehavior = false;
			   this->catalogSelectedListView->View = System::Windows::Forms::View::List;
			   this->catalogSelectedListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::catalogSelectedListView_DoubleClick);
			   // 
			   // catalogCartTitleLabel
			   // 
			   this->catalogCartTitleLabel->AutoSize = true;
			   this->catalogCartTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->catalogCartTitleLabel->Location = System::Drawing::Point(7, 12);
			   this->catalogCartTitleLabel->Name = L"catalogCartTitleLabel";
			   this->catalogCartTitleLabel->Size = System::Drawing::Size(83, 38);
			   this->catalogCartTitleLabel->TabIndex = 0;
			   this->catalogCartTitleLabel->Text = L"Cart";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->ClientSize = System::Drawing::Size(1188, 687);
			   this->Controls->Add(this->hubPanel);
			   this->Controls->Add(this->registerPanel);
			   this->Controls->Add(this->loginPanel);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ForeColor = System::Drawing::Color::Black;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->Name = L"MyForm";
			   this->Text = L"Opo2suM";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->loginPanel->ResumeLayout(false);
			   this->loginTextPanel->ResumeLayout(false);
			   this->loginTextPanel->PerformLayout();
			   this->registerPanel->ResumeLayout(false);
			   this->registerTextPanel->ResumeLayout(false);
			   this->registerTextPanel->PerformLayout();
			   this->stockMPanel->ResumeLayout(false);
			   this->stockMPanel->PerformLayout();
			   this->addStockPanel->ResumeLayout(false);
			   this->addStockPanel->PerformLayout();
			   this->orderMPanel->ResumeLayout(false);
			   this->orderMPanel->PerformLayout();
			   this->clientMPanel->ResumeLayout(false);
			   this->clientMPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->EndInit();
			   this->menuButtonPanel->ResumeLayout(false);
			   this->menuLogoPanel->ResumeLayout(false);
			   this->titleBarPanel->ResumeLayout(false);
			   this->accountPanel->ResumeLayout(false);
			   this->accountPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accountAddressPostalNumericUpDown))->EndInit();
			   this->hubPanel->ResumeLayout(false);
			   this->statisticMPanel->ResumeLayout(false);
			   this->simulationPanel->ResumeLayout(false);
			   this->simulationPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewstat))->EndInit();
			   this->employeeAddEmployeePanel->ResumeLayout(false);
			   this->employeeAddEmployeePanel->PerformLayout();
			   this->employeeListViewPanel->ResumeLayout(false);
			   this->clientListViewPanel->ResumeLayout(false);
			   this->clientModifyPanel->ResumeLayout(false);
			   this->clientModifyPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientModifyPostalCodeNumericUpDown))->EndInit();
			   this->employeeModifyPanel->ResumeLayout(false);
			   this->employeeModifyPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeModifyPostalCodeNumericUpDown))->EndInit();
			   this->preCatalogPanel->ResumeLayout(false);
			   this->preCatalogPanel->PerformLayout();
			   this->catalogOrderPanel->ResumeLayout(false);
			   this->catalogOrderPanel->PerformLayout();
			   this->catalogCartPanel->ResumeLayout(false);
			   this->catalogCartPanel->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void resetHubButton() {
		menuAccountButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuCatalogButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuCatalogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuPersonnellManageButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuPersonnellManageButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuStatisticButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStatisticButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuStockButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStockButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuOrderButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuOrderButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuClientButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
	}
	private: System::Void hideAllPanel() {
		simulationPanel->Visible = false;
		registerPanel->Visible = false;
		loginPanel->Visible = false;
		accountPanel->Visible = false;
		clientMPanel->Visible = false;
		orderMPanel->Visible = false;
		accountPanel->Visible = false;
		clientMPanel->Visible = false;
		addStockPanel->Visible = false;
		stockMPanel->Visible = false;
		statisticMPanel->Visible = false;
		catalogCartPanel->Visible = false;
		catalogOrderPanel->Visible = false;
		preCatalogPanel->Visible = false;
		employeeListViewPanel->Visible = false;
		employeeModifyPanel->Visible = false;
		clientListViewPanel->Visible = false;
		clientModifyPanel->Visible = false;
		employeeAddEmployeePanel->Visible = false;
	}
	private: System::Void clearAddStockTextBox() {
		addStockNameTextBox->Text = "";
		addStockQuantityTextBox->Text = "";
		addStockCostTextBox->Text = "";
		addStockTVATextBox->Text = "";
		addStockMargeTextBox->Text = "";
		addStockStockTextBox->Text = "";
		addStockRestockingTextBox->Text = "";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		preCatalogTextBox_TextChanged(sender, e);
		hideAllPanel();
		preCatalogPanel->Visible = true;
		preCatalogPanel->BringToFront();
	}
	private: System::Void loginRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		registerPanel->Visible = true;
		registerPanel->BringToFront();
	}
	private: System::Void registerLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		loginPanel->Visible = true;
		loginPanel->BringToFront();
	}
	private: System::Void addOrderExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		orderMPanel->Visible = true;
	}
	private: System::Void stockMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		addStockPanel->Visible = true;
	}
	private: System::Void addStockExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		stockMPanel->Visible = true;
		clearAddStockTextBox();
	}
	private: System::Void loginUsernameTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginUsernameTextBox->Text == "Username") {
			loginUsernameTextBox->Text = "";
		}
	}
	private: System::Void loginPasswordTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginPasswordTextBox->Text == "Password") {
			loginPasswordTextBox->Text = "";
		}
	}
	private: System::Void otherclick_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginPasswordTextBox->Text == "") {
			loginPasswordTextBox->Text = "Password";
		}
		if (loginUsernameTextBox->Text == "") {
			loginUsernameTextBox->Text = "Username";
		}
	}
	private: System::Void menuAccountButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		accountPanel->Visible = true;
		clientMPanel->Visible = true; titleBarLabel->Text = "MY ACCOUNT";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
			static_cast<System::Int32>(static_cast<System::Byte>(188)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)));

	}
	private: System::Void menuClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		clientMPanel->Visible = true; titleBarLabel->Text = "CLIENT MANAGE";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
			static_cast<System::Int32>(static_cast<System::Byte>(32)));
	}
	private: System::Void enableAccountModifyButton(System::Object^ sender, System::EventArgs^ e) {
		this->accountModifyButton->Enabled = true;
	}
	private: System::Void registerValidateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		System::Data::DataSet^ alreadyExist = Adata->getRows("IF EXISTS (SELECT id_account FROM account WHERE account_name = '" + this->registerUsernameTextBox->Text + "') BEGIN SELECT 1 END ELSE BEGIN SELECT 0 END;", "Temp");
		System::Data::DataTableReader^ DataTableReaderTest = alreadyExist->CreateDataReader();
		DataTableReaderTest->Read();

		if (this->registerUsernameTextBox->Text == "" || this->registerFirstnameTextBox->Text == "" || this->registerLastnameTextBox->Text == "" || this->registerPasswordTextBox->Text == "") {
			this->registerErrorLabel->Text = "Please, fill all field.";
		}
		else if (DataTableReaderTest->GetInt32(0)) {
			this->registerErrorLabel->Text = "This username is already used.";
		}
		else if (this->registerPasswordTextBox->Text->Length < 8) {
			this->registerErrorLabel->Text = "Password too short. (8 characters)";
		}
		else {
			AccountManager^ createAccount = gcnew AccountManager();
			createAccount->insert(registerUsernameTextBox->Text, registerPasswordTextBox->Text->GetHashCode().ToString(),
				this->registerFirstnameTextBox->Text, this->registerLastnameTextBox->Text, registerDateTimePicker->Value.ToString(), 0);
			registerLoginButton_Click(sender, e);
			this->loginUsernameTextBox->Text = registerUsernameTextBox->Text;
			this->registerUsernameTextBox->Text = "";
			this->registerFirstnameTextBox->Text = "";
			this->registerLastnameTextBox->Text = "";
			this->registerPasswordTextBox->Text = "";
			this->loginErrorLabel->Text = "Account has been successfully created. Please login.";
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Green;
		}
		DataTableReaderTest->Close();
	}
	private: System::Void refreshAddressList() {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		this->accountAddressListComboBox->DataSource = listAddress->Tables[0];
		this->accountAddressDeleteButton->Enabled = (accountAddressListComboBox->Items->Count > 0);
	}
	private: System::Void loginValidateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		System::Data::DataSet^ rightLogin = Adata->getRows("IF EXISTS (SELECT id_account FROM account WHERE account_name = '" + this->loginUsernameTextBox->Text + "' AND password_account = '" + loginPasswordTextBox->Text->GetHashCode().ToString() + "') BEGIN SELECT 0 END ELSE BEGIN SELECT 1 END;", "Temp");
		System::Data::DataTableReader^ DataTableReaderTest = rightLogin->CreateDataReader();
		DataTableReaderTest->Read();

		if (this->loginUsernameTextBox->Text == "" || this->loginPasswordTextBox->Text == "") {
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->loginErrorLabel->Text = "Please, fill all field.";
		}
		else if (DataTableReaderTest->GetInt32(0)) {
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->loginErrorLabel->Text = "Wrong username or password.";
		}
		else {
			DataTableReaderTest->Close();
			AccessData^ Adata1 = gcnew AccessData;
			rightLogin = Adata1->getRows("SELECT id_account FROM account WHERE account_name = '" + this->loginUsernameTextBox->Text + "' AND password_account = '" + loginPasswordTextBox->Text->GetHashCode().ToString() + "';", "Temp");
			DataTableReaderTest = rightLogin->CreateDataReader();
			DataTableReaderTest->Read();
			connectedAccount = gcnew Account(DataTableReaderTest->GetInt32(0));
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Green;
			catalogResearchTextBox_TextChanged(sender, e);

			this->accountUsernameTextBox->Text = connectedAccount->get_account_name();
			this->accountFirstnameTextBox->Text = connectedAccount->get_firstname_account();
			this->accountLastnameTextBox->Text = connectedAccount->get_lastname_account();
			this->accountBirthdayTextBox->Text = connectedAccount->get_birthday_account()->Substring(0, 10);
			this->accountModifyButton->Enabled = false;
			this->loginErrorLabel->Text = "";
			this->accountErrorLabel->Text = "";

			refreshAddressList();
			this->accountAddressListComboBox->ValueMember = "id_address";
			this->accountAddressListComboBox->DisplayMember = "street";

			hideAllPanel();
			if (connectedAccount->get_permission_lv_account() == 0) {
				menuCatalogButton->Visible = true;
				menuOrderButton->Visible = true;
				menuAccountButton->Visible = true;
			}
			else if (connectedAccount->get_permission_lv_account() == 1)
			{
				menuCatalogButton->Visible = true;
				menuOrderButton->Visible = true;
				menuStockButton->Visible = true;
				menuClientButton->Visible = true;
				menuStatisticButton->Visible = true;
				menuAccountButton->Visible = true;
			}
			else if (connectedAccount->get_permission_lv_account() == 2)
			{
				menuCatalogButton->Visible = true;
				menuOrderButton->Visible = true;
				menuStockButton->Visible = true;
				menuClientButton->Visible = true;
				menuStatisticButton->Visible = true;
				menuPersonnellManageButton->Visible = true;
				menuAccountButton->Visible = true;
			}
		}
		DataTableReaderTest->Close();
	}
	private: System::Void accountModifyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		if (this->accountFirstnameTextBox->Text == "" || this->accountLastnameTextBox->Text == "") {
			this->accountErrorLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else if (this->accountPasswordTextBox->Text->Length < 8 && this->accountPasswordTextBox->Text->Length > 0) {
			this->accountErrorLabel->Text = "Password too short. (8 characters)";
		}
		else {
			connectedAccount->set_firstname_account(accountFirstnameTextBox->Text);
			connectedAccount->set_lastname_account(accountLastnameTextBox->Text);

			if (this->accountPasswordTextBox->Text->Length >= 8) {
				connectedAccount->set_password_account(accountPasswordTextBox->Text->GetHashCode().ToString());
			}

			AccountManager^ updateAccount = gcnew AccountManager();
			updateAccount->update(connectedAccount);

			this->accountErrorLabel->Text = "Account updated.";
			this->accountErrorLabel->ForeColor = System::Drawing::Color::Green;
			this->accountModifyButton->Enabled = false;
		}
	}
	private: System::Void accountAddressAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->accountAddressNbTextBox->Text == "" || this->accountAddressPostalNumericUpDown->Text == "" || this->accountAddressCityTextBox->Text == "") {
			this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Red;
			this->accountErrorAddAddressLabel->Text = "First three fields are required.";
		}
		else {
			addressManager->insert(accountAddressNbTextBox->Text, accountAddressPostalNumericUpDown->Text, accountAddressCityTextBox->Text, accountAddressMoreTextBox->Text, connectedAccount->get_id());
			accountAddressNbTextBox->Text = "";
			accountAddressPostalNumericUpDown->Text = "";
			accountAddressCityTextBox->Text = "";
			accountAddressMoreTextBox->Text = "";
			this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Green;
			this->accountErrorAddAddressLabel->Text = "Address added.";

			refreshAddressList();
		}
	}

	private: System::Void accountAddressDeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ alreadyExist = Adata->getRows("IF EXISTS (SELECT id_account FROM account WHERE account_name = 'trashcan') BEGIN SELECT 0 END ELSE BEGIN SELECT 1 END;", "Temp");
		System::Data::DataTableReader^ DataTableReaderTest = alreadyExist->CreateDataReader();
		DataTableReaderTest->Read();
		if (DataTableReaderTest->GetInt32(0)) {
			accountManager->insert("trashcan", "", "", "", "2000-01-01", 4);
		}
		DataTableReaderTest->Close();

		AccessData^ Adata_1 = gcnew AccessData;
		alreadyExist = Adata_1->getRows("SELECT id_account FROM account WHERE account_name = 'trashcan';", "Temp");
		DataTableReaderTest = alreadyExist->CreateDataReader();
		DataTableReaderTest->Read();

		Account^ selectedAccount = gcnew Account(DataTableReaderTest->GetInt32(0));

		Address^ selectedAddress = gcnew Address(int::Parse(this->accountAddressListComboBox->SelectedValue->ToString()));
		selectedAddress->set_account(selectedAccount);
		addressManager->update(selectedAddress);

		refreshAddressList();
	}
	private: System::Void testToSupprButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		menuCatalogButton->Visible = true;
		menuOrderButton->Visible = true;
		menuStockButton->Visible = true;
		menuClientButton->Visible = true;
		menuStatisticButton->Visible = true;
		menuPersonnellManageButton->Visible = true;
	}
	private: System::Void menuOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		orderFilterTextBox_TextChanged(sender, e);
		orderMPanel->Visible = true;
		titleBarLabel->Text = "ORDER";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
			static_cast<System::Int32>(static_cast<System::Byte>(74)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
			static_cast<System::Int32>(static_cast<System::Byte>(37)));
	}
	private: System::Void menuStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		stockMPanel->Visible = true;
		titleBarLabel->Text = "STOCK";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
			static_cast<System::Int32>(static_cast<System::Byte>(173)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
			static_cast<System::Int32>(static_cast<System::Byte>(86)));
	}
	private: System::Void menuStatisticButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		statisticMPanel->Visible = true;
		titleBarLabel->Text = "STATISTIC";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
			static_cast<System::Int32>(static_cast<System::Byte>(120)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
			static_cast<System::Int32>(static_cast<System::Byte>(60)));
	}
	private: System::Void stockMAddButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		addStockPanel->Visible = true;
	}
	private: System::Void addStockValidateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
	}
	private: System::Void loginPasswordModButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginPasswordTextBox->UseSystemPasswordChar = !loginPasswordTextBox->UseSystemPasswordChar;
	}
		   //////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   //////////////////////////////////////// BOUTON COULEUR //////////////////////////////////////////////////////
		   //////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void menuCatalogButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuCatalogButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuCatalogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(243)));
	}
	private: System::Void menuCatalogButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuClientButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuClientButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
	}
	private: System::Void menuClientButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuOrderButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuOrderButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuOrderButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
			static_cast<System::Int32>(static_cast<System::Byte>(74)));
	}
	private: System::Void menuOrderButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuStockButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuStockButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStockButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
			static_cast<System::Int32>(static_cast<System::Byte>(173)));
	}
	private: System::Void menuStockButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuStatisticButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuStatisticButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStatisticButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
			static_cast<System::Int32>(static_cast<System::Byte>(120)));
	}
	private: System::Void menuStatisticButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuAccountButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuAccountButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
			static_cast<System::Int32>(static_cast<System::Byte>(188)));
	}
	private: System::Void menuAccountButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuPersonnellManageButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuPersonnellManageButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuPersonnellManageButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
			static_cast<System::Int32>(static_cast<System::Byte>(34)));
	}
	private: System::Void menuPersonnellManageButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		titleBarLabel->Text = "PERSONNEL MANAGE";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
			static_cast<System::Int32>(static_cast<System::Byte>(34)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
			static_cast<System::Int32>(static_cast<System::Byte>(17)));
	}


		   // Catalog --------------------------------------------------------------------

	private: System::Void menuCatalogButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		catalogOrderPanel->Visible = true;
		titleBarLabel->Text = "CATALOG";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(243)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
			static_cast<System::Int32>(static_cast<System::Byte>(121)));
	}
	private: System::Void catalogCartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		AccessData^ Adata2 = gcnew AccessData;
		System::Data::DataSet^ listAddress2 = Adata2->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		this->catalogAddressBillingListComboBox->DataSource = listAddress->Tables[0];
		this->catalogAddressBillingListComboBox->ValueMember = "id_address";
		this->catalogAddressBillingListComboBox->DisplayMember = "street";
		this->catalogAddressShippingListComboBox->DataSource = listAddress2->Tables[0];
		this->catalogAddressShippingListComboBox->ValueMember = "id_address";
		this->catalogAddressShippingListComboBox->DisplayMember = "street";

		hideAllPanel();
		catalogCartPanel->Visible = true;
	}
	private: System::Void catalogGlobalListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ selectedProduct = catalogGlobalListView->SelectedItems[0]->Text;

			bool noDouble = true;
			for (int i = 0; i < catalogSelectedListView->Items->Count; i++) {
				noDouble = selectedProduct->Substring(0, selectedProduct->LastIndexOf("$") - 2) ==
					catalogSelectedListView->Items[i]->Text->Substring(catalogSelectedListView->Items[i]->Text->IndexOf("\"") + 1, catalogSelectedListView->Items[i]->Text->LastIndexOf("$") - catalogSelectedListView->Items[i]->Text->IndexOf("\"") - 4) ? false : noDouble;
			}

			if (!noDouble) { MessageBox::Show("This article is already in your cart."); return; }

			String^ countProduct = Microsoft::VisualBasic::Interaction::InputBox("How many \"" + selectedProduct->Substring(selectedProduct->IndexOf(" ") + 1, selectedProduct->LastIndexOf("$") - selectedProduct->IndexOf(" ") - 3) + "\" do you want?", "Confirm", "1", 500, 500);
			float cost = float::Parse(selectedProduct->Substring(selectedProduct->LastIndexOf("$") + 1));

			if (!(countProduct == "" || countProduct == "0")) {
				try {
					if (int::Parse(countProduct) < 1) {
						MessageBox::Show("Invalide Value");
						return;
					}
					catalogSelectedListView->Items->Add(countProduct + "x \"" + selectedProduct->Substring(0, selectedProduct->LastIndexOf("$") - 2) + "\"  $" + (cost * float::Parse(countProduct)));
				}
				catch (...) {
					MessageBox::Show("Invalide Value");
				}
			}
		}
		catch (...) {}
	}
	private: System::Void catalogResearchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listProduct = Adata->getRows("SELECT * FROM product WHERE stock_product > 0 AND enable_product = 1 AND (name_product LIKE '%" + catalogResearchTextBox->Text + "%' OR id_product LIKE '%" + catalogResearchTextBox->Text + "%');", "Temp");
		DataTable^ products = listProduct->Tables[0];

		catalogGlobalListView->Items->Clear();
		for (int i = 0; i < products->Rows->Count; i++)
		{
			DataRow^ drow = products->Rows[i];
			float cost = float::Parse(drow[3]->ToString()) + float::Parse(drow[4]->ToString());
			catalogGlobalListView->Items->Add("#" + drow[0]->ToString() + " " + drow[1]->ToString() + "  $" + (cost * (1 + float::Parse(drow[5]->ToString()))));
		}
	}
	private: System::Void catalogSelectedListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (MessageBox::Show("Do you want remove this article?", "Remove article", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				catalogSelectedListView->Items->RemoveAt(catalogSelectedListView->SelectedIndices[0]);
			}
		}
		catch (...) {}
	}
	private: System::Void catalogCheckoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->catalogAddressBillingListComboBox->SelectedIndex == -1 || this->catalogAddressShippingListComboBox->SelectedIndex == -1) {
			MessageBox::Show("No address selected.");
			return;
		}
		if (this->catalogSelectedListView->Items->Count == 0) {
			MessageBox::Show("Cart empty.");
			return;
		}

		String^ summaryOrder;
		std::vector<int> idList(catalogSelectedListView->Items->Count);
		std::vector<int> nbList(catalogSelectedListView->Items->Count);
		std::vector<float> costList(catalogSelectedListView->Items->Count);
		float tempCost = 0;
		float tempCostHT = 0;

		for (int i = 0; i < catalogSelectedListView->Items->Count; i++)
		{
			String^ tempProduct = catalogSelectedListView->Items[i]->Text;

			int tempNb = int::Parse(tempProduct->Substring(0, tempProduct->IndexOf(" ") - 1));
			int tempId = int::Parse(tempProduct->Substring(tempProduct->IndexOf("#") + 1, tempProduct->Substring(0, tempProduct->IndexOf("#") + 1)->IndexOf(" ")));

			Product^ currentProduct = gcnew Product(tempId);
			if (currentProduct->get_stock_product() - tempNb < 0) {
				if (MessageBox::Show("Due to some stock problems, you can only have " + currentProduct->get_stock_product() + "x \"" + currentProduct->get_name_product() + "\"", "Warning", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
					tempNb = currentProduct->get_stock_product();
				}
				else { return; }
			}
			nbList[i] = tempNb;
			idList[i] = tempId;

			tempCostHT += (currentProduct->get_cost_product() + currentProduct->get_marge_product()) * tempNb;
			tempCost += (currentProduct->get_cost_product() + currentProduct->get_marge_product()) * (1 + currentProduct->get_tva_product()) * tempNb;
			summaryOrder += "\n" + nbList[i] + "x   " + currentProduct->get_name_product();
		}
		summaryOrder += "\n\n      $" + tempCost;

		if (MessageBox::Show("Summary :\n" + summaryOrder, "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

			orderManager->insert(DateTime::Now.ToString(), DateTime::Now.ToString(), connectedAccount->get_id(),
				int::Parse(this->catalogAddressBillingListComboBox->SelectedValue->ToString()),
				int::Parse(this->catalogAddressShippingListComboBox->SelectedValue->ToString()));

			AccessData^ Adata = gcnew AccessData;
			System::Data::DataSet^ lastOrder = Adata->getRows("SELECT TOP (1) id_order FROM orderTab ORDER BY id_order DESC", "Temp");
			System::Data::DataTableReader^ DataTableReaderTest = lastOrder->CreateDataReader();
			DataTableReaderTest->Read();
			int id_selectedOrder = DataTableReaderTest->GetInt32(0);
			DataTableReaderTest->Close();

			for (int i = 0; i < catalogSelectedListView->Items->Count; i++)
			{
				Product^ selectedProduct = gcnew Product(idList[i]);
				selectedProduct->set_stock_product(selectedProduct->get_stock_product() - nbList[i]);
				productManager->update(selectedProduct);
				containManager->insert(id_selectedOrder, idList[i], nbList[i]);
			}

			billManager->insert(tempCost, (tempCost / tempCostHT) - 1, id_selectedOrder);

			MessageBox::Show("Order successfully created!");
			catalogResearchTextBox_TextChanged(sender, e);
			menuCatalogButton_Click(sender, e);
			catalogSelectedListView->Items->Clear();
		}
	}

		   // Statistics ---------------------------------------

	private: System::Void Panier_Poyen_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ panier = Adata->getRows("SELECT  SUM(total_bill)/count(id_bill) AS 'Average Cart' FROM bill", "temp");
		stat_label->Text = "Average cart";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = panier; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void turnover_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ turnover = Adata->getRows("select sum(c.nb_element * p.marge_product) AS Tunrover, YEAR(issue_date) AS Year, MONTH(issue_date) AS Month from orderTab o inner join contain c ON o.id_order = c.id_order inner join product p ON c.id_product = p.id_product group by YEAR(issue_date), MONTH(issue_date)", "temp");
		stat_label->Text = "Turnover per month";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = turnover; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Prod_u_restocking_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ restocking = Adata->getRows("SELECT p.id_product, p.name_product, p.stock_product, p.restocking_threshold_product FROM opo2sum.dbo.product p WHERE((([stock_product]) <= [restocking_threshold_product])); ", "temp");
		stat_label->Text = "Products under restocking threshold";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = restocking; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Amount_per_client_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ Amount_per_client = Adata->getRows("SELECT a.account_name, SUM(total_bill) AS total_per_client FROM opo2sum.dbo.bill b inner join orderTab o ON o.id_order = b.id_order inner join account a ON o.id_account = a.id_account GROUP BY a.account_name;", "temp");
		stat_label->Text = "Amount per client";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = Amount_per_client; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void top_buys_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ top10_buys = Adata->getRows("SELECT Product, sum(nb_element) Quantity FROM (SELECT id_product, CONCAT('#', id_product, ' : ', name_product) as Product FROM product) AS p inner join contain c ON c.id_product = p.id_product GROUP BY Product ORDER BY Quantity DESC;", "temp");
		stat_label->Text = "Top10 buys";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = top10_buys; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void buys_down_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ down10_buys = Adata->getRows("SELECT Product, sum(nb_element) Quantity FROM (SELECT id_product, CONCAT('#', id_product, ' : ', name_product) as Product FROM product) AS p inner join contain c ON c.id_product = p.id_product GROUP BY Product ORDER BY Quantity ASC;", "temp");
		stat_label->Text = "Bottom10 buys";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = down10_buys; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Commercial_Value_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ Commercial_Value_of_Stock = Adata->getRows(" Select sum(cost_product*stock_product) as 'Commercial Value', sum((cost_product+marge_product)*(1+tva_product)*stock_product) AS 'Buy Value', sum(marge_product*stock_product) as 'Marge Value' from  opo2sum.dbo.product", "temp");
		stat_label->Text = "Commercial Value of Stock";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = Commercial_Value_of_Stock; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Purchase_Value_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ total_cost_dataset = Adata->getRows("Select sum(cost_product*stock_product) as pp FROM product", "temp2");
		DataTable^ total_cost_datatable = total_cost_dataset->Tables[0];
		DataRow^ drow = total_cost_datatable->Rows[0];
		this->simulationEntryPriceTextBox->Text = drow[0]->ToString();
		this->simulationPanel->Visible = !this->simulationPanel->Visible;
	}

		   // Ohhrder page --------------------------------------------------------

	private: System::Void orderFilterTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		orderGlobalListView->Items->Clear();
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listOrder = connectedAccount->get_permission_lv_account() > 0 ?
			Adata->getRows("SELECT o.id_order, account_name, issue_date, total_bill FROM (SELECT issue_date, id_account, id_order FROM orderTab WHERE id_account = id_account) AS o inner join bill p ON p.id_order = o.id_order inner join account a ON o.id_account = a.id_account WHERE account_name LIKE '%" + orderFilterTextBox->Text + "%' OR issue_date LIKE '%" + orderFilterTextBox->Text + "%';", "Temp") :
			Adata->getRows("SELECT o.id_order, account_name, issue_date, total_bill FROM (SELECT issue_date, id_account, id_order FROM orderTab WHERE id_account = id_account) AS o inner join bill p ON p.id_order = o.id_order inner join account a ON o.id_account = a.id_account WHERE o.id_account = " + connectedAccount->get_id() + "AND (account_name LIKE '%" + orderFilterTextBox->Text + "%' OR issue_date LIKE '%" + orderFilterTextBox->Text + "%');", "Temp");
		DataTable^ orders = listOrder->Tables[0];

		catalogGlobalListView->Items->Clear();
		for (int i = 0; i < orders->Rows->Count; i++)
		{
			DataRow^ drow = orders->Rows[i];
			orderGlobalListView->Items->Add("(" + drow[0]->ToString() + ") " + drow[2]->ToString()->Substring(0, 10) + " : " + drow[1]->ToString() + " purchased for " + drow[3]->ToString() + "$");
		}
	}
	private: System::Void orderGlobalListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		int id_order = int::Parse(orderGlobalListView->SelectedItems[0]->Text->ToString()->Substring(1, orderGlobalListView->SelectedItems[0]->Text->ToString()->IndexOf(")") - 1));
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listElement = Adata->getRows("SELECT nb_element, name_product FROM contain c inner join product p ON p.id_product = c.id_product WHERE id_order = " + id_order, "Temp");
		DataTable^ elements = listElement->Tables[0];
		String^ messageInBox = "Summary :\n";

		for (int i = 0; i < elements->Rows->Count; i++)
		{
			DataRow^ drow = elements->Rows[i];
			messageInBox += "\n" + drow[0] + "x  " + drow[1];
		}
		MessageBox::Show(messageInBox);
	}

		   //CLIENT MANAGER PAGE -----------------------------------------------------------------------------
	private: void clientRefreshList() {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listClients = Adata->getRows("SELECT * FROM account WHERE permission_lv_account = 0", "Temp");
		DataTable^ clients = listClients->Tables[0];

		clientListView->Items->Clear();
		for (int i = 0; i < clients->Rows->Count; i++) {
			DataRow^ rowData = clients->Rows[i];
			clientListView->Items->Add(rowData[0]->ToString() + " " + rowData[1]->ToString() + " " + rowData[3]->ToString() + " " + rowData[4]->ToString() + " " + rowData[5]->ToString());
		}
	}
	private: System::Void refreshAddressPicker() {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedClient->get_id() + ";", "Temp");
		this->clientModifyAddressPickerComboBox->DataSource = listAddress->Tables[0];
		this->clientModifyAddressPickerComboBox->ValueMember = "id_address";
		this->clientModifyAddressPickerComboBox->DisplayMember = "street";
		this->clientModifyDeleteAddressButton->Enabled = (clientModifyAddressPickerComboBox->Items->Count > 0);

	}
	private: System::Void enableclientModifyApplyModifButton(System::Object^ sender, System::EventArgs^ e) {
		this->clientModifyApplyModifButton->Enabled = true;
	}
	private: System::Void clientListView_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedClient = clientListView->SelectedItems[0]->Text;

		this->clientModifyErrorBoxLabel->Text = selectedClient;
		connectedClient = gcnew Account(int::Parse(selectedClient->Substring(0, selectedClient->IndexOf(" "))));

		this->clientModifyUsernameTextBox->Text = connectedClient->get_account_name();
		this->clientModifyFirstnameTextBox->Text = connectedClient->get_firstname_account();
		this->clientModifyLastnameTextBox->Text = connectedClient->get_lastname_account();
		this->clientModifyBirthdayDateTimePicker->Text = connectedClient->get_birthday_account()->Substring(0, 10);

		clientRefreshList();
		refreshAddressPicker();
	}
	private: System::Void clientModifyApplyModifButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		if (this->clientModifyFirstnameTextBox->Text == "" || this->clientModifyLastnameTextBox->Text == "") {
			this->clientModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else if (this->clientModifyFirstnameTextBox->Text == "" || this->clientModifyLastnameTextBox->Text == "") {
			this->clientModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else {
			connectedClient->set_firstname_account(clientModifyFirstnameTextBox->Text);
			connectedClient->set_lastname_account(clientModifyLastnameTextBox->Text);

			/*if (this->accountPasswordTextBox->Text->Length >= 8) {
				connectedAccount->set_password_account(accountPasswordTextBox->Text->GetHashCode().ToString());
			}*/

			AccountManager^ updateAccount = gcnew AccountManager();
			updateAccount->update(connectedClient);

			this->clientModifyErrorBoxLabel->Text = "Account updated.";
			this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->clientModifyApplyModifButton->Enabled = false;
		}
	}
	private: System::Void clientModifyDeleteAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addressManager->deleteElement(int::Parse(this->clientModifyAddressPickerComboBox->SelectedValue->ToString()));
		refreshAddressPicker();
	}
	private: System::Void clientModifyAddAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->clientModifyAddressStreetTextBox->Text == "" || this->clientModifyPostalCodeNumericUpDown->Text == "" || this->clientModifyCityTextBox->Text == "") {
			this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			this->clientModifyErrorBoxLabel->Text = "First three fields are required.";
		}
		else {
			addressManager->insert(clientModifyAddressStreetTextBox->Text, clientModifyPostalCodeNumericUpDown->Text, clientModifyCityTextBox->Text, clientModifyMoreInfoTextBox->Text, connectedClient->get_id());
			clientModifyAddressStreetTextBox->Text = "";
			clientModifyPostalCodeNumericUpDown->Text = "";
			clientModifyCityTextBox->Text = "";
			clientModifyMoreInfoTextBox->Text = "";
			this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->clientModifyErrorBoxLabel->Text = "Address added.";

			refreshAddressPicker();
		}

	};

		   //EMPLOYEE MANAGER PAGE ----------------------------------------------------------------------------
	private: void employeeRefreshList() {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listEmployees = Adata->getRows("SELECT * FROM account WHERE permission_lv_account = 1", "Temp");
		DataTable^ employees = listEmployees->Tables[0];

		employeeListView->Items->Clear();
		for (int i = 0; i < employees->Rows->Count; i++) {
			DataRow^ rowData = employees->Rows[i];
			employeeListView->Items->Add(rowData[0]->ToString() + " " + rowData[1]->ToString() + " " + rowData[3]->ToString() + " " + rowData[4]->ToString() + " " + rowData[5]->ToString());
		}
	}
	private: System::Void employeeRefreshAddressPicker() {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedEmployee->get_id() + ";", "Temp");
		this->employeeModifyAddressPickerComboBox->DataSource = listAddress->Tables[0];
		this->employeeModifyAddressPickerComboBox->ValueMember = "id_address";
		this->employeeModifyAddressPickerComboBox->DisplayMember = "street";
		this->employeeModifyDeleteAddressButton->Enabled = (employeeModifyAddressPickerComboBox->Items->Count > 0);

	}
	private: System::Void enableEmployeeModifyButton(System::Object^ sender, System::EventArgs^ e) {
		this->employeeModifyApplyModifButton->Enabled = true;
	}
	private: System::Void employeeListView_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedEmployee = employeeListView->SelectedItems[0]->Text;
		connectedEmployee = gcnew Account(int::Parse(selectedEmployee->Substring(0, selectedEmployee->IndexOf(" "))));
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ ID = Adata->getRows("SELECT id_personnel FROM personnel WHERE id_account = " + connectedEmployee->get_id() + ";", "Temp");
		System::Data::DataTableReader^ DataTableReader = ID->CreateDataReader();
		DataTableReader->Read();

		Personnel^ hireDate = gcnew Personnel(DataTableReader->GetInt32(0));

		DataTableReader->Close();

		this->employeeModifyErrorBoxLabel->Text = selectedEmployee;

		this->employeeModifyUsernameTextBox->Text = connectedEmployee->get_account_name();
		this->employeeModifyFirstnameTextBox->Text = connectedEmployee->get_firstname_account();
		this->employeeModifyLastnameTextBox->Text = connectedEmployee->get_lastname_account();
		this->employeeModifyBirthdayDateTimePicker->Text = connectedEmployee->get_birthday_account()->Substring(0, 10);
		this->employeeModifyHireDateDateTimePicker->Text = hireDate->get_hire_date()->Substring(0, 10);

		employeeRefreshList();
		employeeRefreshAddressPicker();
	}
	private: System::Void employeeModifyApplyModifButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		if (this->employeeModifyFirstnameTextBox->Text == "" || this->employeeModifyLastnameTextBox->Text == "") {
			this->employeeModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else if (this->employeeModifyFirstnameTextBox->Text == "" || this->employeeModifyLastnameTextBox->Text == "") {
			this->employeeModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else {
			connectedEmployee->set_firstname_account(employeeModifyFirstnameTextBox->Text);
			connectedEmployee->set_lastname_account(employeeModifyLastnameTextBox->Text);

			/*if (this->accountPasswordTextBox->Text->Length >= 8) {
				connectedAccount->set_password_account(accountPasswordTextBox->Text->GetHashCode().ToString());
			}*/

			AccountManager^ updateAccount = gcnew AccountManager();
			updateAccount->update(connectedEmployee);

			this->employeeModifyErrorBoxLabel->Text = "Account updated.";
			this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->employeeModifyApplyModifButton->Enabled = false;
		}
	}
	private: System::Void employeeModifyDeleteAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addressManager->deleteElement(int::Parse(this->employeeModifyAddressPickerComboBox->SelectedValue->ToString()));
		employeeRefreshAddressPicker();
	}
	private: System::Void employeeModifyAddAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->employeeModifyAddressStreetTextBox->Text == "" || this->employeeModifyPostalCodeNumericUpDown->Text == "" || this->employeeModifyCityTextBox->Text == "") {
			this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			this->employeeModifyErrorBoxLabel->Text = "First three fields are required.";
		}
		else {
			addressManager->insert(employeeModifyAddressStreetTextBox->Text, employeeModifyPostalCodeNumericUpDown->Text, employeeModifyCityTextBox->Text, employeeModifyMoreInfoTextBox->Text, connectedEmployee->get_id());
			employeeModifyAddressStreetTextBox->Text = "";
			employeeModifyPostalCodeNumericUpDown->Text = "";
			employeeModifyCityTextBox->Text = "";
			employeeModifyMoreInfoTextBox->Text = "";
			this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->employeeModifyErrorBoxLabel->Text = "Address added.";

			employeeRefreshAddressPicker();
		}
	};

		   //ADD EMPLOYEE ---------------------------------------------------------------------------------------
	
	private: System::Void employeeAddEmployeeAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->employeeAddEmployeeFirstnameTextBox->Text == "" || this->employeeAddEmployeeLastnameTextbox->Text == "" || this->employeeAddEmployeePasswordTextBox->Text == "" || this->employeeAddEmployeeUsernameTextBox->Text == "") {
			this->employeeAddEmployeeErrorBoxLabel->Text = "Please fill in all the Fields";
			this->employeeAddEmployeeErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
		}
		else {
			accountManager->insert(employeeAddEmployeeUsernameTextBox->Text, employeeAddEmployeePasswordTextBox->Text, employeeAddEmployeeFirstnameTextBox->Text, employeeAddEmployeeLastnameTextbox->Text, employeeAddEmployeeBirthdayDateTimePicker->Value.ToString()->Substring(0, 10), employeeAddEmployeeManagerCheckBox->Checked ? 2 : 1);
			AccessData^ Adata = gcnew AccessData;
			System::Data::DataSet^ lastAccount = Adata->getRows("SELECT TOP (1) id_account FROM account ORDER BY id_account DESC", "Temp");
			System::Data::DataTableReader^ DataTableReaderTest = lastAccount->CreateDataReader();
			DataTableReaderTest->Read();
			int id_account = DataTableReaderTest->GetInt32(0);
			DataTableReaderTest->Close();

			personnelManager->insert(employeeAddEmployeeHireDateDateTimePicker->Value.ToString()->Substring(0, 10), employeeAddEmployeeManagerCheckBox->Checked ? 2 : 1, id_account);

			this->employeeAddEmployeeUsernameTextBox->Text = "";
			this->employeeAddEmployeeFirstnameTextBox->Text = "";
			this->employeeAddEmployeeLastnameTextbox->Text = "";
			this->employeeAddEmployeePasswordTextBox->Text = "";
			this->employeeAddEmployeeManagerCheckBox->Checked = false;
			this->employeeAddEmployeeErrorBoxLabel->Text = "";

			//panel2->Visible = false;
		}
	}
	private: System::Void employeeAddEmployeeCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->employeeAddEmployeeUsernameTextBox->Text = "";
		this->employeeAddEmployeeFirstnameTextBox->Text = "";
		this->employeeAddEmployeeLastnameTextbox->Text = "";
		this->employeeAddEmployeePasswordTextBox->Text = "";
		this->employeeAddEmployeeManagerCheckBox->Checked = false;
		this->employeeAddEmployeeErrorBoxLabel->Text = "";

		//panel2->Visible = false;
	}




	private: System::Void nameProjectLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		titleBarLabel->Text = "HOME";
		titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(136)));
		menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
			static_cast<System::Int32>(static_cast<System::Byte>(58)));
	}


	private: System::Void menuPersonnellManageButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}

		   // Precatalog -------------------------------------------------

	private: System::Void preCatalogLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		loginPanel->Visible = true;
		loginPanel->BringToFront();
	}
	private: System::Void preCatalogTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listProduct = Adata->getRows("SELECT * FROM product WHERE stock_product > 0 AND enable_product = 1 AND (name_product LIKE '%" + preCatalogTextBox->Text + "%' OR id_product LIKE '%" + preCatalogTextBox->Text + "%');", "Temp");
		DataTable^ products = listProduct->Tables[0];

		preCatalogListView->Items->Clear();
		for (int i = 0; i < products->Rows->Count; i++)
		{
			DataRow^ drow = products->Rows[i];
			float cost = float::Parse(drow[3]->ToString()) + float::Parse(drow[4]->ToString());
			preCatalogListView->Items->Add("#" + drow[0]->ToString() + " " + drow[1]->ToString() + "  $" + (cost * (1 + float::Parse(drow[5]->ToString()))));
		}
	}

	private: System::Void loginReturnPreCatalogButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm_Load(sender, e);
	}
	private: System::Void clientModifyBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		clientListViewPanel->Visible = true;
	}
	private: System::Void employeeModifyBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		employeeListViewPanel->Visible = true;
	}
	private: System::Void employeeAddNewEmployeeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		employeeAddEmployeePanel->Visible = true;
	}

		   // Gestion simultation ---------------------------------------

	private: System::Void simulationEntryPriceTextBox_Invalide() {
		this->simulationResultLabel->Text = "Invalide entry";
		this->simulationResultLabel->ForeColor = Color::Red;
	}
	private: System::Void simulationEntryPriceTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		float total_cost;
		float tva;
		float marge;
		float discount;
		float markdown;

		try { total_cost = float::Parse(this->simulationEntryPriceTextBox->Text); }
		catch (...) {
			try { total_cost = float::Parse(this->simulationEntryPriceTextBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")); }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { tva = float::Parse(this->simulationTVAComboBox->Text) / 100; }
		catch (...) {
			try { tva = (float::Parse(this->simulationTVAComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100); }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { marge = float::Parse(this->simulationMargeComboBox->Text) / 100; }
		catch (...) {
			try { marge = float::Parse(this->simulationMargeComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100; }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { discount = float::Parse(this->simulationDiscountComboBox->Text) / 100; }
		catch (...) {
			try { discount = float::Parse(this->simulationDiscountComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100; }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { markdown = float::Parse(this->simulationMarkdownComboBox->Text) / 100; }
		catch (...) {
			try { markdown = float::Parse(this->simulationMarkdownComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100; }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}

		this->simulationResultLabel->ForeColor = Color::Black;
		this->simulationResultLabel->Text = ((((total_cost * (1 + marge)) * (1 - discount)) * (1 - markdown)) * (1 + tva)).ToString();
	}

	private: System::Void afficherPage_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ total_cost_dataset = Adata->getRows("Select sum(cost_product*stock_product) as pp FROM product", "temp2");
		DataTable^ total_cost_datatable = total_cost_dataset->Tables[0];
		DataRow^ drow = total_cost_datatable->Rows[0];
		this->simulationEntryPriceTextBox->Text = drow[0]->ToString();
	}
	};
}