#include "./Byte2.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte2::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	jbyte Byte2::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	Byte2::Byte2(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Byte2::Byte2()
		: __JniBaseClass(
			"android.renderscript.Byte2",
			"()V"
		) {}
	Byte2::Byte2(jbyte arg0, jbyte arg1)
		: __JniBaseClass(
			"android.renderscript.Byte2",
			"(BB)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

