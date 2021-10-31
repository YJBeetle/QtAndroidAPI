#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::wifi::rtt
{
	class RangingResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_CODE_FAIL();
		static jint STATUS_CODE_FAIL_RTT_NOT_AVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingResultCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RangingResultCallback(QJniObject obj);
		
		// Constructors
		RangingResultCallback();
		
		// Methods
		void onRangingFailure(jint arg0);
		void onRangingResults(__JniBaseClass arg0);
	};
} // namespace android::net::wifi::rtt

