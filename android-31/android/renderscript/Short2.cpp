#include "./Short2.hpp"

namespace android::renderscript
{
	// Fields
	jshort Short2::x()
	{
		return getField<jshort>(
			"x"
		);
	}
	jshort Short2::y()
	{
		return getField<jshort>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	Short2::Short2(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Short2::Short2()
		: JObject(
			"android.renderscript.Short2",
			"()V"
		) {}
	Short2::Short2(jshort arg0, jshort arg1)
		: JObject(
			"android.renderscript.Short2",
			"(SS)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

