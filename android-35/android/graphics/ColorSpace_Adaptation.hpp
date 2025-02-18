#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Adaptation.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::BRADFORD()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"BRADFORD",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	inline android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::CIECAT02()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"CIECAT02",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	inline android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::VON_KRIES()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"VON_KRIES",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Adaptation;",
			arg0.object<jstring>()
		);
	}
	inline JArray ColorSpace_Adaptation::values()
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"values",
			"()[Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
