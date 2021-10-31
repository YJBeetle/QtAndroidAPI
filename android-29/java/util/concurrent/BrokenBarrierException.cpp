#include "./BrokenBarrierException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	BrokenBarrierException::BrokenBarrierException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BrokenBarrierException::BrokenBarrierException()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.BrokenBarrierException",
			"()V"
		);
	}
	BrokenBarrierException::BrokenBarrierException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.BrokenBarrierException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util::concurrent

