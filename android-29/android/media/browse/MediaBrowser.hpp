#pragma once

#ifndef ANDROID_MEDIA_BROWSE_MEDIABROWSER
#define ANDROID_MEDIA_BROWSE_MEDIABROWSER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::media::browse
{
	class MediaBrowser_ConnectionCallback;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::media::browse
{
	class MediaBrowser_ItemCallback;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Token;
}
namespace __jni_impl::android::media::browse
{
	class MediaBrowser_SubscriptionCallback;
}

namespace __jni_impl::android::media::browse
{
	class MediaBrowser : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_PAGE();
		static QAndroidJniObject EXTRA_PAGE_SIZE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::media::browse::MediaBrowser_ConnectionCallback arg2, __jni_impl::android::os::Bundle arg3);
		
		// Methods
		void connect();
		QAndroidJniObject getRoot();
		void getItem(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_ItemCallback arg1);
		QAndroidJniObject getSessionToken();
		jboolean isConnected();
		QAndroidJniObject getExtras();
		void disconnect();
		QAndroidJniObject getServiceComponent();
		void subscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void subscribe(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg2);
		void unsubscribe(jstring arg0);
		void unsubscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1);
	};
} // namespace __jni_impl::android::media::browse

#include "../../content/Context.hpp"
#include "../../content/ComponentName.hpp"
#include "MediaBrowser_ConnectionCallback.hpp"
#include "../../os/Bundle.hpp"
#include "MediaBrowser_ItemCallback.hpp"
#include "../session/MediaSession_Token.hpp"
#include "MediaBrowser_SubscriptionCallback.hpp"

namespace __jni_impl::android::media::browse
{
	// Fields
	QAndroidJniObject MediaBrowser::EXTRA_PAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaBrowser::EXTRA_PAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE_SIZE",
			"Ljava/lang/String;");
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
			arg3.__jniObject().object());
	}
	
	// Methods
	void MediaBrowser::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V");
	}
	QAndroidJniObject MediaBrowser::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Ljava/lang/String;");
	}
	void MediaBrowser::getItem(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_ItemCallback arg1)
	{
		__thiz.callMethod<void>(
			"getItem",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$ItemCallback;)V",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject MediaBrowser::getSessionToken()
	{
		return __thiz.callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;");
	}
	jboolean MediaBrowser::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	QAndroidJniObject MediaBrowser::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	void MediaBrowser::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V");
	}
	QAndroidJniObject MediaBrowser::getServiceComponent()
	{
		return __thiz.callObjectMethod(
			"getServiceComponent",
			"()Landroid/content/ComponentName;");
	}
	void MediaBrowser::subscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void MediaBrowser::subscribe(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg2)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void MediaBrowser::unsubscribe(jstring arg0)
	{
		__thiz.callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaBrowser::unsubscribe(jstring arg0, __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		__thiz.callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.__jniObject().object());
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

#endif // ANDROID_MEDIA_BROWSE_MEDIABROWSER

