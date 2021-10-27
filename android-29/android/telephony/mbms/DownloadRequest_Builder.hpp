#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::telephony::mbms
{
	class DownloadRequest;
}
namespace android::telephony::mbms
{
	class FileServiceInfo;
}

namespace android::telephony::mbms
{
	class DownloadRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		DownloadRequest_Builder(QAndroidJniObject obj);
		// Constructors
		DownloadRequest_Builder(android::net::Uri &arg0, android::net::Uri &arg1);
		DownloadRequest_Builder() = default;
		
		// Methods
		static QAndroidJniObject fromDownloadRequest(android::telephony::mbms::DownloadRequest arg0);
		static QAndroidJniObject fromSerializedRequest(jbyteArray arg0);
		QAndroidJniObject build();
		QAndroidJniObject setAppIntent(android::content::Intent arg0);
		QAndroidJniObject setServiceInfo(android::telephony::mbms::FileServiceInfo arg0);
		QAndroidJniObject setSubscriptionId(jint arg0);
	};
} // namespace android::telephony::mbms

