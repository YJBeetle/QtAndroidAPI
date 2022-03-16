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
		WalletCard(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::graphics::drawable::Icon getCardIcon() const;
		JString getCardId() const;
		android::graphics::drawable::Icon getCardImage() const;
		JString getCardLabel() const;
		JString getContentDescription() const;
		android::app::PendingIntent getPendingIntent() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quickaccesswallet

