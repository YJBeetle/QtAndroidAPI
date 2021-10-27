#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media::browse
{
	class MediaBrowser_ConnectionCallback;
}
namespace __jni_impl::android::media::browse
{
	class MediaBrowser_ItemCallback;
}
namespace __jni_impl::android::media::browse
{
	class MediaBrowser_SubscriptionCallback;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Token;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::browse
{
	class MediaBrowser : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_PAGE();
		static jstring EXTRA_PAGE_SIZE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::media::browse::MediaBrowser_ConnectionCallback arg2, __jni_impl::android::os::Bundle arg3);
		
		// Methods
		void connect();
		void disconnect();
		QAndroidJniObject getExtras();
		void getItem(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_ItemCallback arg1);
		void getItem(const QString &arg0, __jni_impl::android::media::browse::MediaBrowser_ItemCallback arg1);
		jstring getRoot();
		QAndroidJniObject getServiceComponent();
		QAndroidJniObject getSessionToken();
		jboolean isConnected();
		void subscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void subscribe(const QString &arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void subscribe(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg2);
		void subscribe(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg2);
		void unsubscribe(jstring arg0);
		void unsubscribe(const QString &arg0);
		void unsubscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void unsubscribe(const QString &arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1);
	};
} // namespace __jni_impl::android::media::browse

#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "MediaBrowser_ConnectionCallback.hpp"
#include "MediaBrowser_ItemCallback.hpp"
#include "MediaBrowser_SubscriptionCallback.hpp"
#include "../session/MediaSession_Token.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::browse
{
	// Fields
	jstring MediaBrowser::EXTRA_PAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaBrowser::EXTRA_PAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaBrowser::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::media::browse::MediaBrowser_ConnectionCallback arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz = QAndroidJniObject(
			"android.media.browse.MediaBrowser",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/media/browse/MediaBrowser$ConnectionCallback;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void MediaBrowser::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MediaBrowser::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	QAndroidJniObject MediaBrowser::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void MediaBrowser::getItem(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_ItemCallback arg1)
	{
		__thiz.callMethod<void>(
			"getItem",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$ItemCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser::getItem(const QString &arg0, __jni_impl::android::media::browse::MediaBrowser_ItemCallback arg1)
	{
		__thiz.callMethod<void>(
			"getItem",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$ItemCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring MediaBrowser::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaBrowser::getServiceComponent()
	{
		return __thiz.callObjectMethod(
			"getServiceComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject MediaBrowser::getSessionToken()
	{
		return __thiz.callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	jboolean MediaBrowser::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaBrowser::subscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser::subscribe(const QString &arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser::subscribe(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg2)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaBrowser::subscribe(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg2)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaBrowser::unsubscribe(jstring arg0)
	{
		__thiz.callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaBrowser::unsubscribe(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaBrowser::unsubscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		__thiz.callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser::unsubscribe(const QString &arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		__thiz.callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::browse

namespace android::media::browse
{
	class MediaBrowser : public __jni_impl::android::media::browse::MediaBrowser
	{
	public:
		MediaBrowser(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowser(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::media::browse::MediaBrowser_ConnectionCallback arg2, __jni_impl::android::os::Bundle arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::media::browse

