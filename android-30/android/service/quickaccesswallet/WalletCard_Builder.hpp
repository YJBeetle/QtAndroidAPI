#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::service::quickaccesswallet
{
	class WalletCard;
}

namespace android::service::quickaccesswallet
{
	class WalletCard_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WalletCard_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WalletCard_Builder(QJniObject obj);
		
		// Constructors
		WalletCard_Builder(jstring arg0, android::graphics::drawable::Icon arg1, jstring arg2, android::app::PendingIntent arg3);
		
		// Methods
		android::service::quickaccesswallet::WalletCard build();
		android::service::quickaccesswallet::WalletCard_Builder setCardIcon(android::graphics::drawable::Icon arg0);
		android::service::quickaccesswallet::WalletCard_Builder setCardLabel(jstring arg0);
	};
} // namespace android::service::quickaccesswallet

