#include "./Script_FieldID.hpp"
#include "../../JObject.hpp"
#include "./ScriptGroup_Binding.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptGroup_Binding::ScriptGroup_Binding(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScriptGroup_Binding::ScriptGroup_Binding(android::renderscript::Script_FieldID arg0, JObject arg1)
		: JObject(
			"android.renderscript.ScriptGroup$Binding",
			"(Landroid/renderscript/Script$FieldID;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		) {}
	
	// Methods
} // namespace android::renderscript

