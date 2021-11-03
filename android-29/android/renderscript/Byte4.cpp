#include "./Byte4.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte4::w()
	{
		return getField<jbyte>(
			"w"
		);
	}
	jbyte Byte4::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	jbyte Byte4::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	jbyte Byte4::z()
	{
		return getField<jbyte>(
			"z"
		);
	}
	
	// QJniObject forward
	Byte4::Byte4(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Byte4::Byte4()
		: JObject(
			"android.renderscript.Byte4",
			"()V"
		) {}
	Byte4::Byte4(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3)
		: JObject(
			"android.renderscript.Byte4",
			"(BBBB)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

