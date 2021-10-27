#include "./MediaCas_Session.hpp"
#include "./MediaCodec_CryptoInfo.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaDescrambler.hpp"

namespace android::media
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
	
	MediaDescrambler::MediaDescrambler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDescrambler::MediaDescrambler(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDescrambler",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void MediaDescrambler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MediaDescrambler::descramble(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_CryptoInfo arg2)
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
	jboolean MediaDescrambler::requiresSecureDecoderComponent(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaDescrambler::setMediaCasSession(android::media::MediaCas_Session arg0)
	{
		__thiz.callMethod<void>(
			"setMediaCasSession",
			"(Landroid/media/MediaCas$Session;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

