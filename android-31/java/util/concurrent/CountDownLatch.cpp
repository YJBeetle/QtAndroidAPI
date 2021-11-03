#include "./TimeUnit.hpp"
#include "./CountDownLatch.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	CountDownLatch::CountDownLatch(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CountDownLatch::CountDownLatch(jint arg0)
		: JObject(
			"java.util.concurrent.CountDownLatch",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jboolean CountDownLatch::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void CountDownLatch::await()
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	void CountDownLatch::countDown()
	{
		callMethod<void>(
			"countDown",
			"()V"
		);
	}
	jlong CountDownLatch::getCount()
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jstring CountDownLatch::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

