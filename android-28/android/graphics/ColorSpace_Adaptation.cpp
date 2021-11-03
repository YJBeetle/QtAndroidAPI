#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Adaptation.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::BRADFORD()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"BRADFORD",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::CIECAT02()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"CIECAT02",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::VON_KRIES()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"VON_KRIES",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	
	// QAndroidJniObject forward
	ColorSpace_Adaptation::ColorSpace_Adaptation(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Adaptation;",
			arg0.object<jstring>()
		);
	}
	JArray ColorSpace_Adaptation::values()
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"values",
			"()[Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
} // namespace android::graphics

