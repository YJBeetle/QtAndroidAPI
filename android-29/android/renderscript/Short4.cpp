#include "./Short4.hpp"

namespace android::renderscript
{
	// Fields
	jshort Short4::w()
	{
		return __thiz.getField<jshort>(
			"w"
		);
	}
	jshort Short4::x()
	{
		return __thiz.getField<jshort>(
			"x"
		);
	}
	jshort Short4::y()
	{
		return __thiz.getField<jshort>(
			"y"
		);
	}
	jshort Short4::z()
	{
		return __thiz.getField<jshort>(
			"z"
		);
	}
	
	Short4::Short4(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Short4::Short4()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short4",
			"()V"
		);
	}
	Short4::Short4(jshort &arg0, jshort &arg1, jshort &arg2, jshort &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short4",
			"(SSSS)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::renderscript

