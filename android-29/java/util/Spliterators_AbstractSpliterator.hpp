#pragma once

#ifndef JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR
#define JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Spliterators_AbstractSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		QAndroidJniObject trySplit();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Spliterators_AbstractSpliterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Spliterators$AbstractSpliterator",
			"(V)V");
	}
	
	// Methods
	jint Spliterators_AbstractSpliterator::characteristics()
	{
		return __thiz.callMethod<jint>(
			"characteristics",
			"()I");
	}
	jlong Spliterators_AbstractSpliterator::estimateSize()
	{
		return __thiz.callMethod<jlong>(
			"estimateSize",
			"()J");
	}
	QAndroidJniObject Spliterators_AbstractSpliterator::trySplit()
	{
		return __thiz.callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Spliterators_AbstractSpliterator : public __jni_impl::java::util::Spliterators_AbstractSpliterator
	{
	public:
		Spliterators_AbstractSpliterator(QAndroidJniObject obj) { __thiz = obj; }
		Spliterators_AbstractSpliterator()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR

