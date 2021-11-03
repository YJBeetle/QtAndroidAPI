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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangingResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingResultCallback(QAndroidJniObject obj);
		
		// Constructors
		RangingResultCallback();
		
		// Methods
		void onRangingFailure(jint arg0) const;
		void onRangingResults(JObject arg0) const;
	};
} // namespace android::net::wifi::rtt

