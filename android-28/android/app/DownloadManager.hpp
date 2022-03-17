#pragma once

#include "../../JLongArray.hpp"
#include "./DownloadManager_Query.def.hpp"
#include "./DownloadManager_Request.def.hpp"
#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../java/lang/Long.def.hpp"
#include "../../JString.hpp"
#include "./DownloadManager.def.hpp"

namespace android::app
{
	// Fields
	inline JString DownloadManager::ACTION_DOWNLOAD_COMPLETE()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"ACTION_DOWNLOAD_COMPLETE",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::ACTION_NOTIFICATION_CLICKED()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"ACTION_NOTIFICATION_CLICKED",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::ACTION_VIEW_DOWNLOADS()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"ACTION_VIEW_DOWNLOADS",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_BYTES_DOWNLOADED_SO_FAR()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_BYTES_DOWNLOADED_SO_FAR",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_ID()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_LAST_MODIFIED_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_LAST_MODIFIED_TIMESTAMP",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_LOCAL_FILENAME()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_LOCAL_FILENAME",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_LOCAL_URI()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_LOCAL_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_MEDIAPROVIDER_URI()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_MEDIAPROVIDER_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_MEDIA_TYPE()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_MEDIA_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_REASON()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_REASON",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_STATUS()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_STATUS",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_TITLE()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_TOTAL_SIZE_BYTES()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_TOTAL_SIZE_BYTES",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::COLUMN_URI()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"COLUMN_URI",
			"Ljava/lang/String;"
		);
	}
	inline jint DownloadManager::ERROR_CANNOT_RESUME()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_CANNOT_RESUME"
		);
	}
	inline jint DownloadManager::ERROR_DEVICE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_DEVICE_NOT_FOUND"
		);
	}
	inline jint DownloadManager::ERROR_FILE_ALREADY_EXISTS()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_FILE_ALREADY_EXISTS"
		);
	}
	inline jint DownloadManager::ERROR_FILE_ERROR()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_FILE_ERROR"
		);
	}
	inline jint DownloadManager::ERROR_HTTP_DATA_ERROR()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_HTTP_DATA_ERROR"
		);
	}
	inline jint DownloadManager::ERROR_INSUFFICIENT_SPACE()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_INSUFFICIENT_SPACE"
		);
	}
	inline jint DownloadManager::ERROR_TOO_MANY_REDIRECTS()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_TOO_MANY_REDIRECTS"
		);
	}
	inline jint DownloadManager::ERROR_UNHANDLED_HTTP_CODE()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_UNHANDLED_HTTP_CODE"
		);
	}
	inline jint DownloadManager::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"ERROR_UNKNOWN"
		);
	}
	inline JString DownloadManager::EXTRA_DOWNLOAD_ID()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"EXTRA_DOWNLOAD_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::EXTRA_NOTIFICATION_CLICK_DOWNLOAD_IDS()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"EXTRA_NOTIFICATION_CLICK_DOWNLOAD_IDS",
			"Ljava/lang/String;"
		);
	}
	inline JString DownloadManager::INTENT_EXTRAS_SORT_BY_SIZE()
	{
		return getStaticObjectField(
			"android.app.DownloadManager",
			"INTENT_EXTRAS_SORT_BY_SIZE",
			"Ljava/lang/String;"
		);
	}
	inline jint DownloadManager::PAUSED_QUEUED_FOR_WIFI()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_QUEUED_FOR_WIFI"
		);
	}
	inline jint DownloadManager::PAUSED_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_UNKNOWN"
		);
	}
	inline jint DownloadManager::PAUSED_WAITING_FOR_NETWORK()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_WAITING_FOR_NETWORK"
		);
	}
	inline jint DownloadManager::PAUSED_WAITING_TO_RETRY()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"PAUSED_WAITING_TO_RETRY"
		);
	}
	inline jint DownloadManager::STATUS_FAILED()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_FAILED"
		);
	}
	inline jint DownloadManager::STATUS_PAUSED()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_PAUSED"
		);
	}
	inline jint DownloadManager::STATUS_PENDING()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_PENDING"
		);
	}
	inline jint DownloadManager::STATUS_RUNNING()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_RUNNING"
		);
	}
	inline jint DownloadManager::STATUS_SUCCESSFUL()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager",
			"STATUS_SUCCESSFUL"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::Long DownloadManager::getMaxBytesOverMobile(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.DownloadManager",
			"getMaxBytesOverMobile",
			"(Landroid/content/Context;)Ljava/lang/Long;",
			arg0.object()
		);
	}
	inline java::lang::Long DownloadManager::getRecommendedMaxBytesOverMobile(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.DownloadManager",
			"getRecommendedMaxBytesOverMobile",
			"(Landroid/content/Context;)Ljava/lang/Long;",
			arg0.object()
		);
	}
	inline jlong DownloadManager::addCompletedDownload(JString arg0, JString arg1, jboolean arg2, JString arg3, JString arg4, jlong arg5, jboolean arg6) const
	{
		return callMethod<jlong>(
			"addCompletedDownload",
			"(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;JZ)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5,
			arg6
		);
	}
	inline jlong DownloadManager::addCompletedDownload(JString arg0, JString arg1, jboolean arg2, JString arg3, JString arg4, jlong arg5, jboolean arg6, android::net::Uri arg7, android::net::Uri arg8) const
	{
		return callMethod<jlong>(
			"addCompletedDownload",
			"(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;JZLandroid/net/Uri;Landroid/net/Uri;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5,
			arg6,
			arg7.object(),
			arg8.object()
		);
	}
	inline jlong DownloadManager::enqueue(android::app::DownloadManager_Request arg0) const
	{
		return callMethod<jlong>(
			"enqueue",
			"(Landroid/app/DownloadManager$Request;)J",
			arg0.object()
		);
	}
	inline JString DownloadManager::getMimeTypeForDownloadedFile(jlong arg0) const
	{
		return callObjectMethod(
			"getMimeTypeForDownloadedFile",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline android::net::Uri DownloadManager::getUriForDownloadedFile(jlong arg0) const
	{
		return callObjectMethod(
			"getUriForDownloadedFile",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	inline android::os::ParcelFileDescriptor DownloadManager::openDownloadedFile(jlong arg0) const
	{
		return callObjectMethod(
			"openDownloadedFile",
			"(J)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	inline JObject DownloadManager::query(android::app::DownloadManager_Query arg0) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
	inline jint DownloadManager::remove(JLongArray arg0) const
	{
		return callMethod<jint>(
			"remove",
			"([J)I",
			arg0.object<jlongArray>()
		);
	}
} // namespace android::app

// Base class headers

