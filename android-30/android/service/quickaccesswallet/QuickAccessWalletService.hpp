#pragma once

#include "../../content/Intent.def.hpp"
#include "./GetWalletCardsRequest.def.hpp"
#include "./SelectWalletCardRequest.def.hpp"
#include "./WalletServiceEvent.def.hpp"
#include "../../../JString.hpp"
#include "./QuickAccessWalletService.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline JString QuickAccessWalletService::ACTION_VIEW_WALLET()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"ACTION_VIEW_WALLET",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickAccessWalletService::ACTION_VIEW_WALLET_SETTINGS()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"ACTION_VIEW_WALLET_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickAccessWalletService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickAccessWalletService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline QuickAccessWalletService::QuickAccessWalletService()
		: android::app::Service(
			"android.service.quickaccesswallet.QuickAccessWalletService",
			"()V"
		) {}
	
	// Methods
	inline JObject QuickAccessWalletService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void QuickAccessWalletService::onWalletCardSelected(android::service::quickaccesswallet::SelectWalletCardRequest arg0) const
	{
		callMethod<void>(
			"onWalletCardSelected",
			"(Landroid/service/quickaccesswallet/SelectWalletCardRequest;)V",
			arg0.object()
		);
	}
	inline void QuickAccessWalletService::onWalletCardsRequested(android::service::quickaccesswallet::GetWalletCardsRequest arg0, JObject arg1) const
	{
		callMethod<void>(
			"onWalletCardsRequested",
			"(Landroid/service/quickaccesswallet/GetWalletCardsRequest;Landroid/service/quickaccesswallet/GetWalletCardsCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void QuickAccessWalletService::onWalletDismissed() const
	{
		callMethod<void>(
			"onWalletDismissed",
			"()V"
		);
	}
	inline void QuickAccessWalletService::sendWalletServiceEvent(android::service::quickaccesswallet::WalletServiceEvent arg0) const
	{
		callMethod<void>(
			"sendWalletServiceEvent",
			"(Landroid/service/quickaccesswallet/WalletServiceEvent;)V",
			arg0.object()
		);
	}
} // namespace android::service::quickaccesswallet

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

