#include "../../../JObject.hpp"
#include "../ArrayList.hpp"
#include "./TimeUnit.hpp"
#include "./AbstractExecutorService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	AbstractExecutorService::AbstractExecutorService(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractExecutorService::AbstractExecutorService()
		: JObject(
			"java.util.concurrent.AbstractExecutorService",
			"()V"
		) {}
	
	// Methods
	JObject AbstractExecutorService::invokeAll(JObject arg0) const
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject AbstractExecutorService::invokeAll(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject AbstractExecutorService::invokeAny(JObject arg0) const
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject AbstractExecutorService::invokeAny(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject AbstractExecutorService::submit(JObject arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	JObject AbstractExecutorService::submit(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
} // namespace java::util::concurrent

