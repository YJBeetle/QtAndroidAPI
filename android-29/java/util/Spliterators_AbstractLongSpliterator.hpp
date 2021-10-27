#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Spliterators_AbstractLongSpliterator : public __JniBaseClass
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
	void Spliterators_AbstractLongSpliterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Spliterators$AbstractLongSpliterator",
			"(V)V");
	}
	
	// Methods
	jint Spliterators_AbstractLongSpliterator::characteristics()
	{
		return __thiz.callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractLongSpliterator::estimateSize()
	{
		return __thiz.callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	QAndroidJniObject Spliterators_AbstractLongSpliterator::trySplit()
	{
		return __thiz.callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Spliterators_AbstractLongSpliterator : public __jni_impl::java::util::Spliterators_AbstractLongSpliterator
	{
	public:
		Spliterators_AbstractLongSpliterator(QAndroidJniObject obj) { __thiz = obj; }
		Spliterators_AbstractLongSpliterator()
		{
			__constructor();
		}
	};
} // namespace java::util

