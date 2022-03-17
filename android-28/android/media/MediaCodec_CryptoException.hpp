#pragma once

#include "../../JString.hpp"
#include "./MediaCodec_CryptoException.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_KEY_EXPIRED"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_NO_KEY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_NO_KEY"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_RESOURCE_BUSY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_RESOURCE_BUSY"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_SESSION_NOT_OPENED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_SESSION_NOT_OPENED"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_UNSUPPORTED_OPERATION"
		);
	}
	
	// Constructors
	inline MediaCodec_CryptoException::MediaCodec_CryptoException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.media.MediaCodec$CryptoException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint MediaCodec_CryptoException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

