#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Type_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	Type_Builder::Type_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Type_Builder::Type_Builder(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
		: JObject(
			"android.renderscript.Type$Builder",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::renderscript::Type Type_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Type;"
		);
	}
	android::renderscript::Type_Builder Type_Builder::setFaces(jboolean arg0) const
	{
		return callObjectMethod(
			"setFaces",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setMipmaps(jboolean arg0) const
	{
		return callObjectMethod(
			"setMipmaps",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setX(jint arg0) const
	{
		return callObjectMethod(
			"setX",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setY(jint arg0) const
	{
		return callObjectMethod(
			"setY",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setYuvFormat(jint arg0) const
	{
		return callObjectMethod(
			"setYuvFormat",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setZ(jint arg0) const
	{
		return callObjectMethod(
			"setZ",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
} // namespace android::renderscript

