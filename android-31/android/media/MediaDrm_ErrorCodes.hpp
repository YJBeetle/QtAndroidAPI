#pragma once

#include "./MediaDrm_ErrorCodes.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaDrm_ErrorCodes::ERROR_CERTIFICATE_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_CERTIFICATE_MALFORMED"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_CERTIFICATE_MISSING()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_CERTIFICATE_MISSING"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_CRYPTO_LIBRARY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_CRYPTO_LIBRARY"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_FRAME_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_FRAME_TOO_LARGE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_GENERIC_OEM()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_GENERIC_OEM"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_GENERIC_PLUGIN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_GENERIC_PLUGIN"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_INIT_DATA()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_INIT_DATA"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_INSUFFICIENT_SECURITY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_INSUFFICIENT_SECURITY"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_KEY_EXPIRED"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_KEY_NOT_LOADED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_KEY_NOT_LOADED"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LICENSE_PARSE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_PARSE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LICENSE_POLICY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_POLICY"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LICENSE_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_RELEASE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LICENSE_REQUEST_REJECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_REQUEST_REJECTED"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LICENSE_RESTORE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_RESTORE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LICENSE_STATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_STATE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_LOST_STATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LOST_STATE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_MEDIA_FRAMEWORK()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_MEDIA_FRAMEWORK"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_NO_KEY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_NO_KEY"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_CERTIFICATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_CERTIFICATE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_CONFIG()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_CONFIG"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_PARSE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_PARSE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_REQUEST_REJECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_REQUEST_REJECTED"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_RETRY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_RETRY"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_RESOURCE_BUSY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_RESOURCE_BUSY"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_RESOURCE_CONTENTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_SECURE_STOP_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_SECURE_STOP_RELEASE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_SESSION_NOT_OPENED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_SESSION_NOT_OPENED"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_STORAGE_READ()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_STORAGE_READ"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_STORAGE_WRITE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_STORAGE_WRITE"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_UNKNOWN"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_UNSUPPORTED_OPERATION"
		);
	}
	inline jint MediaDrm_ErrorCodes::ERROR_ZERO_SUBSAMPLES()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_ZERO_SUBSAMPLES"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

