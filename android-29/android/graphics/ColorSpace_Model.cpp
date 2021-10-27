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
	
	ColorSpace_Model::ColorSpace_Model(QAndroidJniObject obj) { __thiz = obj; }
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
	QAndroidJniObject ColorSpace_Model::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Model;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
		return __thiz.callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
} // namespace android::graphics

