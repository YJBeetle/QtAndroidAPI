#pragma once

#include "../../JString.hpp"
#include "./MediaDrm_MediaDrmStateException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MediaDrm_MediaDrmStateException::getDiagnosticInfo() const
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaDrm_MediaDrmStateException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline jboolean MediaDrm_MediaDrmStateException::isTransient() const
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
