#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telephony
{
	class SubscriptionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject createIconBitmap(android::content::Context arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCardId();
		jint getCarrierId();
		jstring getCarrierName();
		jstring getCountryIso();
		jint getDataRoaming();
		jstring getDisplayName();
		QAndroidJniObject getGroupUuid();
		jstring getIccId();
		jint getIconTint();
		jint getMcc();
		jstring getMccString();
		jint getMnc();
		jstring getMncString();
		jstring getNumber();
		jint getSimSlotIndex();
		jint getSubscriptionId();
		jint getSubscriptionType();
		jint hashCode();
		jboolean isEmbedded();
		jboolean isOpportunistic();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

