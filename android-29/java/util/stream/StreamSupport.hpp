#pragma once

#ifndef JAVA_UTIL_STREAM_STREAMSUPPORT
#define JAVA_UTIL_STREAM_STREAMSUPPORT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::stream
{
	class StreamSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject doubleStream(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject doubleStream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject intStream(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject intStream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject longStream(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject longStream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject stream(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject stream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2);
	};
} // namespace __jni_impl::java::util::stream


namespace __jni_impl::java::util::stream
{
	// Fields
	
	// Constructors
	void StreamSupport::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.stream.StreamSupport",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject StreamSupport::doubleStream(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/Spliterator$OfDouble;Z)Ljava/util/stream/DoubleStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::doubleStream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/DoubleStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StreamSupport::intStream(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/Spliterator$OfInt;Z)Ljava/util/stream/IntStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::intStream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/IntStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StreamSupport::longStream(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/Spliterator$OfLong;Z)Ljava/util/stream/LongStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::longStream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/LongStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StreamSupport::stream(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/Spliterator;Z)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::stream(__jni_impl::__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::stream

namespace java::util::stream
{
	class StreamSupport : public __jni_impl::java::util::stream::StreamSupport
	{
	public:
		StreamSupport(QAndroidJniObject obj) { __thiz = obj; }
		StreamSupport()
		{
			__constructor();
		}
	};
} // namespace java::util::stream

#endif // JAVA_UTIL_STREAM_STREAMSUPPORT

