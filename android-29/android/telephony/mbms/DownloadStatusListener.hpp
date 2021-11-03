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
	class DownloadStatusListener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadStatusListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadStatusListener(QJniObject obj);
		
		// Constructors
		DownloadStatusListener();
		
		// Methods
		void onStatusUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2);
	};
} // namespace android::telephony::mbms

