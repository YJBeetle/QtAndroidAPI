#include "./Script_FieldID.hpp"
#include "./ScriptGroup_Binding.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptGroup_Binding::ScriptGroup_Binding(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScriptGroup_Binding::ScriptGroup_Binding(android::renderscript::Script_FieldID arg0, jobject arg1)
		: __JniBaseClass(
			"android.renderscript.ScriptGroup$Binding",
			"(Landroid/renderscript/Script$FieldID;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

