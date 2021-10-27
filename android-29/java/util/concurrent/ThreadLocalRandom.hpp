#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Random.hpp"

namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class Thread;
}
namespace java::lang
{
	class ThreadLocal;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util::concurrent
{
	class ThreadLocalRandom : public java::util::Random
	{
	public:
		// Fields
		
		ThreadLocalRandom(QAndroidJniObject obj);
		// Constructors
		ThreadLocalRandom() = default;
		
		// Methods
		static QAndroidJniObject current();
		QAndroidJniObject doubles();
		QAndroidJniObject doubles(jlong arg0);
		QAndroidJniObject doubles(jdouble arg0, jdouble arg1);
		QAndroidJniObject doubles(jlong arg0, jdouble arg1, jdouble arg2);
		QAndroidJniObject ints();
		QAndroidJniObject ints(jlong arg0);
		QAndroidJniObject ints(jint arg0, jint arg1);
		QAndroidJniObject ints(jlong arg0, jint arg1, jint arg2);
		QAndroidJniObject longs();
		QAndroidJniObject longs(jlong arg0);
		QAndroidJniObject longs(jlong arg0, jlong arg1);
		QAndroidJniObject longs(jlong arg0, jlong arg1, jlong arg2);
		jboolean nextBoolean();
		jdouble nextDouble();
		jdouble nextDouble(jdouble arg0);
		jdouble nextDouble(jdouble arg0, jdouble arg1);
		jfloat nextFloat();
		jdouble nextGaussian();
		jint nextInt();
		jint nextInt(jint arg0);
		jint nextInt(jint arg0, jint arg1);
		jlong nextLong();
		jlong nextLong(jlong arg0);
		jlong nextLong(jlong arg0, jlong arg1);
		void setSeed(jlong arg0);
	};
} // namespace java::util::concurrent

