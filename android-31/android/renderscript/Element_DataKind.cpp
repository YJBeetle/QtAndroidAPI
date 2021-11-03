#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Element_DataKind.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_A()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_A",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_DEPTH()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_DEPTH",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_L()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_L",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_LA()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_LA",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_RGB()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_RGB",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_RGBA()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_RGBA",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::PIXEL_YUV()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_YUV",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataKind Element_DataKind::USER()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"USER",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	
	// QAndroidJniObject forward
	Element_DataKind::Element_DataKind(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Element_DataKind Element_DataKind::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element$DataKind",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Element$DataKind;",
			arg0.object<jstring>()
		);
	}
	JArray Element_DataKind::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.Element$DataKind",
			"values",
			"()[Landroid/renderscript/Element$DataKind;"
		);
	}
} // namespace android::renderscript

