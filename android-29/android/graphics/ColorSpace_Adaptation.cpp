#include "./ColorSpace_Adaptation.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::BRADFORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"BRADFORD",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::CIECAT02()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"CIECAT02",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::VON_KRIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"VON_KRIES",
			"Landroid/graphics/ColorSpace$Adaptation;"
		);
	}
	
	// QAndroidJniObject forward
	ColorSpace_Adaptation::ColorSpace_Adaptation(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace_Adaptation ColorSpace_Adaptation::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Adaptation;",
			arg0
		);
	}
	jarray ColorSpace_Adaptation::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"values",
			"()[Landroid/graphics/ColorSpace$Adaptation;"
		).object<jarray>();
	}
} // namespace android::graphics

