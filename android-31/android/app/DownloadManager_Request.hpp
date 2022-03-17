#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./DownloadManager_Request.def.hpp"

namespace android::app
{
	// Fields
	inline jint DownloadManager_Request::NETWORK_MOBILE()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"NETWORK_MOBILE"
		);
	}
	inline jint DownloadManager_Request::NETWORK_WIFI()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"NETWORK_WIFI"
		);
	}
	inline jint DownloadManager_Request::VISIBILITY_HIDDEN()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_HIDDEN"
		);
	}
	inline jint DownloadManager_Request::VISIBILITY_VISIBLE()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE"
		);
	}
	inline jint DownloadManager_Request::VISIBILITY_VISIBLE_NOTIFY_COMPLETED()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE_NOTIFY_COMPLETED"
		);
	}
	inline jint DownloadManager_Request::VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION"
		);
	}
	
	// Constructors
	inline DownloadManager_Request::DownloadManager_Request(android::net::Uri arg0)
		: JObject(
			"android.app.DownloadManager$Request",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::DownloadManager_Request DownloadManager_Request::addRequestHeader(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"addRequestHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void DownloadManager_Request::allowScanningByMediaScanner() const
	{
		callMethod<void>(
			"allowScanningByMediaScanner",
			"()V"
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setAllowedNetworkTypes(jint arg0) const
	{
		return callObjectMethod(
			"setAllowedNetworkTypes",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setAllowedOverMetered(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowedOverMetered",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setAllowedOverRoaming(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowedOverRoaming",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>()
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setDestinationInExternalFilesDir(android::content::Context arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"setDestinationInExternalFilesDir",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setDestinationInExternalPublicDir(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setDestinationInExternalPublicDir",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setDestinationUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setDestinationUri",
			"(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;",
			arg0.object()
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setMimeType(JString arg0) const
	{
		return callObjectMethod(
			"setMimeType",
			"(Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>()
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setNotificationVisibility(jint arg0) const
	{
		return callObjectMethod(
			"setNotificationVisibility",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setRequiresCharging(jboolean arg0) const
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setRequiresDeviceIdle(jboolean arg0) const
	{
		return callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setShowRunningNotification(jboolean arg0) const
	{
		return callObjectMethod(
			"setShowRunningNotification",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>()
		);
	}
	inline android::app::DownloadManager_Request DownloadManager_Request::setVisibleInDownloadsUi(jboolean arg0) const
	{
		return callObjectMethod(
			"setVisibleInDownloadsUi",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
