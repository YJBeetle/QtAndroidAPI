#pragma once

#include "../../app/Service.def.hpp"

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
class JString;

namespace android::service::quickaccesswallet
{
	class QuickAccessWalletService : public android::app::Service
	{
	public:
		// Fields
		static JString ACTION_VIEW_WALLET();
		static JString ACTION_VIEW_WALLET_SETTINGS();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QuickAccessWalletService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		QuickAccessWalletService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		QuickAccessWalletService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onWalletCardSelected(android::service::quickaccesswallet::SelectWalletCardRequest arg0) const;
		void onWalletCardsRequested(android::service::quickaccesswallet::GetWalletCardsRequest arg0, JObject arg1) const;
		void onWalletDismissed() const;
		void sendWalletServiceEvent(android::service::quickaccesswallet::WalletServiceEvent arg0) const;
	};
} // namespace android::service::quickaccesswallet

