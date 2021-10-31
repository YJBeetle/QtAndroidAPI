#include "./TimeUnit.hpp"
#include "./Exchanger.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	Exchanger::Exchanger(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Exchanger::Exchanger()
		: __JniBaseClass(
			"java.util.concurrent.Exchanger",
			"()V"
		) {}
	
	// Methods
	jobject Exchanger::exchange(jobject arg0)
	{
		return callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Exchanger::exchange(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
} // namespace java::util::concurrent

