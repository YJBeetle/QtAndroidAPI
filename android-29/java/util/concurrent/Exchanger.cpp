#include "./TimeUnit.hpp"
#include "./Exchanger.hpp"

namespace java::util::concurrent
{
	// Fields
	
	Exchanger::Exchanger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Exchanger::Exchanger()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Exchanger",
			"()V"
		);
	}
	
	// Methods
	jobject Exchanger::exchange(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Exchanger::exchange(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
} // namespace java::util::concurrent

