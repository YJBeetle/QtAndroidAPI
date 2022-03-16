#include "./MutableByte.hpp"

namespace android::util
{
	// Fields
	jbyte MutableByte::value()
	{
		return getField<jbyte>(
			"value"
		);
	}
	
	// Constructors
	MutableByte::MutableByte(jbyte arg0)
		: JObject(
			"android.util.MutableByte",
			"(B)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

