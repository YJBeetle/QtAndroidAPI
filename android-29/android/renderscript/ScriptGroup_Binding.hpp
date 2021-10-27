#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}

namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Binding : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::renderscript::Script_FieldID arg0, jobject arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript

#include "./Script_FieldID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup_Binding::__constructor(__jni_impl::android::renderscript::Script_FieldID arg0, jobject arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Binding",
			"(Landroid/renderscript/Script$FieldID;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup_Binding : public __jni_impl::android::renderscript::ScriptGroup_Binding
	{
	public:
		ScriptGroup_Binding(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup_Binding(__jni_impl::android::renderscript::Script_FieldID arg0, jobject arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

