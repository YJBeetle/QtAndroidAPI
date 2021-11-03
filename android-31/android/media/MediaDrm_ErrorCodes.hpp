#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaDrm_ErrorCodes : public JObject
	{
	public:
		// Fields
		static jint ERROR_CERTIFICATE_MALFORMED();
		static jint ERROR_CERTIFICATE_MISSING();
		static jint ERROR_CRYPTO_LIBRARY();
		static jint ERROR_FRAME_TOO_LARGE();
		static jint ERROR_GENERIC_OEM();
		static jint ERROR_GENERIC_PLUGIN();
		static jint ERROR_INIT_DATA();
		static jint ERROR_INSUFFICIENT_OUTPUT_PROTECTION();
		static jint ERROR_INSUFFICIENT_SECURITY();
		static jint ERROR_KEY_EXPIRED();
		static jint ERROR_KEY_NOT_LOADED();
		static jint ERROR_LICENSE_PARSE();
		static jint ERROR_LICENSE_POLICY();
		static jint ERROR_LICENSE_RELEASE();
		static jint ERROR_LICENSE_REQUEST_REJECTED();
		static jint ERROR_LICENSE_RESTORE();
		static jint ERROR_LICENSE_STATE();
		static jint ERROR_LOST_STATE();
		static jint ERROR_MEDIA_FRAMEWORK();
		static jint ERROR_NO_KEY();
		static jint ERROR_PROVISIONING_CERTIFICATE();
		static jint ERROR_PROVISIONING_CONFIG();
		static jint ERROR_PROVISIONING_PARSE();
		static jint ERROR_PROVISIONING_REQUEST_REJECTED();
		static jint ERROR_PROVISIONING_RETRY();
		static jint ERROR_RESOURCE_BUSY();
		static jint ERROR_RESOURCE_CONTENTION();
		static jint ERROR_SECURE_STOP_RELEASE();
		static jint ERROR_SESSION_NOT_OPENED();
		static jint ERROR_STORAGE_READ();
		static jint ERROR_STORAGE_WRITE();
		static jint ERROR_UNKNOWN();
		static jint ERROR_UNSUPPORTED_OPERATION();
		static jint ERROR_ZERO_SUBSAMPLES();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_ErrorCodes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_ErrorCodes(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

