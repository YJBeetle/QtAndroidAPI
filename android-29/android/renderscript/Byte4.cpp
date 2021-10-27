#include "./Byte4.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte4::w()
	{
		return __thiz.getField<jbyte>(
			"w"
		);
	}
	jbyte Byte4::x()
	{
		return __thiz.getField<jbyte>(
			"x"
		);
	}
	jbyte Byte4::y()
	{
		return __thiz.getField<jbyte>(
			"y"
		);
	}
	jbyte Byte4::z()
	{
		return __thiz.getField<jbyte>(
			"z"
		);
	}
	
	Byte4::Byte4(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Byte4::Byte4()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte4",
			"()V"
		);
	}
	Byte4::Byte4(jbyte &arg0, jbyte &arg1, jbyte &arg2, jbyte &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte4",
			"(BBBB)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::renderscript

