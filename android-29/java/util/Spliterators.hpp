#pragma once

#ifndef JAVA_UTIL_SPLITERATORS
#define JAVA_UTIL_SPLITERATORS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Spliterators : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject emptyDoubleSpliterator();
		static QAndroidJniObject emptyIntSpliterator();
		static QAndroidJniObject emptyLongSpliterator();
		static QAndroidJniObject emptySpliterator();
		static QAndroidJniObject iterator(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject spliterator(jobjectArray arg0, jint arg1);
		static QAndroidJniObject spliterator(__jni_impl::__JniBaseClass arg0, jint arg1);
		static QAndroidJniObject spliterator(__jni_impl::__JniBaseClass arg0, jlong arg1, jint arg2);
		static QAndroidJniObject spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliterator(jdoubleArray arg0, jint arg1);
		static QAndroidJniObject spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliterator(jintArray arg0, jint arg1);
		static QAndroidJniObject spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliterator(jlongArray arg0, jint arg1);
		static QAndroidJniObject spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliteratorUnknownSize(__jni_impl::__JniBaseClass arg0, jint arg1);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Spliterators::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Spliterators",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Spliterators::emptyDoubleSpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyDoubleSpliterator",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
	QAndroidJniObject Spliterators::emptyIntSpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyIntSpliterator",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
	QAndroidJniObject Spliterators::emptyLongSpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyLongSpliterator",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
	QAndroidJniObject Spliterators::emptySpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptySpliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject Spliterators::iterator(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"iterator",
			"(Ljava/util/Spliterator;)Ljava/util/Iterator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Spliterators::spliterator(jobjectArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;I)Ljava/util/Spliterator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Collection;I)Ljava/util/Spliterator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(__jni_impl::__JniBaseClass arg0, jlong arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Iterator;JI)Ljava/util/Spliterator;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Spliterators::spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;III)Ljava/util/Spliterator;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliterator(jdoubleArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DI)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DIII)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliterator(jintArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([II)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([IIII)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliterator(jlongArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JI)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JIII)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliteratorUnknownSize(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliteratorUnknownSize",
			"(Ljava/util/Iterator;I)Ljava/util/Spliterator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Spliterators : public __jni_impl::java::util::Spliterators
	{
	public:
		Spliterators(QAndroidJniObject obj) { __thiz = obj; }
		Spliterators()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_SPLITERATORS

