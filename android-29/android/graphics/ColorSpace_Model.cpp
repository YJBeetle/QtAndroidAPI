#include "./ColorSpace_Model.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_Model::CMYK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"CMYK",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	QAndroidJniObject ColorSpace_Model::LAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"LAB",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	QAndroidJniObject ColorSpace_Model::RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"RGB",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	QAndroidJniObject ColorSpace_Model::XYZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"XYZ",
			"Landroid/graphics/ColorSpace$Model;"
		);
	}
	
	// QAndroidJniObject forward
	ColorSpace_Model::ColorSpace_Model(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ColorSpace_Model::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Model;",
			arg0
		);
	}
	jarray ColorSpace_Model::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"values",
			"()[Landroid/graphics/ColorSpace$Model;"
		).object<jarray>();
	}
	jint ColorSpace_Model::getComponentCount()
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
} // namespace android::graphics
