#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telephony
{
	class MbmsDownloadSession : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DEFAULT_TOP_LEVEL_TEMP_DIRECTORY();
		static jstring EXTRA_MBMS_COMPLETED_FILE_URI();
		static jstring EXTRA_MBMS_DOWNLOAD_REQUEST();
		static jstring EXTRA_MBMS_DOWNLOAD_RESULT();
		static jstring EXTRA_MBMS_FILE_INFO();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsDownloadSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsDownloadSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::MbmsDownloadSession create(android::content::Context arg0, __JniBaseClass arg1, android::telephony::mbms::MbmsDownloadSessionCallback arg2);
		static android::telephony::MbmsDownloadSession create(android::content::Context arg0, __JniBaseClass arg1, jint arg2, android::telephony::mbms::MbmsDownloadSessionCallback arg3);
		void addProgressListener(android::telephony::mbms::DownloadRequest arg0, __JniBaseClass arg1, android::telephony::mbms::DownloadProgressListener arg2);
		void addStatusListener(android::telephony::mbms::DownloadRequest arg0, __JniBaseClass arg1, android::telephony::mbms::DownloadStatusListener arg2);
		void cancelDownload(android::telephony::mbms::DownloadRequest arg0);
		void close();
		void download(android::telephony::mbms::DownloadRequest arg0);
		java::io::File getTempFileRootDirectory();
		__JniBaseClass listPendingDownloads();
		void removeProgressListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadProgressListener arg1);
		void removeStatusListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadStatusListener arg1);
		void requestDownloadState(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1);
		void requestUpdateFileServices(__JniBaseClass arg0);
		void resetDownloadKnowledge(android::telephony::mbms::DownloadRequest arg0);
		void setTempFileRootDirectory(java::io::File arg0);
	};
} // namespace android::telephony

