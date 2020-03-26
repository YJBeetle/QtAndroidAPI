#pragma once

#ifndef JAVA_UTIL_RANDOM
#define JAVA_UTIL_RANDOM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class Random : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0);
		
		// Methods
		jdouble nextDouble();
		jint nextInt();
		jint nextInt(jint arg0);
		jlong nextLong();
		void setSeed(jlong arg0);
		jboolean nextBoolean();
		jfloat nextFloat();
		jdouble nextGaussian();
		QAndroidJniObject ints(jint arg0, jint arg1);
		QAndroidJniObject ints(jlong arg0, jint arg1, jint arg2);
		QAndroidJniObject ints();
		QAndroidJniObject ints(jlong arg0);
		QAndroidJniObject longs(jlong arg0, jlong arg1, jlong arg2);
		QAndroidJniObject longs(jlong arg0, jlong arg1);
		QAndroidJniObject longs();
		QAndroidJniObject longs(jlong arg0);
		QAndroidJniObject doubles(jlong arg0, jdouble arg1, jdouble arg2);
		QAndroidJniObject doubles(jdouble arg0, jdouble arg1);
		QAndroidJniObject doubles();
		QAndroidJniObject doubles(jlong arg0);
		void nextBytes(jbyteArray arg0);
	};
} // namespace __jni_impl::java::util

#include "concurrent/atomic/AtomicLong.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Random::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Random",
			"()V");
	}
	void Random::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Random",
			"(J)V",
			arg0);
	}
	
	// Methods
	jdouble Random::nextDouble()
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jint Random::nextInt()
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint Random::nextInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jlong Random::nextLong()
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	void Random::setSeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
	jboolean Random::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jfloat Random::nextFloat()
	{
		return __thiz.callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jdouble Random::nextGaussian()
	{
		return __thiz.callMethod<jdouble>(
			"nextGaussian",
			"()D"
		);
	}
	QAndroidJniObject Random::ints(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Random::ints(jlong arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Random::ints()
	{
		return __thiz.callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject Random::ints(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	QAndroidJniObject Random::longs(jlong arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Random::longs(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Random::longs()
	{
		return __thiz.callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	QAndroidJniObject Random::longs(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	QAndroidJniObject Random::doubles(jlong arg0, jdouble arg1, jdouble arg2)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Random::doubles(jdouble arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Random::doubles()
	{
		return __thiz.callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	QAndroidJniObject Random::doubles(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	void Random::nextBytes(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Random : public __jni_impl::java::util::Random
	{
	public:
		Random(QAndroidJniObject obj) { __thiz = obj; }
		Random()
		{
			__constructor();
		}
		Random(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_RANDOM

