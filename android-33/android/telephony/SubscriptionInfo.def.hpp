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
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::Bitmap createIconBitmap(android::content::Context arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCardId() const;
		jint getCarrierId() const;
		JString getCarrierName() const;
		JString getCountryIso() const;
		jint getDataRoaming() const;
		JString getDisplayName() const;
		android::os::ParcelUuid getGroupUuid() const;
		JString getIccId() const;
		jint getIconTint() const;
		jint getMcc() const;
		JString getMccString() const;
		jint getMnc() const;
		JString getMncString() const;
		JString getNumber() const;
		jint getPortIndex() const;
		jint getSimSlotIndex() const;
		jint getSubscriptionId() const;
		jint getSubscriptionType() const;
		jint getUsageSetting() const;
		jint hashCode() const;
		jboolean isEmbedded() const;
		jboolean isOpportunistic() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

