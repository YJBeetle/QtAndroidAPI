#include "./RangeValueIterator_Element.hpp"

namespace android::icu::util
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
	
	RangeValueIterator_Element::RangeValueIterator_Element(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RangeValueIterator_Element::RangeValueIterator_Element()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.RangeValueIterator$Element",
			"()V"
		);
	}
	
	// Methods
} // namespace android::icu::util

