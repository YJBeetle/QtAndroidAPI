#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class MbmsErrors_GeneralErrors : public JObject
	{
	public:
		// Fields
		static jint ERROR_CARRIER_CHANGE_NOT_ALLOWED();
		static jint ERROR_IN_E911();
		static jint ERROR_MIDDLEWARE_NOT_YET_READY();
		static jint ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE();
		static jint ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE();
		static jint ERROR_OUT_OF_MEMORY();
		static jint ERROR_UNABLE_TO_READ_SIM();
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsErrors_GeneralErrors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_GeneralErrors(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

