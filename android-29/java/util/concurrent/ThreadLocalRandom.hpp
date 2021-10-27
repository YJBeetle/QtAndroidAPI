#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Random.hpp"

namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::lang
{
	class ThreadLocal;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace __jni_impl::java::util::concurrent
{
	class ThreadLocalRandom : public __jni_impl::java::util::Random
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
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
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectOutputStream.hpp"
#include "../../lang/Thread.hpp"
#include "../../lang/ThreadLocal.hpp"
#include "../../security/AccessControlContext.hpp"
#include "atomic/AtomicInteger.hpp"
#include "atomic/AtomicLong.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ThreadLocalRandom::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadLocalRandom",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ThreadLocalRandom::current()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ThreadLocalRandom",
			"current",
			"()Ljava/util/concurrent/ThreadLocalRandom;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles()
	{
		return __thiz.callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles(jdouble arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles(jlong arg0, jdouble arg1, jdouble arg2)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints()
	{
		return __thiz.callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints(jlong arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs()
	{
		return __thiz.callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs(jlong arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean ThreadLocalRandom::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jdouble ThreadLocalRandom::nextDouble()
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jdouble ThreadLocalRandom::nextDouble(jdouble arg0)
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	jdouble ThreadLocalRandom::nextDouble(jdouble arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat ThreadLocalRandom::nextFloat()
	{
		return __thiz.callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jdouble ThreadLocalRandom::nextGaussian()
	{
		return __thiz.callMethod<jdouble>(
			"nextGaussian",
			"()D"
		);
	}
	jint ThreadLocalRandom::nextInt()
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint ThreadLocalRandom::nextInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jint ThreadLocalRandom::nextInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong ThreadLocalRandom::nextLong()
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong ThreadLocalRandom::nextLong(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"(J)J",
			arg0
		);
	}
	jlong ThreadLocalRandom::nextLong(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	void ThreadLocalRandom::setSeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ThreadLocalRandom : public __jni_impl::java::util::concurrent::ThreadLocalRandom
	{
	public:
		ThreadLocalRandom(QAndroidJniObject obj) { __thiz = obj; }
		ThreadLocalRandom()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

