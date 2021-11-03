#include "./Short4.hpp"

namespace android::renderscript
{
	// Fields
	jshort Short4::w()
	{
		return getField<jshort>(
			"w"
		);
	}
	jshort Short4::x()
	{
		return getField<jshort>(
			"x"
		);
	}
	jshort Short4::y()
	{
		return getField<jshort>(
			"y"
		);
	}
	jshort Short4::z()
	{
		return getField<jshort>(
			"z"
		);
	}
	
	// QJniObject forward
	Short4::Short4(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Short4::Short4()
		: JObject(
			"android.renderscript.Short4",
			"()V"
		) {}
	Short4::Short4(jshort arg0, jshort arg1, jshort arg2, jshort arg3)
		: JObject(
			"android.renderscript.Short4",
			"(SSSS)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

