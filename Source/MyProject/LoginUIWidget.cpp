#include "LoginUIWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void ULoginUIWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (LoginButton)
        LoginButton->OnClicked.AddDynamic(this, &ULoginUIWidget::OnLoginClicked);

    if (LogoutButton)
        LogoutButton->OnClicked.AddDynamic(this, &ULoginUIWidget::OnLogoutClicked);
}

void ULoginUIWidget::OnLoginClicked()
{
    UE_LOG(LogTemp, Log, TEXT("Login button pressed!"));
    // Add your login logic here
}

void ULoginUIWidget::OnLogoutClicked()
{
    UE_LOG(LogTemp, Log, TEXT("Logout button pressed!"));
    // Add your logout logic here
}
