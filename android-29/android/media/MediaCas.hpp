#pragma once

#ifndef ANDROID_MEDIA_MEDIACAS
#define ANDROID_MEDIA_MEDIACAS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media
{
	class MediaCas_Session;
}

namespace __jni_impl::android::media
{
	class MediaCas : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		void close();
		void setPrivateData(jbyteArray arg0);
		void processEmm(jbyteArray arg0, jint arg1, jint arg2);
		void processEmm(jbyteArray arg0);
		void sendEvent(jint arg0, jint arg1, jbyteArray arg2);
		void provision(jstring arg0);
		void refreshEntitlements(jint arg0, jbyteArray arg1);
		static jboolean isSystemIdSupported(jint arg0);
		static jarray enumeratePlugins();
		void setEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		QAndroidJniObject openSession();
	};
} // namespace __jni_impl::android::media

#include "../os/Handler.hpp"
#include "MediaCas_Session.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCas::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCas",
			"(I)V",
			arg0);
	}
	
	// Methods
	void MediaCas::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MediaCas::setPrivateData(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0
		);
	}
	void MediaCas::processEmm(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"processEmm",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas::processEmm(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"processEmm",
			"([B)V",
			arg0
		);
	}
	void MediaCas::sendEvent(jint arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"sendEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas::provision(jstring arg0)
	{
		__thiz.callMethod<void>(
			"provision",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaCas::refreshEntitlements(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"refreshEntitlements",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	jboolean MediaCas::isSystemIdSupported(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaCas",
			"isSystemIdSupported",
			"(I)Z",
			arg0
		);
	}
	jarray MediaCas::enumeratePlugins()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCas",
			"enumeratePlugins",
			"()[Landroid/media/MediaCas$PluginDescriptor;"
		).object<jarray>();
	}
	void MediaCas::setEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setEventListener",
			"(Landroid/media/MediaCas$EventListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaCas::openSession()
	{
		return __thiz.callObjectMethod(
			"openSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCas : public __jni_impl::android::media::MediaCas
	{
	public:
		MediaCas(QAndroidJniObject obj) { __thiz = obj; }
		MediaCas(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACAS

