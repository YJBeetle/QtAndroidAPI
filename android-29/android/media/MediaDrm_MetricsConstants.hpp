#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDrm_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CLOSE_SESSION_ERROR_COUNT();
		static jstring CLOSE_SESSION_ERROR_LIST();
		static jstring CLOSE_SESSION_OK_COUNT();
		static jstring EVENT_KEY_EXPIRED_COUNT();
		static jstring EVENT_KEY_NEEDED_COUNT();
		static jstring EVENT_PROVISION_REQUIRED_COUNT();
		static jstring EVENT_SESSION_RECLAIMED_COUNT();
		static jstring EVENT_VENDOR_DEFINED_COUNT();
		static jstring GET_DEVICE_UNIQUE_ID_ERROR_COUNT();
		static jstring GET_DEVICE_UNIQUE_ID_ERROR_LIST();
		static jstring GET_DEVICE_UNIQUE_ID_OK_COUNT();
		static jstring GET_KEY_REQUEST_ERROR_COUNT();
		static jstring GET_KEY_REQUEST_ERROR_LIST();
		static jstring GET_KEY_REQUEST_OK_COUNT();
		static jstring GET_KEY_REQUEST_OK_TIME_MICROS();
		static jstring GET_PROVISION_REQUEST_ERROR_COUNT();
		static jstring GET_PROVISION_REQUEST_ERROR_LIST();
		static jstring GET_PROVISION_REQUEST_OK_COUNT();
		static jstring KEY_STATUS_EXPIRED_COUNT();
		static jstring KEY_STATUS_INTERNAL_ERROR_COUNT();
		static jstring KEY_STATUS_OUTPUT_NOT_ALLOWED_COUNT();
		static jstring KEY_STATUS_PENDING_COUNT();
		static jstring KEY_STATUS_USABLE_COUNT();
		static jstring OPEN_SESSION_ERROR_COUNT();
		static jstring OPEN_SESSION_ERROR_LIST();
		static jstring OPEN_SESSION_OK_COUNT();
		static jstring PROVIDE_KEY_RESPONSE_ERROR_COUNT();
		static jstring PROVIDE_KEY_RESPONSE_ERROR_LIST();
		static jstring PROVIDE_KEY_RESPONSE_OK_COUNT();
		static jstring PROVIDE_KEY_RESPONSE_OK_TIME_MICROS();
		static jstring PROVIDE_PROVISION_RESPONSE_ERROR_COUNT();
		static jstring PROVIDE_PROVISION_RESPONSE_ERROR_LIST();
		static jstring PROVIDE_PROVISION_RESPONSE_OK_COUNT();
		static jstring SESSION_END_TIMES_MS();
		static jstring SESSION_START_TIMES_MS();
		
		MediaDrm_MetricsConstants(QAndroidJniObject obj);
		// Constructors
		MediaDrm_MetricsConstants() = default;
		
		// Methods
	};
} // namespace android::media

