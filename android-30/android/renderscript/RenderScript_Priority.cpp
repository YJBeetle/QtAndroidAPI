#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./RenderScript_Priority.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::RenderScript_Priority RenderScript_Priority::LOW()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$Priority",
			"LOW",
			"Landroid/renderscript/RenderScript$Priority;"
		);
	}
	android::renderscript::RenderScript_Priority RenderScript_Priority::NORMAL()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$Priority",
			"NORMAL",
			"Landroid/renderscript/RenderScript$Priority;"
		);
	}
	
	// QJniObject forward
	RenderScript_Priority::RenderScript_Priority(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::RenderScript_Priority RenderScript_Priority::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$Priority;",
			arg0.object<jstring>()
		);
	}
	JArray RenderScript_Priority::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"values",
			"()[Landroid/renderscript/RenderScript$Priority;"
		);
	}
} // namespace android::renderscript

