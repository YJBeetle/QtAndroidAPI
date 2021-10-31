#include "../ArrayList.hpp"
#include "./TimeUnit.hpp"
#include "./AbstractExecutorService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractExecutorService::AbstractExecutorService(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AbstractExecutorService::AbstractExecutorService()
		: __JniBaseClass(
			"java.util.concurrent.AbstractExecutorService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass AbstractExecutorService::invokeAll(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.object()
		);
	}
	__JniBaseClass AbstractExecutorService::invokeAll(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jobject AbstractExecutorService::invokeAny(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject AbstractExecutorService::invokeAny(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2.object()
		).object<jobject>();
	}
	__JniBaseClass AbstractExecutorService::submit(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	__JniBaseClass AbstractExecutorService::submit(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::util::concurrent

