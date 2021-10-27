#include "./Byte2.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte2::x()
	{
		return __thiz.getField<jbyte>(
			"x"
		);
	}
	jbyte Byte2::y()
	{
		return __thiz.getField<jbyte>(
			"y"
		);
	}
	
	Byte2::Byte2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Byte2::Byte2()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte2",
			"()V"
		);
	}
	Byte2::Byte2(jbyte &arg0, jbyte &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte2",
			"(BB)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::renderscript

