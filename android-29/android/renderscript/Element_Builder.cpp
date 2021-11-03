#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Element_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	Element_Builder::Element_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Element_Builder::Element_Builder(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.Element$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	android::renderscript::Element_Builder Element_Builder::add(android::renderscript::Element arg0, jstring arg1)
	{
		return callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;)Landroid/renderscript/Element$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::renderscript::Element_Builder Element_Builder::add(android::renderscript::Element arg0, jstring arg1, jint arg2)
	{
		return callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;I)Landroid/renderscript/Element$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::renderscript::Element Element_Builder::create()
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Element;"
		);
	}
} // namespace android::renderscript

