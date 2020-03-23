#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSIC
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSIC

#include "Script.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsic : public __jni_impl::android::renderscript::Script
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsic::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsic",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsic : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		ScriptIntrinsic(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsic()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSIC

