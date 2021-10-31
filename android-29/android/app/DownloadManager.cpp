#include "./DownloadManager_Query.hpp"
#include "./DownloadManager_Request.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/lang/Long.hpp"
#include "./DownloadManager.hpp"

namespace android::app
{
	// Fields
	jstring DownloadManager::ACTION_DOWNLOAD_COMPLETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"ACTION_DOWNLOAD_COMPLETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::ACTION_NOTIFICATION_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"ACTION_NOTIFICATION_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::ACTION_VIEW_DOWNLOADS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"ACTION_VIEW_DOWNLOADS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_BYTES_DOWNLOADED_SO_FAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_BYTES_DOWNLOADED_SO_FAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_LAST_MODIFIED_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_LAST_MODIFIED_TIMESTAMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_LOCAL_FILENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_LOCAL_FILENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_LOCAL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_LOCAL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_MEDIAPROVIDER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_MEDIAPROVIDER_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_MEDIA_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_MEDIA_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_REASON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_TOTAL_SIZE_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_TOTAL_SIZE_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::COLUMN_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DownloadManager::ERROR_CANNOT_RESUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_CANNOT_RESUME"
		);
	}
	jint DownloadManager::ERROR_DEVICE_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_DEVICE_NOT_FOUND"
		);
	}
	jint DownloadManager::ERROR_FILE_ALREADY_EXISTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_FILE_ALREADY_EXISTS"
		);
	}
	jint DownloadManager::ERROR_FILE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_FILE_ERROR"
		);
	}
	jint DownloadManager::ERROR_HTTP_DATA_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_HTTP_DATA_ERROR"
		);
	}
	jint DownloadManager::ERROR_INSUFFICIENT_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_INSUFFICIENT_SPACE"
		);
	}
	jint DownloadManager::ERROR_TOO_MANY_REDIRECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_TOO_MANY_REDIRECTS"
		);
	}
	jint DownloadManager::ERROR_UNHANDLED_HTTP_CODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_UNHANDLED_HTTP_CODE"
		);
	}
	jint DownloadManager::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_UNKNOWN"
		);
	}
	jstring DownloadManager::EXTRA_DOWNLOAD_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"EXTRA_DOWNLOAD_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::EXTRA_NOTIFICATION_CLICK_DOWNLOAD_IDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"EXTRA_NOTIFICATION_CLICK_DOWNLOAD_IDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadManager::INTENT_EXTRAS_SORT_BY_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DownloadManager",
			"INTENT_EXTRAS_SORT_BY_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DownloadManager::PAUSED_QUEUED_FOR_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_QUEUED_FOR_WIFI"
		);
	}
	jint DownloadManager::PAUSED_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_UNKNOWN"
		);
	}
	jint DownloadManager::PAUSED_WAITING_FOR_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_WAITING_FOR_NETWORK"
		);
	}
	jint DownloadManager::PAUSED_WAITING_TO_RETRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_WAITING_TO_RETRY"
		);
	}
	jint DownloadManager::STATUS_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_FAILED"
		);
	}
	jint DownloadManager::STATUS_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_PAUSED"
		);
	}
	jint DownloadManager::STATUS_PENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_PENDING"
		);
	}
	jint DownloadManager::STATUS_RUNNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_RUNNING"
		);
	}
	jint DownloadManager::STATUS_SUCCESSFUL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_SUCCESSFUL"
		);
	}
	
	// QAndroidJniObject forward
	DownloadManager::DownloadManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DownloadManager::getMaxBytesOverMobile(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.DownloadManager",
			"getMaxBytesOverMobile",
			"(Landroid/content/Context;)Ljava/lang/Long;",
			arg0.object()
		);
	}
	QAndroidJniObject DownloadManager::getRecommendedMaxBytesOverMobile(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.DownloadManager",
			"getRecommendedMaxBytesOverMobile",
			"(Landroid/content/Context;)Ljava/lang/Long;",
			arg0.object()
		);
	}
	jlong DownloadManager::addCompletedDownload(jstring arg0, jstring arg1, jboolean arg2, jstring arg3, jstring arg4, jlong arg5, jboolean arg6)
	{
		return callMethod<jlong>(
			"addCompletedDownload",
			"(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;JZ)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jlong DownloadManager::addCompletedDownload(jstring arg0, jstring arg1, jboolean arg2, jstring arg3, jstring arg4, jlong arg5, jboolean arg6, android::net::Uri arg7, android::net::Uri arg8)
	{
		return callMethod<jlong>(
			"addCompletedDownload",
			"(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;JZLandroid/net/Uri;Landroid/net/Uri;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object(),
			arg8.object()
		);
	}
	jlong DownloadManager::enqueue(android::app::DownloadManager_Request arg0)
	{
		return callMethod<jlong>(
			"enqueue",
			"(Landroid/app/DownloadManager$Request;)J",
			arg0.object()
		);
	}
	jstring DownloadManager::getMimeTypeForDownloadedFile(jlong arg0)
	{
		return callObjectMethod(
			"getMimeTypeForDownloadedFile",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject DownloadManager::getUriForDownloadedFile(jlong arg0)
	{
		return callObjectMethod(
			"getUriForDownloadedFile",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager::openDownloadedFile(jlong arg0)
	{
		return callObjectMethod(
			"openDownloadedFile",
			"(J)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager::query(android::app::DownloadManager_Query arg0)
	{
		return callObjectMethod(
			"query",
			"(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
	jint DownloadManager::remove(jlongArray arg0)
	{
		return callMethod<jint>(
			"remove",
			"([J)I",
			arg0
		);
	}
} // namespace android::app
