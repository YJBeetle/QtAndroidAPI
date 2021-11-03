#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Type::Type(QAndroidJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Type Type::createX(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Type",
			"createX",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;I)Landroid/renderscript/Type;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::renderscript::Type Type::createXY(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.Type",
			"createXY",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;II)Landroid/renderscript/Type;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	android::renderscript::Type Type::createXYZ(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.renderscript.Type",
			"createXYZ",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;III)Landroid/renderscript/Type;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	jint Type::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::renderscript::Element Type::getElement() const
	{
		return callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	jint Type::getX() const
	{
		return callMethod<jint>(
			"getX",
			"()I"
		);
	}
	jint Type::getY() const
	{
		return callMethod<jint>(
			"getY",
			"()I"
		);
	}
	jint Type::getYuv() const
	{
		return callMethod<jint>(
			"getYuv",
			"()I"
		);
	}
	jint Type::getZ() const
	{
		return callMethod<jint>(
			"getZ",
			"()I"
		);
	}
	jboolean Type::hasFaces() const
	{
		return callMethod<jboolean>(
			"hasFaces",
			"()Z"
		);
	}
	jboolean Type::hasMipmaps() const
	{
		return callMethod<jboolean>(
			"hasMipmaps",
			"()Z"
		);
	}
} // namespace android::renderscript

