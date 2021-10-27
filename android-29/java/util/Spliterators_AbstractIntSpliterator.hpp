#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Spliterators_AbstractIntSpliterator : public __JniBaseClass
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
	void Spliterators_AbstractIntSpliterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Spliterators$AbstractIntSpliterator",
			"(V)V");
	}
	
	// Methods
	jint Spliterators_AbstractIntSpliterator::characteristics()
	{
		return __thiz.callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractIntSpliterator::estimateSize()
	{
		return __thiz.callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	QAndroidJniObject Spliterators_AbstractIntSpliterator::trySplit()
	{
		return __thiz.callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Spliterators_AbstractIntSpliterator : public __jni_impl::java::util::Spliterators_AbstractIntSpliterator
	{
	public:
		Spliterators_AbstractIntSpliterator(QAndroidJniObject obj) { __thiz = obj; }
		Spliterators_AbstractIntSpliterator()
		{
			__constructor();
		}
	};
} // namespace java::util

