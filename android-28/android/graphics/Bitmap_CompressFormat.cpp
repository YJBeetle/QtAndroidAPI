#include "./Bitmap_CompressFormat.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::JPEG()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"JPEG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::PNG()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"PNG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::WEBP()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"WEBP",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	
	// QJniObject forward
	Bitmap_CompressFormat::Bitmap_CompressFormat(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;",
			arg0
		);
	}
	jarray Bitmap_CompressFormat::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"values",
			"()[Landroid/graphics/Bitmap$CompressFormat;"
		).object<jarray>();
	}
} // namespace android::graphics

