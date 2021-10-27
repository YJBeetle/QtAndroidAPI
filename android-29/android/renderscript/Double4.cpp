#include "./Double4.hpp"

namespace android::renderscript
{
	// Fields
	jdouble Double4::w()
	{
		return __thiz.getField<jdouble>(
			"w"
		);
	}
	jdouble Double4::x()
	{
		return __thiz.getField<jdouble>(
			"x"
		);
	}
	jdouble Double4::y()
	{
		return __thiz.getField<jdouble>(
			"y"
		);
	}
	jdouble Double4::z()
	{
		return __thiz.getField<jdouble>(
			"z"
		);
	}
	
	Double4::Double4(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Double4::Double4()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double4",
			"()V"
		);
	}
	Double4::Double4(jdouble &arg0, jdouble &arg1, jdouble &arg2, jdouble &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double4",
			"(DDDD)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::renderscript

