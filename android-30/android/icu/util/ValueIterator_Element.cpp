#include "./ValueIterator_Element.hpp"

namespace android::icu::util
{
	// Fields
	jint ValueIterator_Element::integer()
	{
		return getField<jint>(
			"integer"
		);
	}
	jobject ValueIterator_Element::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QJniObject forward
	ValueIterator_Element::ValueIterator_Element(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ValueIterator_Element::ValueIterator_Element()
		: __JniBaseClass(
			"android.icu.util.ValueIterator$Element",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::util

