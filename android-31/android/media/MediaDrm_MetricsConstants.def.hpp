#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaDrm_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString CLOSE_SESSION_ERROR_COUNT();
		static JString CLOSE_SESSION_ERROR_LIST();
		static JString CLOSE_SESSION_OK_COUNT();
		static JString EVENT_KEY_EXPIRED_COUNT();
		static JString EVENT_KEY_NEEDED_COUNT();
		static JString EVENT_PROVISION_REQUIRED_COUNT();
		static JString EVENT_SESSION_RECLAIMED_COUNT();
		static JString EVENT_VENDOR_DEFINED_COUNT();
		static JString GET_DEVICE_UNIQUE_ID_ERROR_COUNT();
		static JString GET_DEVICE_UNIQUE_ID_ERROR_LIST();
		static JString GET_DEVICE_UNIQUE_ID_OK_COUNT();
		static JString GET_KEY_REQUEST_ERROR_COUNT();
		static JString GET_KEY_REQUEST_ERROR_LIST();
		static JString GET_KEY_REQUEST_OK_COUNT();
		static JString GET_KEY_REQUEST_OK_TIME_MICROS();
		static JString GET_PROVISION_REQUEST_ERROR_COUNT();
		static JString GET_PROVISION_REQUEST_ERROR_LIST();
		static JString GET_PROVISION_REQUEST_OK_COUNT();
		static JString KEY_STATUS_EXPIRED_COUNT();
		static JString KEY_STATUS_INTERNAL_ERROR_COUNT();
		static JString KEY_STATUS_OUTPUT_NOT_ALLOWED_COUNT();
		static JString KEY_STATUS_PENDING_COUNT();
		static JString KEY_STATUS_USABLE_COUNT();
		static JString OPEN_SESSION_ERROR_COUNT();
		static JString OPEN_SESSION_ERROR_LIST();
		static JString OPEN_SESSION_OK_COUNT();
		static JString PROVIDE_KEY_RESPONSE_ERROR_COUNT();
		static JString PROVIDE_KEY_RESPONSE_ERROR_LIST();
		static JString PROVIDE_KEY_RESPONSE_OK_COUNT();
		static JString PROVIDE_KEY_RESPONSE_OK_TIME_MICROS();
		static JString PROVIDE_PROVISION_RESPONSE_ERROR_COUNT();
		static JString PROVIDE_PROVISION_RESPONSE_ERROR_LIST();
		static JString PROVIDE_PROVISION_RESPONSE_OK_COUNT();
		static JString SESSION_END_TIMES_MS();
		static JString SESSION_START_TIMES_MS();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_MetricsConstants(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

