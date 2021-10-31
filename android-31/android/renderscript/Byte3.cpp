#include "./Byte3.hpp"

namespace android::renderscript
{
	// Fields
	jbyte Byte3::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	jbyte Byte3::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	jbyte Byte3::z()
	{
		return getField<jbyte>(
			"z"
		);
	}
	
	// QJniObject forward
	Byte3::Byte3(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Byte3::Byte3()
		: __JniBaseClass(
			"android.renderscript.Byte3",
			"()V"
		) {}
	Byte3::Byte3(jbyte arg0, jbyte arg1, jbyte arg2)
		: __JniBaseClass(
			"android.renderscript.Byte3",
			"(BBB)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

