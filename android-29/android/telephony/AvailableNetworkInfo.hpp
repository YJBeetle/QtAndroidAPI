#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class AvailableNetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MED();
		
		AvailableNetworkInfo(QAndroidJniObject obj);
		// Constructors
		AvailableNetworkInfo(jint &arg0, jint &arg1, __JniBaseClass &arg2, __JniBaseClass &arg3);
		AvailableNetworkInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getBands();
		QAndroidJniObject getMccMncs();
		jint getPriority();
		jint getSubId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

