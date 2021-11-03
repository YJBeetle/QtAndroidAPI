#include "./Script_LaunchOptions.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Script_LaunchOptions::Script_LaunchOptions(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Script_LaunchOptions::Script_LaunchOptions()
		: JObject(
			"android.renderscript.Script$LaunchOptions",
			"()V"
		) {}
	
	// Methods
	jint Script_LaunchOptions::getXEnd() const
	{
		return callMethod<jint>(
			"getXEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getXStart() const
	{
		return callMethod<jint>(
			"getXStart",
			"()I"
		);
	}
	jint Script_LaunchOptions::getYEnd() const
	{
		return callMethod<jint>(
			"getYEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getYStart() const
	{
		return callMethod<jint>(
			"getYStart",
			"()I"
		);
	}
	jint Script_LaunchOptions::getZEnd() const
	{
		return callMethod<jint>(
			"getZEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getZStart() const
	{
		return callMethod<jint>(
			"getZStart",
			"()I"
		);
	}
	android::renderscript::Script_LaunchOptions Script_LaunchOptions::setX(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setX",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	android::renderscript::Script_LaunchOptions Script_LaunchOptions::setY(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setY",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	android::renderscript::Script_LaunchOptions Script_LaunchOptions::setZ(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setZ",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

