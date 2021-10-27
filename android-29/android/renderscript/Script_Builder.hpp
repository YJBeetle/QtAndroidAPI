#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}

namespace __jni_impl::android::renderscript
{
	class Script_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript

#include "./RenderScript.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Script_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Script$Builder",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Script_Builder : public __jni_impl::android::renderscript::Script_Builder
	{
	public:
		Script_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Script_Builder()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

