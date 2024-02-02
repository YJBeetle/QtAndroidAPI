#pragma once

#include "../../JString.hpp"
#include "./MediaDrm_SessionException.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaDrm_SessionException::ERROR_RESOURCE_CONTENTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	inline jint MediaDrm_SessionException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	inline MediaDrm_SessionException::MediaDrm_SessionException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint MediaDrm_SessionException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline jint MediaDrm_SessionException::getErrorContext() const
	{
		return callMethod<jint>(
			"getErrorContext",
			"()I"
		);
	}
	inline jint MediaDrm_SessionException::getOemError() const
	{
		return callMethod<jint>(
			"getOemError",
			"()I"
		);
	}
	inline jint MediaDrm_SessionException::getVendorError() const
	{
		return callMethod<jint>(
			"getVendorError",
			"()I"
		);
	}
	inline jboolean MediaDrm_SessionException::isTransient() const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
