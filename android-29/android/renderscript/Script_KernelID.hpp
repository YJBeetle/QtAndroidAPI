#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPT_KERNELID
#define ANDROID_RENDERSCRIPT_SCRIPT_KERNELID

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script;
}

namespace __jni_impl::android::renderscript
{
	class Script_KernelID : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Script.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Script_KernelID::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Script$KernelID",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Script_KernelID : public __jni_impl::android::renderscript::Script_KernelID
	{
	public:
		Script_KernelID(QAndroidJniObject obj) { __thiz = obj; }
		Script_KernelID()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPT_KERNELID

