#pragma once

#include "../../JString.hpp"
#include "./TimingLogger.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline TimingLogger::TimingLogger(JString arg0, JString arg1)
		: JObject(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline void TimingLogger::addSplit(JString arg0) const
	{
		callMethod<void>(
			"addSplit",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TimingLogger::dumpToLog() const
	{
		callMethod<void>(
			"dumpToLog",
			"()V"
		);
	}
	inline void TimingLogger::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void TimingLogger::reset(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"reset",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::util

// Base class headers

