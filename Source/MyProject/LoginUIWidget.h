#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoginUIWidget.generated.h"

UCLASS()
class MYPROJECT_API ULoginUIWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    
    UFUNCTION()
    void OnLoginClicked();

    UFUNCTION()
    void OnLogoutClicked();

protected:
    UPROPERTY(meta = (BindWidget))
    class UButton* LoginButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* LogoutButton;
    
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* StatusText;
};
