#include "./MediaCodec_CodecException.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_CodecException::ERROR_INSUFFICIENT_RESOURCE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_INSUFFICIENT_RESOURCE"
		);
	}
	jint MediaCodec_CodecException::ERROR_RECLAIMED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_RECLAIMED"
		);
	}
	
	// QJniObject forward
	MediaCodec_CodecException::MediaCodec_CodecException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaCodec_CodecException::getDiagnosticInfo()
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaCodec_CodecException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	jboolean MediaCodec_CodecException::isRecoverable()
	{
		return callMethod<jboolean>(
			"isRecoverable",
			"()Z"
		);
	}
	jboolean MediaCodec_CodecException::isTransient()
	{
		return callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media

