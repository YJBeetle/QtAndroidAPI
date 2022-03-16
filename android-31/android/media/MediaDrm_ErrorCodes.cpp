#include "./MediaDrm_ErrorCodes.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_ErrorCodes::ERROR_CERTIFICATE_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_CERTIFICATE_MALFORMED"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_CERTIFICATE_MISSING()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_CERTIFICATE_MISSING"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_CRYPTO_LIBRARY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_CRYPTO_LIBRARY"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_FRAME_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_FRAME_TOO_LARGE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_GENERIC_OEM()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_GENERIC_OEM"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_GENERIC_PLUGIN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_GENERIC_PLUGIN"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_INIT_DATA()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_INIT_DATA"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_INSUFFICIENT_SECURITY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_INSUFFICIENT_SECURITY"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_KEY_EXPIRED"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_KEY_NOT_LOADED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_KEY_NOT_LOADED"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LICENSE_PARSE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_PARSE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LICENSE_POLICY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_POLICY"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LICENSE_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_RELEASE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LICENSE_REQUEST_REJECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_REQUEST_REJECTED"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LICENSE_RESTORE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_RESTORE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LICENSE_STATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LICENSE_STATE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_LOST_STATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_LOST_STATE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_MEDIA_FRAMEWORK()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_MEDIA_FRAMEWORK"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_NO_KEY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_NO_KEY"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_CERTIFICATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_CERTIFICATE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_CONFIG()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_CONFIG"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_PARSE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_PARSE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_REQUEST_REJECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_REQUEST_REJECTED"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_PROVISIONING_RETRY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_PROVISIONING_RETRY"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_RESOURCE_BUSY()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_RESOURCE_BUSY"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_RESOURCE_CONTENTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_SECURE_STOP_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_SECURE_STOP_RELEASE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_SESSION_NOT_OPENED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_SESSION_NOT_OPENED"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_STORAGE_READ()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_STORAGE_READ"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_STORAGE_WRITE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_STORAGE_WRITE"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_UNKNOWN"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_UNSUPPORTED_OPERATION"
		);
	}
	jint MediaDrm_ErrorCodes::ERROR_ZERO_SUBSAMPLES()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$ErrorCodes",
			"ERROR_ZERO_SUBSAMPLES"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

