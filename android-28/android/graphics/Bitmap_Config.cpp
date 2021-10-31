#include "./Bitmap_Config.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Bitmap_Config Bitmap_Config::ALPHA_8()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ALPHA_8",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	android::graphics::Bitmap_Config Bitmap_Config::ARGB_4444()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_4444",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	android::graphics::Bitmap_Config Bitmap_Config::ARGB_8888()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_8888",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	android::graphics::Bitmap_Config Bitmap_Config::HARDWARE()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"HARDWARE",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	android::graphics::Bitmap_Config Bitmap_Config::RGBA_F16()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGBA_F16",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	android::graphics::Bitmap_Config Bitmap_Config::RGB_565()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGB_565",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	
	// QJniObject forward
	Bitmap_Config::Bitmap_Config(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Bitmap_Config Bitmap_Config::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;",
			arg0
		);
	}
	jarray Bitmap_Config::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"values",
			"()[Landroid/graphics/Bitmap$Config;"
		).object<jarray>();
	}
} // namespace android::graphics

