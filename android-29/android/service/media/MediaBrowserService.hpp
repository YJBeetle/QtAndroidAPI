#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Token;
}
namespace __jni_impl::android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::service::media
{
	class MediaBrowserService_BrowserRoot;
}
namespace __jni_impl::android::service::media
{
	class MediaBrowserService_Result;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::service::media
{
	class MediaBrowserService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void dump(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::PrintWriter arg1, jarray arg2);
		QAndroidJniObject getBrowserRootHints();
		QAndroidJniObject getCurrentBrowserInfo();
		QAndroidJniObject getSessionToken();
		void notifyChildrenChanged(jstring arg0);
		void notifyChildrenChanged(const QString &arg0);
		void notifyChildrenChanged(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void notifyChildrenChanged(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCreate();
		QAndroidJniObject onGetRoot(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject onGetRoot(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		void onLoadChildren(jstring arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1);
		void onLoadChildren(const QString &arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1);
		void onLoadChildren(jstring arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1, __jni_impl::android::os::Bundle arg2);
		void onLoadChildren(const QString &arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1, __jni_impl::android::os::Bundle arg2);
		void onLoadItem(jstring arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1);
		void onLoadItem(const QString &arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1);
		void setSessionToken(__jni_impl::android::media::session::MediaSession_Token arg0);
	};
} // namespace __jni_impl::android::service::media

#include "../../content/Intent.hpp"
#include "../../media/session/MediaSession_Token.hpp"
#include "../../media/session/MediaSessionManager_RemoteUserInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./MediaBrowserService_BrowserRoot.hpp"
#include "./MediaBrowserService_Result.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::service::media
{
	// Fields
	jstring MediaBrowserService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaBrowserService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.media.MediaBrowserService",
			"()V"
		);
	}
	
	// Methods
	void MediaBrowserService::dump(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::PrintWriter arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject MediaBrowserService::getBrowserRootHints()
	{
		return __thiz.callObjectMethod(
			"getBrowserRootHints",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject MediaBrowserService::getCurrentBrowserInfo()
	{
		return __thiz.callObjectMethod(
			"getCurrentBrowserInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	QAndroidJniObject MediaBrowserService::getSessionToken()
	{
		return __thiz.callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	void MediaBrowserService::notifyChildrenChanged(jstring arg0)
	{
		__thiz.callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaBrowserService::notifyChildrenChanged(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaBrowserService::notifyChildrenChanged(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowserService::notifyChildrenChanged(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaBrowserService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void MediaBrowserService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	QAndroidJniObject MediaBrowserService::onGetRoot(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onGetRoot",
			"(Ljava/lang/String;ILandroid/os/Bundle;)Landroid/service/media/MediaBrowserService$BrowserRoot;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MediaBrowserService::onGetRoot(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onGetRoot",
			"(Ljava/lang/String;ILandroid/os/Bundle;)Landroid/service/media/MediaBrowserService$BrowserRoot;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MediaBrowserService::onLoadChildren(jstring arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1)
	{
		__thiz.callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowserService::onLoadChildren(const QString &arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1)
	{
		__thiz.callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaBrowserService::onLoadChildren(jstring arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaBrowserService::onLoadChildren(const QString &arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaBrowserService::onLoadItem(jstring arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1)
	{
		__thiz.callMethod<void>(
			"onLoadItem",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowserService::onLoadItem(const QString &arg0, __jni_impl::android::service::media::MediaBrowserService_Result arg1)
	{
		__thiz.callMethod<void>(
			"onLoadItem",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaBrowserService::setSessionToken(__jni_impl::android::media::session::MediaSession_Token arg0)
	{
		__thiz.callMethod<void>(
			"setSessionToken",
			"(Landroid/media/session/MediaSession$Token;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::media

namespace android::service::media
{
	class MediaBrowserService : public __jni_impl::android::service::media::MediaBrowserService
	{
	public:
		MediaBrowserService(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowserService()
		{
			__constructor();
		}
	};
} // namespace android::service::media

