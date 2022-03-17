#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Model.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::ColorSpace_Model ColorSpace_Model::CMYK()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"CMYK",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	inline android::graphics::ColorSpace_Model ColorSpace_Model::LAB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"LAB",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	inline android::graphics::ColorSpace_Model ColorSpace_Model::RGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"RGB",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	inline android::graphics::ColorSpace_Model ColorSpace_Model::XYZ()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"XYZ",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::ColorSpace_Model ColorSpace_Model::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Model;",
			arg0.object<jstring>()
		);
	}
	inline JArray ColorSpace_Model::values()
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"values",
			"()[Landroid/graphics/ColorSpace$Model;"
		);
	}
	inline jint ColorSpace_Model::getComponentCount() const
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

