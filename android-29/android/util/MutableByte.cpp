#include "./MutableByte.hpp"

namespace android::util
{
	// Fields
	jbyte MutableByte::value()
	{
		return __thiz.getField<jbyte>(
			"value"
		);
	}
	
	MutableByte::MutableByte(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableByte::MutableByte(jbyte &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableByte",
			"(B)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

