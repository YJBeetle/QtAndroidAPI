#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ServiceInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::mbms
{
	class FileServiceInfo : public android::telephony::mbms::ServiceInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		FileServiceInfo(QAndroidJniObject obj);
		// Constructors
		FileServiceInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFiles();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

