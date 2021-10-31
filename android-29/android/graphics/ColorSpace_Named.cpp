#include "./ColorSpace_Named.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_Named::ACES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ACES",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::ACESCG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ACESCG",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::ADOBE_RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ADOBE_RGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::BT2020()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"BT2020",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::BT709()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"BT709",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::CIE_LAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"CIE_LAB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::CIE_XYZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"CIE_XYZ",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::DCI_P3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"DCI_P3",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::DISPLAY_P3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"DISPLAY_P3",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::EXTENDED_SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"EXTENDED_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::LINEAR_EXTENDED_SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"LINEAR_EXTENDED_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::LINEAR_SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"LINEAR_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::NTSC_1953()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"NTSC_1953",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::PRO_PHOTO_RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"PRO_PHOTO_RGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::SMPTE_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"SMPTE_C",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	
	// QAndroidJniObject forward
	ColorSpace_Named::ColorSpace_Named(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ColorSpace_Named::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Named",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Named;",
			arg0
		);
	}
	jarray ColorSpace_Named::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Named",
			"values",
			"()[Landroid/graphics/ColorSpace$Named;"
		).object<jarray>();
	}
} // namespace android::graphics

