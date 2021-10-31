#include "./Script_LaunchOptions.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Script_LaunchOptions::Script_LaunchOptions(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Script_LaunchOptions::Script_LaunchOptions()
		: __JniBaseClass(
			"android.renderscript.Script$LaunchOptions",
			"()V"
		) {}
	
	// Methods
	jint Script_LaunchOptions::getXEnd()
	{
		return callMethod<jint>(
			"getXEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getXStart()
	{
		return callMethod<jint>(
			"getXStart",
			"()I"
		);
	}
	jint Script_LaunchOptions::getYEnd()
	{
		return callMethod<jint>(
			"getYEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getYStart()
	{
		return callMethod<jint>(
			"getYStart",
			"()I"
		);
	}
	jint Script_LaunchOptions::getZEnd()
	{
		return callMethod<jint>(
			"getZEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getZStart()
	{
		return callMethod<jint>(
			"getZStart",
			"()I"
		);
	}
	android::renderscript::Script_LaunchOptions Script_LaunchOptions::setX(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setX",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	android::renderscript::Script_LaunchOptions Script_LaunchOptions::setY(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setY",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	android::renderscript::Script_LaunchOptions Script_LaunchOptions::setZ(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setZ",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

