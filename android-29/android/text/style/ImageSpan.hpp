#pragma once

#include "../../content/Context.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./ImageSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline ImageSpan::ImageSpan(android::graphics::Bitmap arg0)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	inline ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		) {}
	inline ImageSpan::ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ImageSpan::ImageSpan(android::content::Context arg0, android::net::Uri arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ImageSpan::ImageSpan(android::content::Context arg0, jint arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	inline ImageSpan::ImageSpan(android::graphics::Bitmap arg0, jint arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.object(),
			arg1
		) {}
	inline ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, jint arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		) {}
	inline ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, JString arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline ImageSpan::ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ImageSpan::ImageSpan(android::content::Context arg0, android::net::Uri arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ImageSpan::ImageSpan(android::content::Context arg0, jint arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, JString arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline android::graphics::drawable::Drawable ImageSpan::getDrawable() const
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JString ImageSpan::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"
#include "./ReplacementSpan.hpp"
#include "./DynamicDrawableSpan.hpp"

