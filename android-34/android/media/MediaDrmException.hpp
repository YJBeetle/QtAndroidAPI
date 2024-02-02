#pragma once

#include "../../JString.hpp"
#include "./MediaDrmException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaDrmException::MediaDrmException(JString arg0)
		: java::lang::Exception(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint MediaDrmException::getErrorContext() const
	{
		return callMethod<jint>(
			"getErrorContext",
			"()I"
		);
	}
	inline jint MediaDrmException::getOemError() const
	{
		return callMethod<jint>(
			"getOemError",
			"()I"
		);
	}
	inline jint MediaDrmException::getVendorError() const
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
