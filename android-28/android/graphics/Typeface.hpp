#pragma once

#include "../content/res/AssetManager.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Typeface.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint Typeface::BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"BOLD"
		);
	}
	inline jint Typeface::BOLD_ITALIC()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"BOLD_ITALIC"
		);
	}
	inline android::graphics::Typeface Typeface::DEFAULT()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"DEFAULT",
			"Landroid/graphics/Typeface;"
		);
	}
	inline android::graphics::Typeface Typeface::DEFAULT_BOLD()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"DEFAULT_BOLD",
			"Landroid/graphics/Typeface;"
		);
	}
	inline jint Typeface::ITALIC()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"ITALIC"
		);
	}
	inline android::graphics::Typeface Typeface::MONOSPACE()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"MONOSPACE",
			"Landroid/graphics/Typeface;"
		);
	}
	inline jint Typeface::NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.Typeface",
			"NORMAL"
		);
	}
	inline android::graphics::Typeface Typeface::SANS_SERIF()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"SANS_SERIF",
			"Landroid/graphics/Typeface;"
		);
	}
	inline android::graphics::Typeface Typeface::SERIF()
	{
		return getStaticObjectField(
			"android.graphics.Typeface",
			"SERIF",
			"Landroid/graphics/Typeface;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Typeface Typeface::create(android::graphics::Typeface arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;I)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1
		);
	}
	inline android::graphics::Typeface Typeface::create(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Ljava/lang/String;I)Landroid/graphics/Typeface;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::graphics::Typeface Typeface::create(android::graphics::Typeface arg0, jint arg1, jboolean arg2)
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
	inline android::graphics::Typeface Typeface::createFromAsset(android::content::res::AssetManager arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromAsset",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::graphics::Typeface Typeface::createFromFile(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/io/File;)Landroid/graphics/Typeface;",
			arg0.object()
		);
	}
	inline android::graphics::Typeface Typeface::createFromFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::Typeface Typeface::defaultFromStyle(jint arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Typeface",
			"defaultFromStyle",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	inline jboolean Typeface::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Typeface::getStyle() const
	{
		return callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	inline jint Typeface::getWeight() const
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	inline jint Typeface::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Typeface::isBold() const
	{
		return callMethod<jboolean>(
			"isBold",
			"()Z"
		);
	}
	inline jboolean Typeface::isItalic() const
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::graphics

// Base class headers

