#pragma once

#include "../../JString.hpp"
#include "./MediaCryptoException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaCryptoException::MediaCryptoException(JString arg0)
		: java::lang::Exception(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint MediaCryptoException::getErrorContext() const
	{
		return callMethod<jint>(
			"getErrorContext",
			"()I"
		);
	}
	inline jint MediaCryptoException::getOemError() const
	{
		return callMethod<jint>(
			"getOemError",
			"()I"
		);
	}
	inline jint MediaCryptoException::getVendorError() const
	{
		return callMethod<jint>(
			"getVendorError",
			"()I"
		);
	}
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
