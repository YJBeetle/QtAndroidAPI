#include "./RangeValueIterator_Element.hpp"

namespace android::icu::util
{
	// Fields
	jint RangeValueIterator_Element::limit()
	{
		return getField<jint>(
			"limit"
		);
	}
	jint RangeValueIterator_Element::start()
	{
		return getField<jint>(
			"start"
		);
	}
	jint RangeValueIterator_Element::value()
	{
		return getField<jint>(
			"value"
		);
	}
	
	// QJniObject forward
	RangeValueIterator_Element::RangeValueIterator_Element(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RangeValueIterator_Element::RangeValueIterator_Element()
		: JObject(
			"android.icu.util.RangeValueIterator$Element",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::util

