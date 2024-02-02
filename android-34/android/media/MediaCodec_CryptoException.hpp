#pragma once

#include "./MediaCodec_CryptoInfo.def.hpp"
#include "../../JString.hpp"
#include "./MediaCodec_CryptoException.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodec_CryptoException::ERROR_FRAME_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_FRAME_TOO_LARGE"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_SECURITY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_SECURITY"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_KEY_EXPIRED"
		);
	}
	inline jint MediaCodec_CryptoException::ERROR_LOST_STATE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_LOST_STATE"
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
	inline android::media::MediaCodec_CryptoInfo MediaCodec_CryptoException::getCryptoInfo() const
	{
		return callObjectMethod(
			"getCryptoInfo",
			"()Landroid/media/MediaCodec$CryptoInfo;"
		);
	}
	inline jint MediaCodec_CryptoException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline jint MediaCodec_CryptoException::getErrorContext() const
	{
		return callMethod<jint>(
			"getErrorContext",
			"()I"
		);
	}
	inline jint MediaCodec_CryptoException::getOemError() const
	{
		return callMethod<jint>(
			"getOemError",
			"()I"
		);
	}
	inline jint MediaCodec_CryptoException::getVendorError() const
	{
		return callMethod<jint>(
			"getVendorError",
			"()I"
		);
	}
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
