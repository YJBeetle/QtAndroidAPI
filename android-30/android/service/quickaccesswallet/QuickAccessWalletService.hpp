#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::service::quickaccesswallet
{
	class GetWalletCardsRequest;
}
namespace android::service::quickaccesswallet
{
	class SelectWalletCardRequest;
}
namespace android::service::quickaccesswallet
{
	class WalletServiceEvent;
}

namespace android::service::quickaccesswallet
{
	class QuickAccessWalletService : public android::app::Service
	{
	public:
		// Fields
		static jstring ACTION_VIEW_WALLET();
		static jstring ACTION_VIEW_WALLET_SETTINGS();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QuickAccessWalletService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		QuickAccessWalletService(QAndroidJniObject obj);
		
		// Constructors
		QuickAccessWalletService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onWalletCardSelected(android::service::quickaccesswallet::SelectWalletCardRequest arg0);
		void onWalletCardsRequested(android::service::quickaccesswallet::GetWalletCardsRequest arg0, __JniBaseClass arg1);
		void onWalletDismissed();
		void sendWalletServiceEvent(android::service::quickaccesswallet::WalletServiceEvent arg0);
	};
} // namespace android::service::quickaccesswallet

