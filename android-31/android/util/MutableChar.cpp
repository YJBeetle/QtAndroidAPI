#include "./MutableChar.hpp"

namespace android::util
{
	// Fields
	jchar MutableChar::value()
	{
		return getField<jchar>(
			"value"
		);
	}
	
	// Constructors
	MutableChar::MutableChar(jchar arg0)
		: JObject(
			"android.util.MutableChar",
			"(C)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

