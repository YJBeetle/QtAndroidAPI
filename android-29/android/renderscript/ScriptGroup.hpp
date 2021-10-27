#pragma once

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class Allocation;
}
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
	class ScriptGroup : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void destroy();
		jobjectArray execute(jobjectArray arg0);
		void execute();
		void setInput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1);
		void setOutput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1);
	};
} // namespace __jni_impl::android::renderscript

#include "Allocation.hpp"
#include "RenderScript.hpp"
#include "Script_KernelID.hpp"

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
	void ScriptGroup::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jobjectArray ScriptGroup::execute(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	void ScriptGroup::execute()
	{
		__thiz.callMethod<void>(
			"execute",
			"()V"
		);
	}
	void ScriptGroup::setInput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptGroup::setOutput(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
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

