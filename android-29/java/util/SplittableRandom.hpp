#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace __jni_impl::java::util
{
	class SplittableRandom : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0);
		
		// Methods
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
		void nextBytes(jbyteArray arg0);
		jdouble nextDouble();
		jdouble nextDouble(jdouble arg0);
		jdouble nextDouble(jdouble arg0, jdouble arg1);
		jint nextInt();
		jint nextInt(jint arg0);
		jint nextInt(jint arg0, jint arg1);
		jlong nextLong();
		jlong nextLong(jlong arg0);
		jlong nextLong(jlong arg0, jlong arg1);
		QAndroidJniObject split();
	};
} // namespace __jni_impl::java::util

#include "concurrent/atomic/AtomicLong.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void SplittableRandom::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.SplittableRandom",
			"()V"
		);
	}
	void SplittableRandom::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.SplittableRandom",
			"(J)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject SplittableRandom::doubles()
	{
		return __thiz.callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	QAndroidJniObject SplittableRandom::doubles(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	QAndroidJniObject SplittableRandom::doubles(jdouble arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SplittableRandom::doubles(jlong arg0, jdouble arg1, jdouble arg2)
	{
		return __thiz.callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SplittableRandom::ints()
	{
		return __thiz.callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject SplittableRandom::ints(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	QAndroidJniObject SplittableRandom::ints(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SplittableRandom::ints(jlong arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SplittableRandom::longs()
	{
		return __thiz.callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	QAndroidJniObject SplittableRandom::longs(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	QAndroidJniObject SplittableRandom::longs(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SplittableRandom::longs(jlong arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean SplittableRandom::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	void SplittableRandom::nextBytes(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0
		);
	}
	jdouble SplittableRandom::nextDouble()
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jdouble SplittableRandom::nextDouble(jdouble arg0)
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	jdouble SplittableRandom::nextDouble(jdouble arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jint SplittableRandom::nextInt()
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint SplittableRandom::nextInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jint SplittableRandom::nextInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong SplittableRandom::nextLong()
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong SplittableRandom::nextLong(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"(J)J",
			arg0
		);
	}
	jlong SplittableRandom::nextLong(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SplittableRandom::split()
	{
		return __thiz.callObjectMethod(
			"split",
			"()Ljava/util/SplittableRandom;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class SplittableRandom : public __jni_impl::java::util::SplittableRandom
	{
	public:
		SplittableRandom(QAndroidJniObject obj) { __thiz = obj; }
		SplittableRandom()
		{
			__constructor();
		}
		SplittableRandom(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

