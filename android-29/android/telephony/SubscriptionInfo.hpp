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
namespace android::os
{
	class ParcelUuid;
}
class JString;
class JObject;
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
		jboolean equals(JObject arg0);
		jint getCardId();
		jint getCarrierId();
		JString getCarrierName();
		JString getCountryIso();
		jint getDataRoaming();
		JString getDisplayName();
		android::os::ParcelUuid getGroupUuid();
		JString getIccId();
		jint getIconTint();
		jint getMcc();
		JString getMccString();
		jint getMnc();
		JString getMncString();
		JString getNumber();
		jint getSimSlotIndex();
		jint getSubscriptionId();
		jint getSubscriptionType();
		jint hashCode();
		jboolean isEmbedded();
		jboolean isOpportunistic();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

