#pragma once

#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Type.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::Type Type::createX(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2)
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
	inline android::renderscript::Type Type::createXY(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3)
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
	inline android::renderscript::Type Type::createXYZ(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4)
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
	inline jint Type::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::renderscript::Element Type::getElement() const
	{
		return callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	inline jint Type::getX() const
	{
		return callMethod<jint>(
			"getX",
			"()I"
		);
	}
	inline jint Type::getY() const
	{
		return callMethod<jint>(
			"getY",
			"()I"
		);
	}
	inline jint Type::getYuv() const
	{
		return callMethod<jint>(
			"getYuv",
			"()I"
		);
	}
	inline jint Type::getZ() const
	{
		return callMethod<jint>(
			"getZ",
			"()I"
		);
	}
	inline jboolean Type::hasFaces() const
	{
		return callMethod<jboolean>(
			"hasFaces",
			"()Z"
		);
	}
	inline jboolean Type::hasMipmaps() const
	{
		return callMethod<jboolean>(
			"hasMipmaps",
			"()Z"
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
