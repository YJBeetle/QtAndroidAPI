#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::telephony
{
	class SubscriptionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Bitmap createIconBitmap(android::content::Context arg0);
		jint describeContents();
		JString getCarrierName();
		JString getCountryIso();
		jint getDataRoaming();
		JString getDisplayName();
		JString getIccId();
		jint getIconTint();
		jint getMcc();
		jint getMnc();
		JString getNumber();
		jint getSimSlotIndex();
		jint getSubscriptionId();
		jboolean isEmbedded();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

