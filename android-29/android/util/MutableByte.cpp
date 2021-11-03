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
	
	// QAndroidJniObject forward
	MutableByte::MutableByte(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MutableByte::MutableByte(jbyte arg0)
		: JObject(
			"android.util.MutableByte",
			"(B)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

