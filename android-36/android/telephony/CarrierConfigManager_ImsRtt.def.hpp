#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsRtt : public JObject
	{
	public:
		// Fields
		static JString KEY_PREFIX();
		static JString KEY_RED_PAYLOAD_TYPE_INT();
		static JString KEY_T140_PAYLOAD_TYPE_INT();
		static JString KEY_TEXT_AS_BANDWIDTH_KBPS_INT();
		static JString KEY_TEXT_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE();
		static JString KEY_TEXT_ON_DEFAULT_BEARER_SUPPORTED_BOOL();
		static JString KEY_TEXT_QOS_PRECONDITION_SUPPORTED_BOOL();
		static JString KEY_TEXT_RR_BANDWIDTH_BPS_INT();
		static JString KEY_TEXT_RS_BANDWIDTH_BPS_INT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsRtt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsRtt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

