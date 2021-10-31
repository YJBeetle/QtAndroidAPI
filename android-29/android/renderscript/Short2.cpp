#include "./Short2.hpp"

namespace android::renderscript
{
	// Fields
	jshort Short2::x()
	{
		return __thiz.getField<jshort>(
			"x"
		);
	}
	jshort Short2::y()
	{
		return __thiz.getField<jshort>(
			"y"
		);
	}
	
	Short2::Short2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Short2::Short2()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short2",
			"()V"
		);
	}
	Short2::Short2(jshort arg0, jshort arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short2",
			"(SS)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::renderscript

