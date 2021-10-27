#include "./Long4.hpp"

namespace android::renderscript
{
	// Fields
	jlong Long4::w()
	{
		return __thiz.getField<jlong>(
			"w"
		);
	}
	jlong Long4::x()
	{
		return __thiz.getField<jlong>(
			"x"
		);
	}
	jlong Long4::y()
	{
		return __thiz.getField<jlong>(
			"y"
		);
	}
	jlong Long4::z()
	{
		return __thiz.getField<jlong>(
			"z"
		);
	}
	
	Long4::Long4(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Long4::Long4()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long4",
			"()V"
		);
	}
	Long4::Long4(jlong &arg0, jlong &arg1, jlong &arg2, jlong &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long4",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::renderscript

