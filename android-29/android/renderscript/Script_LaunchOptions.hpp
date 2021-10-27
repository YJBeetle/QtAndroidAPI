#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS
#define ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Script_LaunchOptions : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getXEnd();
		jint getXStart();
		jint getYEnd();
		jint getYStart();
		jint getZEnd();
		jint getZStart();
		QAndroidJniObject setX(jint arg0, jint arg1);
		QAndroidJniObject setY(jint arg0, jint arg1);
		QAndroidJniObject setZ(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Script_LaunchOptions::__constructor()
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
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Script_LaunchOptions : public __jni_impl::android::renderscript::Script_LaunchOptions
	{
	public:
		Script_LaunchOptions(QAndroidJniObject obj) { __thiz = obj; }
		Script_LaunchOptions()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS

