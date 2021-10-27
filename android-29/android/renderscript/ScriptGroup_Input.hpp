#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class ScriptGroup_Input : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptGroup_Input::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Input",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptGroup_Input : public __jni_impl::android::renderscript::ScriptGroup_Input
	{
	public:
		ScriptGroup_Input(QAndroidJniObject obj) { __thiz = obj; }
		ScriptGroup_Input()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

