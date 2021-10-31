#include "./Int3.hpp"

namespace android::renderscript
{
	// Fields
	jint Int3::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Int3::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	jint Int3::z()
	{
		return __thiz.getField<jint>(
			"z"
		);
	}
	
	Int3::Int3(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Int3::Int3()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int3",
			"()V"
		);
	}
	Int3::Int3(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int3",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::renderscript

