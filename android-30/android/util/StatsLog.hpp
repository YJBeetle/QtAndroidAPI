#pragma once

#include "../../JObject.hpp"

class JLongArray;
class JString;

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
		static jboolean logBinaryPushStateChanged(JString arg0, jlong arg1, jint arg2, jint arg3, JLongArray arg4);
		static jboolean logEvent(jint arg0);
		static jboolean logStart(jint arg0);
		static jboolean logStop(jint arg0);
	};
} // namespace android::util

