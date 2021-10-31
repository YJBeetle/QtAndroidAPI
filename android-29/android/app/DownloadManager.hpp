#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class DownloadManager_Query;
}
namespace android::app
{
	class DownloadManager_Request;
}
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::lang
{
	class Long;
}

namespace android::app
{
	class DownloadManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DOWNLOAD_COMPLETE();
		static jstring ACTION_NOTIFICATION_CLICKED();
		static jstring ACTION_VIEW_DOWNLOADS();
		static jstring COLUMN_BYTES_DOWNLOADED_SO_FAR();
		static jstring COLUMN_DESCRIPTION();
		static jstring COLUMN_ID();
		static jstring COLUMN_LAST_MODIFIED_TIMESTAMP();
		static jstring COLUMN_LOCAL_FILENAME();
		static jstring COLUMN_LOCAL_URI();
		static jstring COLUMN_MEDIAPROVIDER_URI();
		static jstring COLUMN_MEDIA_TYPE();
		static jstring COLUMN_REASON();
		static jstring COLUMN_STATUS();
		static jstring COLUMN_TITLE();
		static jstring COLUMN_TOTAL_SIZE_BYTES();
		static jstring COLUMN_URI();
		static jint ERROR_CANNOT_RESUME();
		static jint ERROR_DEVICE_NOT_FOUND();
		static jint ERROR_FILE_ALREADY_EXISTS();
		static jint ERROR_FILE_ERROR();
		static jint ERROR_HTTP_DATA_ERROR();
		static jint ERROR_INSUFFICIENT_SPACE();
		static jint ERROR_TOO_MANY_REDIRECTS();
		static jint ERROR_UNHANDLED_HTTP_CODE();
		static jint ERROR_UNKNOWN();
		static jstring EXTRA_DOWNLOAD_ID();
		static jstring EXTRA_NOTIFICATION_CLICK_DOWNLOAD_IDS();
		static jstring INTENT_EXTRAS_SORT_BY_SIZE();
		static jint PAUSED_QUEUED_FOR_WIFI();
		static jint PAUSED_UNKNOWN();
		static jint PAUSED_WAITING_FOR_NETWORK();
		static jint PAUSED_WAITING_TO_RETRY();
		static jint STATUS_FAILED();
		static jint STATUS_PAUSED();
		static jint STATUS_PENDING();
		static jint STATUS_RUNNING();
		static jint STATUS_SUCCESSFUL();
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Long getMaxBytesOverMobile(android::content::Context arg0);
		static java::lang::Long getRecommendedMaxBytesOverMobile(android::content::Context arg0);
		jlong addCompletedDownload(jstring arg0, jstring arg1, jboolean arg2, jstring arg3, jstring arg4, jlong arg5, jboolean arg6);
		jlong addCompletedDownload(jstring arg0, jstring arg1, jboolean arg2, jstring arg3, jstring arg4, jlong arg5, jboolean arg6, android::net::Uri arg7, android::net::Uri arg8);
		jlong enqueue(android::app::DownloadManager_Request arg0);
		jstring getMimeTypeForDownloadedFile(jlong arg0);
		android::net::Uri getUriForDownloadedFile(jlong arg0);
		android::os::ParcelFileDescriptor openDownloadedFile(jlong arg0);
		__JniBaseClass query(android::app::DownloadManager_Query arg0);
		jint remove(jlongArray arg0);
	};
} // namespace android::app

