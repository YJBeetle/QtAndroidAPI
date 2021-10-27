#include "./Script_LaunchOptions.hpp"

namespace android::renderscript
{
	// Fields
	
	Script_LaunchOptions::Script_LaunchOptions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Script_LaunchOptions::Script_LaunchOptions()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Script$LaunchOptions",
			"()V"
		);
	}
	
	// Methods
	jint Script_LaunchOptions::getXEnd()
	{
		return __thiz.callMethod<jint>(
			"getXEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getXStart()
	{
		return __thiz.callMethod<jint>(
			"getXStart",
			"()I"
		);
	}
	jint Script_LaunchOptions::getYEnd()
	{
		return __thiz.callMethod<jint>(
			"getYEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getYStart()
	{
		return __thiz.callMethod<jint>(
			"getYStart",
			"()I"
		);
	}
	jint Script_LaunchOptions::getZEnd()
	{
		return __thiz.callMethod<jint>(
			"getZEnd",
			"()I"
		);
	}
	jint Script_LaunchOptions::getZStart()
	{
		return __thiz.callMethod<jint>(
			"getZStart",
			"()I"
		);
	}
	QAndroidJniObject Script_LaunchOptions::setX(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setX",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Script_LaunchOptions::setY(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setY",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Script_LaunchOptions::setZ(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setZ",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

