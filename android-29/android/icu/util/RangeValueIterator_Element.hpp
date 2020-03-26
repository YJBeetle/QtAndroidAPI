#pragma once

#ifndef ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT
#define ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class RangeValueIterator_Element : public __JniBaseClass
	{
	public:
		// Fields
		jint limit();
		jint start();
		jint value();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	jint RangeValueIterator_Element::limit()
	{
		return __thiz.getField<jint>(
			"limit"
		);
	}
	jint RangeValueIterator_Element::start()
	{
		return __thiz.getField<jint>(
			"start"
		);
	}
	jint RangeValueIterator_Element::value()
	{
		return __thiz.getField<jint>(
			"value"
		);
	}
	
	// Constructors
	void RangeValueIterator_Element::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.RangeValueIterator$Element",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class RangeValueIterator_Element : public __jni_impl::android::icu::util::RangeValueIterator_Element
	{
	public:
		RangeValueIterator_Element(QAndroidJniObject obj) { __thiz = obj; }
		RangeValueIterator_Element()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT

