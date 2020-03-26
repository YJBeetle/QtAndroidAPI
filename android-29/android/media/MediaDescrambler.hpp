#pragma once

#ifndef ANDROID_MEDIA_MEDIADESCRAMBLER
#define ANDROID_MEDIA_MEDIADESCRAMBLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCas_Session;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::android::media
{
	class MediaCodec_CryptoInfo;
}

namespace __jni_impl::android::media
{
	class MediaDescrambler : public __JniBaseClass
	{
	public:
		// Fields
		static jbyte SCRAMBLE_CONTROL_EVEN_KEY();
		static jbyte SCRAMBLE_CONTROL_ODD_KEY();
		static jbyte SCRAMBLE_CONTROL_RESERVED();
		static jbyte SCRAMBLE_CONTROL_UNSCRAMBLED();
		static jbyte SCRAMBLE_FLAG_PES_HEADER();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		void close();
		void setMediaCasSession(__jni_impl::android::media::MediaCas_Session arg0);
		jint descramble(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1, __jni_impl::android::media::MediaCodec_CryptoInfo arg2);
		jboolean requiresSecureDecoderComponent(jstring arg0);
	};
} // namespace __jni_impl::android::media

#include "MediaCas_Session.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "MediaCodec_CryptoInfo.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_EVEN_KEY()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_EVEN_KEY"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_ODD_KEY()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_ODD_KEY"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_RESERVED()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_RESERVED"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_UNSCRAMBLED()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_UNSCRAMBLED"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_FLAG_PES_HEADER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_FLAG_PES_HEADER"
		);
	}
	
	// Constructors
	void MediaDescrambler::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDescrambler",
			"(I)V",
			arg0);
	}
	
	// Methods
	void MediaDescrambler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MediaDescrambler::setMediaCasSession(__jni_impl::android::media::MediaCas_Session arg0)
	{
		__thiz.callMethod<void>(
			"setMediaCasSession",
			"(Landroid/media/MediaCas$Session;)V",
			arg0.__jniObject().object()
		);
	}
	jint MediaDescrambler::descramble(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1, __jni_impl::android::media::MediaCodec_CryptoInfo arg2)
	{
		return __thiz.callMethod<jint>(
			"descramble",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Landroid/media/MediaCodec$CryptoInfo;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean MediaDescrambler::requiresSecureDecoderComponent(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDescrambler : public __jni_impl::android::media::MediaDescrambler
	{
	public:
		MediaDescrambler(QAndroidJniObject obj) { __thiz = obj; }
		MediaDescrambler(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADESCRAMBLER

