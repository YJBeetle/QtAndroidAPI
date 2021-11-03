#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsStreamingSessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsStreamingSessionCallback(QAndroidJniObject obj);
		
		// Constructors
		MbmsStreamingSessionCallback();
		
		// Methods
		void onError(jint arg0, JString arg1) const;
		void onMiddlewareReady() const;
		void onStreamingServicesUpdated(JObject arg0) const;
	};
} // namespace android::telephony::mbms

