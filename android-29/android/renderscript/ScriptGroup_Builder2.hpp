#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script_InvokeID;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class ScriptGroup;
}
namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Closure;
}
namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Input;
}
namespace __jni_impl::android::renderscript
{
	class Type;
}

namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Builder2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::renderscript::RenderScript arg0);
		
		// Methods
		QAndroidJniObject addInput();
		QAndroidJniObject addInvoke(__jni_impl::android::renderscript::Script_InvokeID arg0, jobjectArray arg1);
		QAndroidJniObject addKernel(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Type arg1, jobjectArray arg2);
		QAndroidJniObject create(jstring arg0, jarray arg1);
		QAndroidJniObject create(const QString &arg0, jarray arg1);
	};
} // namespace __jni_impl::android::renderscript

#include "./RenderScript.hpp"
#include "./Script_InvokeID.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptGroup.hpp"
#include "./ScriptGroup_Closure.hpp"
#include "./ScriptGroup_Input.hpp"
#include "./Type.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup_Builder2::__constructor(__jni_impl::android::renderscript::RenderScript arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Builder2",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ScriptGroup_Builder2::addInput()
	{
		return __thiz.callObjectMethod(
			"addInput",
			"()Landroid/renderscript/ScriptGroup$Input;"
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::addInvoke(__jni_impl::android::renderscript::Script_InvokeID arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"addInvoke",
			"(Landroid/renderscript/Script$InvokeID;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::addKernel(__jni_impl::android::renderscript::Script_KernelID arg0, __jni_impl::android::renderscript::Type arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Type;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::create(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"create",
			"(Ljava/lang/String;[Landroid/renderscript/ScriptGroup$Future;)Landroid/renderscript/ScriptGroup;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::create(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"create",
			"(Ljava/lang/String;[Landroid/renderscript/ScriptGroup$Future;)Landroid/renderscript/ScriptGroup;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup_Builder2 : public __jni_impl::android::renderscript::ScriptGroup_Builder2
	{
	public:
		ScriptGroup_Builder2(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup_Builder2(__jni_impl::android::renderscript::RenderScript arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

