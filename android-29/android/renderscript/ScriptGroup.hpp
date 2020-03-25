#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTGROUP
#define ANDROID_RENDERSCRIPT_SCRIPTGROUP

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class Allocation;
}

namespace __jni_impl::android::renderscript
{
	class ScriptGroup : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void execute();
		QAndroidJniObject execute(jobjectArray arg0);
		void destroy();
		void setInput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1);
		void setOutput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Script_KernelID.hpp"
#include "Allocation.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup",
			"(V)V");
	}
	
	// Methods
	void ScriptGroup::execute()
	{
		__thiz.callMethod<void>(
			"execute",
			"()V");
	}
	QAndroidJniObject ScriptGroup::execute(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	void ScriptGroup::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	void ScriptGroup::setInput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScriptGroup::setOutput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup : public __jni_impl::android::renderscript::ScriptGroup
	{
	public:
		ScriptGroup(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTGROUP

