#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::telephony::mbms
{
	class DownloadProgressListener;
}
namespace android::telephony::mbms
{
	class DownloadRequest;
}
namespace android::telephony::mbms
{
	class DownloadStatusListener;
}
namespace android::telephony::mbms
{
	class FileInfo;
}
namespace android::telephony::mbms
{
	class MbmsDownloadSessionCallback;
}
namespace java::io
{
	class File;
}
class JString;

namespace android::telephony
{
	class MbmsDownloadSession : public JObject
	{
	public:
		// Fields
		static JString DEFAULT_TOP_LEVEL_TEMP_DIRECTORY();
		static JString EXTRA_MBMS_COMPLETED_FILE_URI();
		static JString EXTRA_MBMS_DOWNLOAD_REQUEST();
		static JString EXTRA_MBMS_DOWNLOAD_RESULT();
		static JString EXTRA_MBMS_FILE_INFO();
		static jint RESULT_CANCELLED();
		static jint RESULT_DOWNLOAD_FAILURE();
		static jint RESULT_EXPIRED();
		static jint RESULT_FILE_ROOT_UNREACHABLE();
		static jint RESULT_IO_ERROR();
		static jint RESULT_OUT_OF_STORAGE();
		static jint RESULT_SERVICE_ID_NOT_DEFINED();
		static jint RESULT_SUCCESSFUL();
		static jint STATUS_ACTIVELY_DOWNLOADING();
		static jint STATUS_PENDING_DOWNLOAD();
		static jint STATUS_PENDING_DOWNLOAD_WINDOW();
		static jint STATUS_PENDING_REPAIR();
		static jint STATUS_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsDownloadSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsDownloadSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::telephony::MbmsDownloadSession create(android::content::Context arg0, JObject arg1, android::telephony::mbms::MbmsDownloadSessionCallback arg2);
		static android::telephony::MbmsDownloadSession create(android::content::Context arg0, JObject arg1, jint arg2, android::telephony::mbms::MbmsDownloadSessionCallback arg3);
		static jint getMaximumServiceAnnouncementSize();
		void addProgressListener(android::telephony::mbms::DownloadRequest arg0, JObject arg1, android::telephony::mbms::DownloadProgressListener arg2) const;
		void addServiceAnnouncement(JByteArray arg0) const;
		void addStatusListener(android::telephony::mbms::DownloadRequest arg0, JObject arg1, android::telephony::mbms::DownloadStatusListener arg2) const;
		void cancelDownload(android::telephony::mbms::DownloadRequest arg0) const;
		void close() const;
		void download(android::telephony::mbms::DownloadRequest arg0) const;
		java::io::File getTempFileRootDirectory() const;
		JObject listPendingDownloads() const;
		void removeProgressListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadProgressListener arg1) const;
		void removeStatusListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadStatusListener arg1) const;
		void requestDownloadState(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1) const;
		void requestUpdateFileServices(JObject arg0) const;
		void resetDownloadKnowledge(android::telephony::mbms::DownloadRequest arg0) const;
		void setTempFileRootDirectory(java::io::File arg0) const;
	};
} // namespace android::telephony

