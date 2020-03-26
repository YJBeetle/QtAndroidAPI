#pragma once

#ifndef ANDROID_MEDIA_MEDIACRYPTO
#define ANDROID_MEDIA_MEDIACRYPTO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::media
{
	class MediaCrypto : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::UUID arg0, jbyteArray arg1);
		
		// Methods
		void release();
		static jboolean isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0);
		jboolean requiresSecureDecoderComponent(jstring arg0);
		void setMediaDrmSession(jbyteArray arg0);
	};
} // namespace __jni_impl::android::media

#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCrypto::__constructor(__jni_impl::java::util::UUID arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCrypto",
			"(Ljava/util/UUID;[B)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void MediaCrypto::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean MediaCrypto::isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaCrypto",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaCrypto::requiresSecureDecoderComponent(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void MediaCrypto::setMediaDrmSession(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setMediaDrmSession",
			"([B)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCrypto : public __jni_impl::android::media::MediaCrypto
	{
	public:
		MediaCrypto(QAndroidJniObject obj) { __thiz = obj; }
		MediaCrypto(__jni_impl::java::util::UUID arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACRYPTO

