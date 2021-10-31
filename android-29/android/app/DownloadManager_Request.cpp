#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./DownloadManager_Request.hpp"

namespace android::app
{
	// Fields
	jint DownloadManager_Request::NETWORK_MOBILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"NETWORK_MOBILE"
		);
	}
	jint DownloadManager_Request::NETWORK_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"NETWORK_WIFI"
		);
	}
	jint DownloadManager_Request::VISIBILITY_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_HIDDEN"
		);
	}
	jint DownloadManager_Request::VISIBILITY_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE"
		);
	}
	jint DownloadManager_Request::VISIBILITY_VISIBLE_NOTIFY_COMPLETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE_NOTIFY_COMPLETED"
		);
	}
	jint DownloadManager_Request::VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DownloadManager$Request",
			"VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION"
		);
	}
	
	// QAndroidJniObject forward
	DownloadManager_Request::DownloadManager_Request(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DownloadManager_Request::DownloadManager_Request(android::net::Uri arg0)
		: __JniBaseClass(
			"android.app.DownloadManager$Request",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject DownloadManager_Request::addRequestHeader(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"addRequestHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0,
			arg1
		);
	}
	void DownloadManager_Request::allowScanningByMediaScanner()
	{
		callMethod<void>(
			"allowScanningByMediaScanner",
			"()V"
		);
	}
	QAndroidJniObject DownloadManager_Request::setAllowedNetworkTypes(jint arg0)
	{
		return callObjectMethod(
			"setAllowedNetworkTypes",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setAllowedOverMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setAllowedOverMetered",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setAllowedOverRoaming(jboolean arg0)
	{
		return callObjectMethod(
			"setAllowedOverRoaming",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationInExternalFilesDir(android::content::Context arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"setDestinationInExternalFilesDir",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationInExternalPublicDir(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setDestinationInExternalPublicDir",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationUri(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setDestinationUri",
			"(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;",
			arg0.object()
		);
	}
	QAndroidJniObject DownloadManager_Request::setMimeType(jstring arg0)
	{
		return callObjectMethod(
			"setMimeType",
			"(Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setNotificationVisibility(jint arg0)
	{
		return callObjectMethod(
			"setNotificationVisibility",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setRequiresCharging(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setRequiresDeviceIdle(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setShowRunningNotification(jboolean arg0)
	{
		return callObjectMethod(
			"setShowRunningNotification",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setVisibleInDownloadsUi(jboolean arg0)
	{
		return callObjectMethod(
			"setVisibleInDownloadsUi",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
} // namespace android::app

