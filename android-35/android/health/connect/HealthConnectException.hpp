#pragma once

#include "./HealthConnectException.def.hpp"

namespace android::health::connect
{
	// Fields
	inline jint HealthConnectException::ERROR_DATA_SYNC_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_DATA_SYNC_IN_PROGRESS"
		);
	}
	inline jint HealthConnectException::ERROR_INTERNAL()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_INTERNAL"
		);
	}
	inline jint HealthConnectException::ERROR_INVALID_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_INVALID_ARGUMENT"
		);
	}
	inline jint HealthConnectException::ERROR_IO()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_IO"
		);
	}
	inline jint HealthConnectException::ERROR_RATE_LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_RATE_LIMIT_EXCEEDED"
		);
	}
	inline jint HealthConnectException::ERROR_REMOTE()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_REMOTE"
		);
	}
	inline jint HealthConnectException::ERROR_SECURITY()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_SECURITY"
		);
	}
	inline jint HealthConnectException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_UNKNOWN"
		);
	}
	inline jint HealthConnectException::ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.health.connect.HealthConnectException",
			"ERROR_UNSUPPORTED_OPERATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint HealthConnectException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::health::connect

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
