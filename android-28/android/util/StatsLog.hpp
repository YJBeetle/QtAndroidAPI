#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class StatsLog : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StatsLog(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StatsLog(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean logEvent(jint arg0);
		static jboolean logStart(jint arg0);
		static jboolean logStop(jint arg0);
	};
} // namespace android::util

