#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class StatsLog : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatsLog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatsLog(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean logEvent(jint arg0);
		static jboolean logStart(jint arg0);
		static jboolean logStop(jint arg0);
	};
} // namespace android::util

