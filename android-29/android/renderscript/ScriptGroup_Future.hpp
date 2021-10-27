#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}
namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Closure;
}

namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Future : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript

#include "Script_FieldID.hpp"
#include "ScriptGroup_Closure.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup_Future::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Future",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup_Future : public __jni_impl::android::renderscript::ScriptGroup_Future
	{
	public:
		ScriptGroup_Future(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup_Future()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

