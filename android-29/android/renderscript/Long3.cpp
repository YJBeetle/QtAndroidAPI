#include "./Long3.hpp"

namespace android::renderscript
{
	// Fields
	jlong Long3::x()
	{
		return __thiz.getField<jlong>(
			"x"
		);
	}
	jlong Long3::y()
	{
		return __thiz.getField<jlong>(
			"y"
		);
	}
	jlong Long3::z()
	{
		return __thiz.getField<jlong>(
			"z"
		);
	}
	
	Long3::Long3(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Long3::Long3()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long3",
			"()V"
		);
	}
	Long3::Long3(jlong &arg0, jlong &arg1, jlong &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long3",
			"(JJJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::renderscript

