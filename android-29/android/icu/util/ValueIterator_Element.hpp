#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class ValueIterator_Element : public __JniBaseClass
	{
	public:
		// Fields
		jint integer();
		jobject value();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	jint ValueIterator_Element::integer()
	{
		return __thiz.getField<jint>(
			"integer"
		);
	}
	jobject ValueIterator_Element::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void ValueIterator_Element::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ValueIterator$Element",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class ValueIterator_Element : public __jni_impl::android::icu::util::ValueIterator_Element
	{
	public:
		ValueIterator_Element(QAndroidJniObject obj) { __thiz = obj; }
		ValueIterator_Element()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

