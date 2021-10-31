#include "./Long4.hpp"

namespace android::renderscript
{
	// Fields
	jlong Long4::w()
	{
		return getField<jlong>(
			"w"
		);
	}
	jlong Long4::x()
	{
		return getField<jlong>(
			"x"
		);
	}
	jlong Long4::y()
	{
		return getField<jlong>(
			"y"
		);
	}
	jlong Long4::z()
	{
		return getField<jlong>(
			"z"
		);
	}
	
	// QJniObject forward
	Long4::Long4(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Long4::Long4()
		: __JniBaseClass(
			"android.renderscript.Long4",
			"()V"
		) {}
	Long4::Long4(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
		: __JniBaseClass(
			"android.renderscript.Long4",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

