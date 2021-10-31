#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class StatsLog : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatsLog(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StatsLog(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean logBinaryPushStateChanged(jstring arg0, jlong arg1, jint arg2, jint arg3, jlongArray arg4);
		static jboolean logEvent(jint arg0);
		static jboolean logStart(jint arg0);
		static jboolean logStop(jint arg0);
	};
} // namespace android::util

