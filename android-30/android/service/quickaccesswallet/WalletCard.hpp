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
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::service::quickaccesswallet
{
	class WalletCard : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WalletCard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WalletCard(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::graphics::drawable::Icon getCardIcon();
		JString getCardId();
		android::graphics::drawable::Icon getCardImage();
		JString getCardLabel();
		JString getContentDescription();
		android::app::PendingIntent getPendingIntent();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

