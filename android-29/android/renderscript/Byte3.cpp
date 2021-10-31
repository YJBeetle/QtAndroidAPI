#include "./Byte3.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte3::x()
	{
		return __thiz.getField<jbyte>(
			"x"
		);
	}
	jbyte Byte3::y()
	{
		return __thiz.getField<jbyte>(
			"y"
		);
	}
	jbyte Byte3::z()
	{
		return __thiz.getField<jbyte>(
			"z"
		);
	}
	
	Byte3::Byte3(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Byte3::Byte3()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte3",
			"()V"
		);
	}
	Byte3::Byte3(jbyte arg0, jbyte arg1, jbyte arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte3",
			"(BBB)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::renderscript

