#include "./Float3.hpp"

namespace android::renderscript
{
	// Fields
	jfloat Float3::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat Float3::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	jfloat Float3::z()
	{
		return __thiz.getField<jfloat>(
			"z"
		);
	}
	
	Float3::Float3(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Float3::Float3()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float3",
			"()V"
		);
	}
	Float3::Float3(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float3",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::renderscript

