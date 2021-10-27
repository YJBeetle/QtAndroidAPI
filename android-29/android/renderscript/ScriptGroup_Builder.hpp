#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTGROUP_BUILDER
#define ANDROID_RENDERSCRIPT_SCRIPTGROUP_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
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
	class Type;
}

namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::renderscript::RenderScript arg0);
		
		// Methods
		QAndroidJniObject addConnection(__jni_impl::android::renderscript::Type arg0, __jni_impl::android::renderscript::Script_KernelID arg1, __jni_impl::android::renderscript::Script_FieldID arg2);
		QAndroidJniObject addConnection(__jni_impl::android::renderscript::Type arg0, __jni_impl::android::renderscript::Script_KernelID arg1, __jni_impl::android::renderscript::Script_KernelID arg2);
		QAndroidJniObject addKernel(__jni_impl::android::renderscript::Script_KernelID arg0);
		QAndroidJniObject create();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Script_FieldID.hpp"
#include "Script_KernelID.hpp"
#include "ScriptGroup.hpp"
#include "Type.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup_Builder::__constructor(__jni_impl::android::renderscript::RenderScript arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ScriptGroup_Builder::addConnection(__jni_impl::android::renderscript::Type arg0, __jni_impl::android::renderscript::Script_KernelID arg1, __jni_impl::android::renderscript::Script_FieldID arg2)
	{
		return __thiz.callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Builder::addConnection(__jni_impl::android::renderscript::Type arg0, __jni_impl::android::renderscript::Script_KernelID arg1, __jni_impl::android::renderscript::Script_KernelID arg2)
	{
		return __thiz.callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Builder::addKernel(__jni_impl::android::renderscript::Script_KernelID arg0)
	{
		return __thiz.callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/ScriptGroup;"
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup_Builder : public __jni_impl::android::renderscript::ScriptGroup_Builder
	{
	public:
		ScriptGroup_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup_Builder(__jni_impl::android::renderscript::RenderScript arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTGROUP_BUILDER

