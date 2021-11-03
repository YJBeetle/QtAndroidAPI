#include "../../JArray.hpp"
#include "../../JString.hpp"
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
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::WEBP_LOSSLESS()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"WEBP_LOSSLESS",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::WEBP_LOSSY()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"WEBP_LOSSY",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	
	// QAndroidJniObject forward
	Bitmap_CompressFormat::Bitmap_CompressFormat(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;",
			arg0.object<jstring>()
		);
	}
	JArray Bitmap_CompressFormat::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"values",
			"()[Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
} // namespace android::graphics

