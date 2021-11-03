#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Model.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::ColorSpace_Model ColorSpace_Model::CMYK()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"CMYK",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	android::graphics::ColorSpace_Model ColorSpace_Model::LAB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"LAB",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	android::graphics::ColorSpace_Model ColorSpace_Model::RGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"RGB",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	android::graphics::ColorSpace_Model ColorSpace_Model::XYZ()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"XYZ",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	
	// QJniObject forward
	ColorSpace_Model::ColorSpace_Model(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace_Model ColorSpace_Model::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Model;",
			arg0.object<jstring>()
		);
	}
	JArray ColorSpace_Model::values()
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"values",
			"()[Landroid/graphics/ColorSpace$Model;"
		);
	}
	jint ColorSpace_Model::getComponentCount()
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
} // namespace android::graphics

