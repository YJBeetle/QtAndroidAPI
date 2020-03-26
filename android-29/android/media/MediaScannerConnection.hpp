#pragma once

#ifndef ANDROID_MEDIA_MEDIASCANNERCONNECTION
#define ANDROID_MEDIA_MEDIASCANNERCONNECTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::media
{
	class MediaScannerConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void connect();
		jboolean isConnected();
		void disconnect();
		static void scanFile(__jni_impl::android::content::Context arg0, jarray arg1, jarray arg2, __jni_impl::__JniBaseClass arg3);
		void scanFile(jstring arg0, jstring arg1);
		void onServiceConnected(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1);
		void onServiceDisconnected(__jni_impl::android::content::ComponentName arg0);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "../content/ComponentName.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaScannerConnection::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaScannerConnection",
			"(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void MediaScannerConnection::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jboolean MediaScannerConnection::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaScannerConnection::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	void MediaScannerConnection::scanFile(__jni_impl::android::content::Context arg0, jarray arg1, jarray arg2, __jni_impl::__JniBaseClass arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.MediaScannerConnection",
			"scanFile",
			"(Landroid/content/Context;[Ljava/lang/String;[Ljava/lang/String;Landroid/media/MediaScannerConnection$OnScanCompletedListener;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void MediaScannerConnection::scanFile(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"scanFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MediaScannerConnection::onServiceConnected(__jni_impl::android::content::ComponentName arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onServiceConnected",
			"(Landroid/content/ComponentName;Landroid/os/IBinder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaScannerConnection::onServiceDisconnected(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"onServiceDisconnected",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaScannerConnection : public __jni_impl::android::media::MediaScannerConnection
	{
	public:
		MediaScannerConnection(QAndroidJniObject obj) { __thiz = obj; }
		MediaScannerConnection(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASCANNERCONNECTION

