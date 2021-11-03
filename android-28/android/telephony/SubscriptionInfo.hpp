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
		android::graphics::Bitmap createIconBitmap(android::content::Context arg0) const;
		jint describeContents() const;
		JString getCarrierName() const;
		JString getCountryIso() const;
		jint getDataRoaming() const;
		JString getDisplayName() const;
		JString getIccId() const;
		jint getIconTint() const;
		jint getMcc() const;
		jint getMnc() const;
		JString getNumber() const;
		jint getSimSlotIndex() const;
		jint getSubscriptionId() const;
		jboolean isEmbedded() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

