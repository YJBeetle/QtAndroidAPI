#include "../content/res/AssetManager.hpp"
#include "../../java/io/File.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Typeface.hpp"

namespace android::graphics
{
	// Fields
	jint Typeface::BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"BOLD"
		);
	}
	jint Typeface::BOLD_ITALIC()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"BOLD_ITALIC"
		);
	}
	android::graphics::Typeface Typeface::DEFAULT()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"DEFAULT",
			"Landroid/graphics/Typeface;"
		);
	}
	android::graphics::Typeface Typeface::DEFAULT_BOLD()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"DEFAULT_BOLD",
			"Landroid/graphics/Typeface;"
		);
	}
	jint Typeface::ITALIC()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"ITALIC"
		);
	}
	android::graphics::Typeface Typeface::MONOSPACE()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"MONOSPACE",
			"Landroid/graphics/Typeface;"
		);
	}
	jint Typeface::NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"NORMAL"
		);
	}
	android::graphics::Typeface Typeface::SANS_SERIF()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"SANS_SERIF",
			"Landroid/graphics/Typeface;"
		);
	}
	android::graphics::Typeface Typeface::SERIF()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"SERIF",
			"Landroid/graphics/Typeface;"
		);
	}
	
	// QAndroidJniObject forward
	Typeface::Typeface(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Typeface Typeface::create(android::graphics::Typeface arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;I)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::Typeface Typeface::create(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Ljava/lang/String;I)Landroid/graphics/Typeface;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::graphics::Typeface Typeface::create(android::graphics::Typeface arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;IZ)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::graphics::Typeface Typeface::createFromAsset(android::content::res::AssetManager arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromAsset",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::graphics::Typeface Typeface::createFromFile(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/io/File;)Landroid/graphics/Typeface;",
			arg0.object()
		);
	}
	android::graphics::Typeface Typeface::createFromFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.object<jstring>()
		);
	}
	android::graphics::Typeface Typeface::defaultFromStyle(jint arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"defaultFromStyle",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jboolean Typeface::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Typeface::getStyle()
	{
		return callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	jint Typeface::getWeight()
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jint Typeface::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Typeface::isBold()
	{
		return callMethod<jboolean>(
			"isBold",
			"()Z"
		);
	}
	jboolean Typeface::isItalic()
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::graphics

