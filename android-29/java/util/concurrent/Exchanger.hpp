#pragma once

#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "./TimeUnit.def.hpp"
#include "./Exchanger.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline Exchanger::Exchanger()
		: JObject(
			"java.util.concurrent.Exchanger",
			"()V"
		) {}
	
	// Methods
	inline JObject Exchanger::exchange(JObject arg0) const
	{
		return callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject Exchanger::exchange(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
