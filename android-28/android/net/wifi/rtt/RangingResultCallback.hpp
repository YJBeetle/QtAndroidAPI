#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::rtt
{
	class RangingResultCallback : public JObject
	{
	public:
		// Fields
		static jint STATUS_CODE_FAIL();
		static jint STATUS_CODE_FAIL_RTT_NOT_AVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingResultCallback(QJniObject obj);
		
		// Constructors
		RangingResultCallback();
		
		// Methods
		void onRangingFailure(jint arg0);
		void onRangingResults(JObject arg0);
	};
} // namespace android::net::wifi::rtt

