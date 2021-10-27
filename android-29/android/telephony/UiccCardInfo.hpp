#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class UiccCardInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UiccCardInfo(QAndroidJniObject obj);
		// Constructors
		UiccCardInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCardId();
		jstring getEid();
		jstring getIccId();
		jint getSlotIndex();
		jint hashCode();
		jboolean isEuicc();
		jboolean isRemovable();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

