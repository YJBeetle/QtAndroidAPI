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
	
	// QJniObject forward
	MutableByte::MutableByte(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableByte::MutableByte(jbyte arg0)
		: __JniBaseClass(
			"android.util.MutableByte",
			"(B)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

