#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Type_CubemapFace.def.hpp"

namespace android::renderscript
{
	// Fields
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::NEGATIVE_X()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::NEGATIVE_Y()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::NEGATIVE_Z()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::POSITIVE_X()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::POSITIVE_Y()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::POSITIVE_Z()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::POSITVE_X()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::POSITVE_Y()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::POSITVE_Z()
	{
		return getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::renderscript::Type_CubemapFace Type_CubemapFace::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;",
			arg0.object<jstring>()
		);
	}
	inline JArray Type_CubemapFace::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"values",
			"()[Landroid/renderscript/Type$CubemapFace;"
		);
	}
} // namespace android::renderscript

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
