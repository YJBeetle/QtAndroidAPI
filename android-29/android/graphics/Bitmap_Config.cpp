#include "./Bitmap_Config.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Bitmap_Config::ALPHA_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ALPHA_8",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::ARGB_4444()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_4444",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::ARGB_8888()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_8888",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::HARDWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"HARDWARE",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::RGBA_F16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGBA_F16",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::RGB_565()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGB_565",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	
	// QAndroidJniObject forward
	Bitmap_Config::Bitmap_Config(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Bitmap_Config::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;",
			arg0
		);
	}
	jarray Bitmap_Config::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"values",
			"()[Landroid/graphics/Bitmap$Config;"
		).object<jarray>();
	}
} // namespace android::graphics

