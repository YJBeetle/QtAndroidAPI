#include "../ArrayList.hpp"
#include "./TimeUnit.hpp"
#include "./AbstractExecutorService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	AbstractExecutorService::AbstractExecutorService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractExecutorService::AbstractExecutorService()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.AbstractExecutorService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AbstractExecutorService::invokeAll(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractExecutorService::invokeAll(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jobject AbstractExecutorService::invokeAny(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject AbstractExecutorService::invokeAny(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject AbstractExecutorService::submit(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractExecutorService::submit(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace java::util::concurrent

