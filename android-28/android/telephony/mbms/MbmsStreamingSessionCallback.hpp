#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsStreamingSessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsStreamingSessionCallback(QJniObject obj);
		
		// Constructors
		MbmsStreamingSessionCallback();
		
		// Methods
		void onError(jint arg0, JString arg1);
		void onMiddlewareReady();
		void onStreamingServicesUpdated(JObject arg0);
	};
} // namespace android::telephony::mbms

