#include "./Float4.hpp"

namespace android::renderscript
{
	// Fields
	jfloat Float4::w()
	{
		return __thiz.getField<jfloat>(
			"w"
		);
	}
	jfloat Float4::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat Float4::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	jfloat Float4::z()
	{
		return __thiz.getField<jfloat>(
			"z"
		);
	}
	
	Float4::Float4(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Float4::Float4()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float4",
			"()V"
		);
	}
	Float4::Float4(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float4",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::renderscript

