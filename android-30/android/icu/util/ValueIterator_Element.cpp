#include "../../../JObject.hpp"
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
	JObject ValueIterator_Element::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/Object;"
		);
	}
	
	// QJniObject forward
	ValueIterator_Element::ValueIterator_Element(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ValueIterator_Element::ValueIterator_Element()
		: JObject(
			"android.icu.util.ValueIterator$Element",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::util

