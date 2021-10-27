#include "./Short3.hpp"

namespace android::renderscript
{
	// Fields
	jshort Short3::x()
	{
		return __thiz.getField<jshort>(
			"x"
		);
	}
	jshort Short3::y()
	{
		return __thiz.getField<jshort>(
			"y"
		);
	}
	jshort Short3::z()
	{
		return __thiz.getField<jshort>(
			"z"
		);
	}
	
	Short3::Short3(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Short3::Short3()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short3",
			"()V"
		);
	}
	Short3::Short3(jshort &arg0, jshort &arg1, jshort &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short3",
			"(SSS)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::renderscript

