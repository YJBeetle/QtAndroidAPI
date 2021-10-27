#include "./MediaCodec_CodecException.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_CodecException::ERROR_INSUFFICIENT_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_INSUFFICIENT_RESOURCE"
		);
	}
	jint MediaCodec_CodecException::ERROR_RECLAIMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_RECLAIMED"
		);
	}
	
	MediaCodec_CodecException::MediaCodec_CodecException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MediaCodec_CodecException::getDiagnosticInfo()
	{
		return __thiz.callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaCodec_CodecException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	jboolean MediaCodec_CodecException::isRecoverable()
	{
		return __thiz.callMethod<jboolean>(
			"isRecoverable",
			"()Z"
		);
	}
	jboolean MediaCodec_CodecException::isTransient()
	{
		return __thiz.callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media

