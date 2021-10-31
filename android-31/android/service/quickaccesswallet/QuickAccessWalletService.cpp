#include "../../content/Intent.hpp"
#include "./GetWalletCardsRequest.hpp"
#include "./SelectWalletCardRequest.hpp"
#include "./WalletServiceEvent.hpp"
#include "./QuickAccessWalletService.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	jstring QuickAccessWalletService::ACTION_VIEW_WALLET()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"ACTION_VIEW_WALLET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickAccessWalletService::ACTION_VIEW_WALLET_SETTINGS()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"ACTION_VIEW_WALLET_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickAccessWalletService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickAccessWalletService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	QuickAccessWalletService::QuickAccessWalletService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	QuickAccessWalletService::QuickAccessWalletService()
		: android::app::Service(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass QuickAccessWalletService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void QuickAccessWalletService::onWalletCardSelected(android::service::quickaccesswallet::SelectWalletCardRequest arg0)
	{
		callMethod<void>(
			"onWalletCardSelected",
			"(Landroid/service/quickaccesswallet/SelectWalletCardRequest;)V",
			arg0.object()
		);
	}
	void QuickAccessWalletService::onWalletCardsRequested(android::service::quickaccesswallet::GetWalletCardsRequest arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onWalletCardsRequested",
			"(Landroid/service/quickaccesswallet/GetWalletCardsRequest;Landroid/service/quickaccesswallet/GetWalletCardsCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void QuickAccessWalletService::onWalletDismissed()
	{
		callMethod<void>(
			"onWalletDismissed",
			"()V"
		);
	}
	void QuickAccessWalletService::sendWalletServiceEvent(android::service::quickaccesswallet::WalletServiceEvent arg0)
	{
		callMethod<void>(
			"sendWalletServiceEvent",
			"(Landroid/service/quickaccesswallet/WalletServiceEvent;)V",
			arg0.object()
		);
	}
} // namespace android::service::quickaccesswallet

