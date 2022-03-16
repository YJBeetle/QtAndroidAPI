#pragma once

#include "./Typeface.def.hpp"
#include "./fonts/FontFamily.def.hpp"
#include "./fonts/FontStyle.def.hpp"
#include "../../JString.hpp"
#include "./Typeface_CustomFallbackBuilder.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Typeface_CustomFallbackBuilder::Typeface_CustomFallbackBuilder(android::graphics::fonts::FontFamily arg0)
		: JObject(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"(Landroid/graphics/fonts/FontFamily;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Typeface_CustomFallbackBuilder::getMaxCustomFallbackCount()
	{
		return callStaticMethod<jint>(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"getMaxCustomFallbackCount",
			"()I"
		);
	}
	inline android::graphics::Typeface_CustomFallbackBuilder Typeface_CustomFallbackBuilder::addCustomFallback(android::graphics::fonts::FontFamily arg0) const
	{
		return callObjectMethod(
			"addCustomFallback",
			"(Landroid/graphics/fonts/FontFamily;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.object()
		);
	}
	inline android::graphics::Typeface Typeface_CustomFallbackBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	inline android::graphics::Typeface_CustomFallbackBuilder Typeface_CustomFallbackBuilder::setStyle(android::graphics::fonts::FontStyle arg0) const
	{
		return callObjectMethod(
			"setStyle",
			"(Landroid/graphics/fonts/FontStyle;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.object()
		);
	}
	inline android::graphics::Typeface_CustomFallbackBuilder Typeface_CustomFallbackBuilder::setSystemFallback(JString arg0) const
	{
		return callObjectMethod(
			"setSystemFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::graphics

// Base class headers

