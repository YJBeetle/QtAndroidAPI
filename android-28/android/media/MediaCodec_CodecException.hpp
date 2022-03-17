#pragma once

#include "../../JString.hpp"
#include "./MediaCodec_CodecException.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodec_CodecException::ERROR_INSUFFICIENT_RESOURCE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_INSUFFICIENT_RESOURCE"
		);
	}
	inline jint MediaCodec_CodecException::ERROR_RECLAIMED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_RECLAIMED"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString MediaCodec_CodecException::getDiagnosticInfo() const
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaCodec_CodecException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline jboolean MediaCodec_CodecException::isRecoverable() const
	{
		return callMethod<jboolean>(
			"isRecoverable",
			"()Z"
		);
	}
	inline jboolean MediaCodec_CodecException::isTransient() const
	{
		return callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
