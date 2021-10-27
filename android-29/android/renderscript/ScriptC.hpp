#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript;
}

namespace __jni_impl::android::renderscript
{
	class ScriptC : public __jni_impl::android::renderscript::Script
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript

#include "../content/res/Resources.hpp"
#include "./RenderScript.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptC::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptC",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptC : public __jni_impl::android::renderscript::ScriptC
	{
	public:
		ScriptC(QAndroidJniObject obj) { __thiz = obj; }
		ScriptC()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

