#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class SystemClock : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SystemClock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemClock(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jlong currentThreadTimeMillis();
		static jlong elapsedRealtime();
		static jlong elapsedRealtimeNanos();
		static jboolean setCurrentTimeMillis(jlong arg0);
		static void sleep(jlong arg0);
		static jlong uptimeMillis();
	};
} // namespace android::os

