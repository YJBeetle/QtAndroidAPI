#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::telephony::mbms
{
	class DownloadRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		DownloadRequest(QAndroidJniObject obj);
		// Constructors
		DownloadRequest() = default;
		
		// Methods
		static jint getMaxAppIntentSize();
		static jint getMaxDestinationUriSize();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDestinationUri();
		jstring getFileServiceId();
		QAndroidJniObject getSourceUri();
		jint getSubscriptionId();
		jint hashCode();
		jbyteArray toByteArray();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

