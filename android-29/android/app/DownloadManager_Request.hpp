#pragma once

#ifndef ANDROID_APP_DOWNLOADMANAGER_REQUEST
#define ANDROID_APP_DOWNLOADMANAGER_REQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::app
{
	class DownloadManager_Request : public __JniBaseClass
	{
	public:
		// Fields
		static jint NETWORK_MOBILE();
		static jint NETWORK_WIFI();
		static jint VISIBILITY_HIDDEN();
		static jint VISIBILITY_VISIBLE();
		static jint VISIBILITY_VISIBLE_NOTIFY_COMPLETED();
		static jint VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION();
		
		// Constructors
		void __constructor(__jni_impl::android::net::Uri arg0);
		
		// Methods
		QAndroidJniObject setDestinationUri(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setDestinationInExternalFilesDir(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2);
		QAndroidJniObject setDestinationInExternalFilesDir(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2);
		QAndroidJniObject setDestinationInExternalPublicDir(jstring arg0, jstring arg1);
		QAndroidJniObject setDestinationInExternalPublicDir(const QString &arg0, const QString &arg1);
		void allowScanningByMediaScanner();
		QAndroidJniObject addRequestHeader(jstring arg0, jstring arg1);
		QAndroidJniObject addRequestHeader(const QString &arg0, const QString &arg1);
		QAndroidJniObject setShowRunningNotification(jboolean arg0);
		QAndroidJniObject setNotificationVisibility(jint arg0);
		QAndroidJniObject setAllowedNetworkTypes(jint arg0);
		QAndroidJniObject setAllowedOverRoaming(jboolean arg0);
		QAndroidJniObject setAllowedOverMetered(jboolean arg0);
		QAndroidJniObject setRequiresCharging(jboolean arg0);
		QAndroidJniObject setRequiresDeviceIdle(jboolean arg0);
		QAndroidJniObject setVisibleInDownloadsUi(jboolean arg0);
		QAndroidJniObject setMimeType(jstring arg0);
		QAndroidJniObject setMimeType(const QString &arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace __jni_impl::android::app

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void DownloadManager_Request::__constructor(__jni_impl::android::net::Uri arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.DownloadManager$Request",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DownloadManager_Request::setDestinationUri(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setDestinationUri",
			"(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationInExternalFilesDir(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"setDestinationInExternalFilesDir",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationInExternalFilesDir(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"setDestinationInExternalFilesDir",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationInExternalPublicDir(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setDestinationInExternalPublicDir",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DownloadManager_Request::setDestinationInExternalPublicDir(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setDestinationInExternalPublicDir",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DownloadManager_Request::allowScanningByMediaScanner()
	{
		__thiz.callMethod<void>(
			"allowScanningByMediaScanner",
			"()V"
		);
	}
	QAndroidJniObject DownloadManager_Request::addRequestHeader(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addRequestHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DownloadManager_Request::addRequestHeader(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"addRequestHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DownloadManager_Request::setShowRunningNotification(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setShowRunningNotification",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setNotificationVisibility(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setNotificationVisibility",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setAllowedNetworkTypes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowedNetworkTypes",
			"(I)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setAllowedOverRoaming(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowedOverRoaming",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setAllowedOverMetered(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowedOverMetered",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setRequiresCharging(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setRequiresDeviceIdle(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setVisibleInDownloadsUi(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setVisibleInDownloadsUi",
			"(Z)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setMimeType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setMimeType",
			"(Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setMimeType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setMimeType",
			"(Ljava/lang/String;)Landroid/app/DownloadManager$Request;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DownloadManager_Request::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DownloadManager_Request::setTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Request::setTitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class DownloadManager_Request : public __jni_impl::android::app::DownloadManager_Request
	{
	public:
		DownloadManager_Request(QAndroidJniObject obj) { __thiz = obj; }
		DownloadManager_Request(__jni_impl::android::net::Uri arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_DOWNLOADMANAGER_REQUEST

