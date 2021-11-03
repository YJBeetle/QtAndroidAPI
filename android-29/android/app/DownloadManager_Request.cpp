#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./DownloadManager_Request.hpp"

namespace android::app
{
	// Fields
	jint DownloadManager_Request::NETWORK_MOBILE()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"NETWORK_MOBILE"
		);
	}
	jint DownloadManager_Request::NETWORK_WIFI()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"NETWORK_WIFI"
		);
	}
	jint DownloadManager_Request::VISIBILITY_HIDDEN()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_HIDDEN"
		);
	}
	jint DownloadManager_Request::VISIBILITY_VISIBLE()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE"
		);
	}
	jint DownloadManager_Request::VISIBILITY_VISIBLE_NOTIFY_COMPLETED()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE_NOTIFY_COMPLETED"
		);
	}
	jint DownloadManager_Request::VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION()
	{
		return getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION"
		);
	}
	
	// QJniObject forward
	DownloadManager_Request::DownloadManager_Request(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DownloadManager_Request::DownloadManager_Request(android::net::Uri arg0)
		: JObject(
			"android.app.DownloadManager$Request",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::DownloadManager_Request DownloadManager_Request::addRequestHeader(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"addRequestHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void DownloadManager_Request::allowScanningByMediaScanner()
	{
		callMethod<void>(
			"allowScanningByMediaScanner",
			"()V"
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setAllowedNetworkTypes(jint arg0)
	{
		return callObjectMethod(
			"setAllowedNetworkTypes",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setAllowedOverMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setAllowedOverMetered",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setAllowedOverRoaming(jboolean arg0)
	{
		return callObjectMethod(
			"setAllowedOverRoaming",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setDescription(JString arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>()
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setDestinationInExternalFilesDir(android::content::Context arg0, JString arg1, JString arg2)
	{
		return callObjectMethod(
			"setDestinationInExternalFilesDir",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setDestinationInExternalPublicDir(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"setDestinationInExternalPublicDir",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setDestinationUri(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setDestinationUri",
			"(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;",
			arg0.object()
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setMimeType(JString arg0)
	{
		return callObjectMethod(
			"setMimeType",
			"(Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>()
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setNotificationVisibility(jint arg0)
	{
		return callObjectMethod(
			"setNotificationVisibility",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setRequiresCharging(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setRequiresDeviceIdle(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setShowRunningNotification(jboolean arg0)
	{
		return callObjectMethod(
			"setShowRunningNotification",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setTitle(JString arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0.object<jstring>()
		);
	}
	android::app::DownloadManager_Request DownloadManager_Request::setVisibleInDownloadsUi(jboolean arg0)
	{
		return callObjectMethod(
			"setVisibleInDownloadsUi",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
} // namespace android::app

