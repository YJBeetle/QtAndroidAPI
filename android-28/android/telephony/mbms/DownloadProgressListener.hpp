#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class DownloadRequest;
}
namespace android::telephony::mbms
{
	class FileInfo;
}

namespace android::telephony::mbms
{
	class DownloadProgressListener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadProgressListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadProgressListener(QAndroidJniObject obj);
		
		// Constructors
		DownloadProgressListener();
		
		// Methods
		void onProgressUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2, jint arg3, jint arg4, jint arg5);
	};
} // namespace android::telephony::mbms

