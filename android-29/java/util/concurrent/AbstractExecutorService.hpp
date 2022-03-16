#pragma once

#include "../../../JObject.hpp"
#include "../ArrayList.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./AbstractExecutorService.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline AbstractExecutorService::AbstractExecutorService()
		: JObject(
			"java.util.concurrent.AbstractExecutorService",
			"()V"
		) {}
	
	// Methods
	inline JObject AbstractExecutorService::invokeAll(JObject arg0) const
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject AbstractExecutorService::invokeAll(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JObject AbstractExecutorService::invokeAny(JObject arg0) const
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject AbstractExecutorService::invokeAny(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JObject AbstractExecutorService::submit(JObject arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	inline JObject AbstractExecutorService::submit(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
} // namespace java::util::concurrent

// Base class headers

