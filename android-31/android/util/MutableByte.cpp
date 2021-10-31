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
	MutableByte::MutableByte(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableByte::MutableByte(jbyte arg0)
		: __JniBaseClass(
			"android.util.MutableByte",
			"(B)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

