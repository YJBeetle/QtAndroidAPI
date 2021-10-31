#include "./Double4.hpp"

namespace android::renderscript
{
	// Fields
	jdouble Double4::w()
	{
		return getField<jdouble>(
			"w"
		);
	}
	jdouble Double4::x()
	{
		return getField<jdouble>(
			"x"
		);
	}
	jdouble Double4::y()
	{
		return getField<jdouble>(
			"y"
		);
	}
	jdouble Double4::z()
	{
		return getField<jdouble>(
			"z"
		);
	}
	
	// QJniObject forward
	Double4::Double4(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Double4::Double4()
		: __JniBaseClass(
			"android.renderscript.Double4",
			"()V"
		) {}
	Double4::Double4(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
		: __JniBaseClass(
			"android.renderscript.Double4",
			"(DDDD)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

