#include "./Byte2.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte2::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	jbyte Byte2::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	
	// Constructors
	Byte2::Byte2()
		: JObject(
			"android.renderscript.Byte2",
			"()V"
		) {}
	Byte2::Byte2(jbyte arg0, jbyte arg1)
		: JObject(
			"android.renderscript.Byte2",
			"(BB)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

