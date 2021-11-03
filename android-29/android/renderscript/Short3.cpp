#include "./Short3.hpp"

namespace android::renderscript
{
	// Fields
	jshort Short3::x()
	{
		return getField<jshort>(
			"x"
		);
	}
	jshort Short3::y()
	{
		return getField<jshort>(
			"y"
		);
	}
	jshort Short3::z()
	{
		return getField<jshort>(
			"z"
		);
	}
	
	// QJniObject forward
	Short3::Short3(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Short3::Short3()
		: JObject(
			"android.renderscript.Short3",
			"()V"
		) {}
	Short3::Short3(jshort arg0, jshort arg1, jshort arg2)
		: JObject(
			"android.renderscript.Short3",
			"(SSS)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

