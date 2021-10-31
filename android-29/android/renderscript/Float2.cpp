#include "./Float2.hpp"

namespace android::renderscript
{
	// Fields
	jfloat Float2::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat Float2::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	
	Float2::Float2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Float2::Float2()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float2",
			"()V"
		);
	}
	Float2::Float2(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float2",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::renderscript

