#include "./TimeUnit.hpp"
#include "./CountDownLatch.hpp"

namespace java::util::concurrent
{
	// Fields
	
	CountDownLatch::CountDownLatch(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CountDownLatch::CountDownLatch(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CountDownLatch",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jboolean CountDownLatch::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CountDownLatch::await()
	{
		__thiz.callMethod<void>(
			"await",
			"()V"
		);
	}
	void CountDownLatch::countDown()
	{
		__thiz.callMethod<void>(
			"countDown",
			"()V"
		);
	}
	jlong CountDownLatch::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jstring CountDownLatch::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

