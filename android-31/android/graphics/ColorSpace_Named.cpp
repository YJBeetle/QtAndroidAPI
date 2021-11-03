#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Named.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::ColorSpace_Named ColorSpace_Named::ACES()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ACES",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::ACESCG()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ACESCG",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::ADOBE_RGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ADOBE_RGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::BT2020()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"BT2020",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::BT709()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"BT709",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::CIE_LAB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"CIE_LAB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::CIE_XYZ()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"CIE_XYZ",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::DCI_P3()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"DCI_P3",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::DISPLAY_P3()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"DISPLAY_P3",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::EXTENDED_SRGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"EXTENDED_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::LINEAR_EXTENDED_SRGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"LINEAR_EXTENDED_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::LINEAR_SRGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"LINEAR_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::NTSC_1953()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"NTSC_1953",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::PRO_PHOTO_RGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"PRO_PHOTO_RGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::SMPTE_C()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"SMPTE_C",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	android::graphics::ColorSpace_Named ColorSpace_Named::SRGB()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	
	// QJniObject forward
	ColorSpace_Named::ColorSpace_Named(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace_Named ColorSpace_Named::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Named",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Named;",
			arg0.object<jstring>()
		);
	}
	JArray ColorSpace_Named::values()
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$Named",
			"values",
			"()[Landroid/graphics/ColorSpace$Named;"
		);
	}
} // namespace android::graphics

