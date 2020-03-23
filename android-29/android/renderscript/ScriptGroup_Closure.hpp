#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTGROUP_CLOSURE
#define ANDROID_RENDERSCRIPT_SCRIPTGROUP_CLOSURE

#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Future;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}

namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Closure : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void destroy();
		QAndroidJniObject getGlobal(__jni_impl::android::renderscript::Script_FieldID arg0);
		QAndroidJniObject getReturn();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "ScriptGroup_Future.hpp"
#include "Script_FieldID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup_Closure::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Closure",
			"(V)V");
	}
	
	// Methods
	void ScriptGroup_Closure::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	QAndroidJniObject ScriptGroup_Closure::getGlobal(__jni_impl::android::renderscript::Script_FieldID arg0)
	{
		return __thiz.callObjectMethod(
			"getGlobal",
			"(Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Future;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScriptGroup_Closure::getReturn()
	{
		return __thiz.callObjectMethod(
			"getReturn",
			"()Landroid/renderscript/ScriptGroup$Future;");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup_Closure : public __jni_impl::android::renderscript::ScriptGroup_Closure
	{
	public:
		ScriptGroup_Closure(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup_Closure()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTGROUP_CLOSURE

