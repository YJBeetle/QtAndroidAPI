#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Date.def.hpp"
#include "./TimerTask.def.hpp"
#include "./concurrent/atomic/AtomicInteger.def.hpp"
#include "./Timer.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Timer::Timer()
		: JObject(
			"java.util.Timer",
			"()V"
		) {}
	inline Timer::Timer(jboolean arg0)
		: JObject(
			"java.util.Timer",
			"(Z)V",
			arg0
		) {}
	inline Timer::Timer(JString arg0)
		: JObject(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Timer::Timer(JString arg0, jboolean arg1)
		: JObject(
			"java.util.Timer",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline void Timer::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jint Timer::purge() const
	{
		return callMethod<jint>(
			"purge",
			"()I"
		);
	}
	inline void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Timer::schedule(java::util::TimerTask arg0, jlong arg1) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void Timer::schedule(java::util::TimerTask arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace java::util

// Base class headers

