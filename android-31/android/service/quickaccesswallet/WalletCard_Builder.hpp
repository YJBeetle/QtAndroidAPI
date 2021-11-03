#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JString;

namespace android::service::quickaccesswallet
{
	class WalletCard_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WalletCard_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WalletCard_Builder(QAndroidJniObject obj);
		
		// Constructors
		WalletCard_Builder(JString arg0, android::graphics::drawable::Icon arg1, JString arg2, android::app::PendingIntent arg3);
		
		// Methods
		android::service::quickaccesswallet::WalletCard build() const;
		android::service::quickaccesswallet::WalletCard_Builder setCardIcon(android::graphics::drawable::Icon arg0) const;
		android::service::quickaccesswallet::WalletCard_Builder setCardLabel(JString arg0) const;
	};
} // namespace android::service::quickaccesswallet

