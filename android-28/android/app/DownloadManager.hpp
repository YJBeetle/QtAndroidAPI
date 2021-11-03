#pragma once

#include "../../JObject.hpp"

class JLongArray;
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
class JString;

namespace android::app
{
	class DownloadManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_DOWNLOAD_COMPLETE();
		static JString ACTION_NOTIFICATION_CLICKED();
		static JString ACTION_VIEW_DOWNLOADS();
		static JString COLUMN_BYTES_DOWNLOADED_SO_FAR();
		static JString COLUMN_DESCRIPTION();
		static JString COLUMN_ID();
		static JString COLUMN_LAST_MODIFIED_TIMESTAMP();
		static JString COLUMN_LOCAL_FILENAME();
		static JString COLUMN_LOCAL_URI();
		static JString COLUMN_MEDIAPROVIDER_URI();
		static JString COLUMN_MEDIA_TYPE();
		static JString COLUMN_REASON();
		static JString COLUMN_STATUS();
		static JString COLUMN_TITLE();
		static JString COLUMN_TOTAL_SIZE_BYTES();
		static JString COLUMN_URI();
		static jint ERROR_CANNOT_RESUME();
		static jint ERROR_DEVICE_NOT_FOUND();
		static jint ERROR_FILE_ALREADY_EXISTS();
		static jint ERROR_FILE_ERROR();
		static jint ERROR_HTTP_DATA_ERROR();
		static jint ERROR_INSUFFICIENT_SPACE();
		static jint ERROR_TOO_MANY_REDIRECTS();
		static jint ERROR_UNHANDLED_HTTP_CODE();
		static jint ERROR_UNKNOWN();
		static JString EXTRA_DOWNLOAD_ID();
		static JString EXTRA_NOTIFICATION_CLICK_DOWNLOAD_IDS();
		static JString INTENT_EXTRAS_SORT_BY_SIZE();
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
		template<typename ...Ts> explicit DownloadManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Long getMaxBytesOverMobile(android::content::Context arg0);
		static java::lang::Long getRecommendedMaxBytesOverMobile(android::content::Context arg0);
		jlong addCompletedDownload(JString arg0, JString arg1, jboolean arg2, JString arg3, JString arg4, jlong arg5, jboolean arg6);
		jlong addCompletedDownload(JString arg0, JString arg1, jboolean arg2, JString arg3, JString arg4, jlong arg5, jboolean arg6, android::net::Uri arg7, android::net::Uri arg8);
		jlong enqueue(android::app::DownloadManager_Request arg0);
		JString getMimeTypeForDownloadedFile(jlong arg0);
		android::net::Uri getUriForDownloadedFile(jlong arg0);
		android::os::ParcelFileDescriptor openDownloadedFile(jlong arg0);
		JObject query(android::app::DownloadManager_Query arg0);
		jint remove(JLongArray arg0);
	};
} // namespace android::app

