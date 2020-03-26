#pragma once

#ifndef JAVA_UTIL_SPLITERATORS_ABSTRACTDOUBLESPLITERATOR
#define JAVA_UTIL_SPLITERATORS_ABSTRACTDOUBLESPLITERATOR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Spliterators_AbstractDoubleSpliterator : public __JniBaseClass
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
	void Spliterators_AbstractDoubleSpliterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Spliterators$AbstractDoubleSpliterator",
			"(V)V");
	}
	
	// Methods
	jint Spliterators_AbstractDoubleSpliterator::characteristics()
	{
		return __thiz.callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractDoubleSpliterator::estimateSize()
	{
		return __thiz.callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	QAndroidJniObject Spliterators_AbstractDoubleSpliterator::trySplit()
	{
		return __thiz.callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Spliterators_AbstractDoubleSpliterator : public __jni_impl::java::util::Spliterators_AbstractDoubleSpliterator
	{
	public:
		Spliterators_AbstractDoubleSpliterator(QAndroidJniObject obj) { __thiz = obj; }
		Spliterators_AbstractDoubleSpliterator()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_SPLITERATORS_ABSTRACTDOUBLESPLITERATOR

