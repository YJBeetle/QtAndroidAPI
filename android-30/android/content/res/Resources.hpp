#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "./AssetFileDescriptor.def.hpp"
#include "./AssetManager.def.hpp"
#include "./ColorStateList.def.hpp"
#include "./Configuration.def.hpp"
#include "./Resources_Theme.def.hpp"
#include "./TypedArray.def.hpp"
#include "../../graphics/Movie.def.hpp"
#include "../../graphics/Typeface.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../util/DisplayMetrics.def.hpp"
#include "../../util/TypedValue.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Resources.def.hpp"

namespace android::content::res
{
	// Fields
	inline jint Resources::ID_NULL()
	{
		return getStaticField<jint>(
			"android.content.res.Resources",
			"ID_NULL"
		);
	}
	
	// Constructors
	inline Resources::Resources(android::content::res::AssetManager arg0, android::util::DisplayMetrics arg1, android::content::res::Configuration arg2)
		: JObject(
			"android.content.res.Resources",
			"(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jint Resources::getAttributeSetSourceResId(JObject arg0)
	{
		return callStaticMethod<jint>(
			"android.content.res.Resources",
			"getAttributeSetSourceResId",
			"(Landroid/util/AttributeSet;)I",
			arg0.object()
		);
	}
	inline android::content::res::Resources Resources::getSystem()
	{
		return callStaticObjectMethod(
			"android.content.res.Resources",
			"getSystem",
			"()Landroid/content/res/Resources;"
		);
	}
	inline void Resources::addLoaders(JArray arg0) const
	{
		callMethod<void>(
			"addLoaders",
			"([Landroid/content/res/loader/ResourcesLoader;)V",
			arg0.object<jarray>()
		);
	}
	inline void Resources::finishPreloading() const
	{
		callMethod<void>(
			"finishPreloading",
			"()V"
		);
	}
	inline void Resources::flushLayoutCache() const
	{
		callMethod<void>(
			"flushLayoutCache",
			"()V"
		);
	}
	inline JObject Resources::getAnimation(jint arg0) const
	{
		return callObjectMethod(
			"getAnimation",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	inline android::content::res::AssetManager Resources::getAssets() const
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	inline jboolean Resources::getBoolean(jint arg0) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	inline jint Resources::getColor(jint arg0) const
	{
		return callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	inline jint Resources::getColor(jint arg0, android::content::res::Resources_Theme arg1) const
	{
		return callMethod<jint>(
			"getColor",
			"(ILandroid/content/res/Resources$Theme;)I",
			arg0,
			arg1.object()
		);
	}
	inline android::content::res::ColorStateList Resources::getColorStateList(jint arg0) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	inline android::content::res::ColorStateList Resources::getColorStateList(jint arg0, android::content::res::Resources_Theme arg1) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(ILandroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0,
			arg1.object()
		);
	}
	inline android::content::res::Configuration Resources::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	inline jfloat Resources::getDimension(jint arg0) const
	{
		return callMethod<jfloat>(
			"getDimension",
			"(I)F",
			arg0
		);
	}
	inline jint Resources::getDimensionPixelOffset(jint arg0) const
	{
		return callMethod<jint>(
			"getDimensionPixelOffset",
			"(I)I",
			arg0
		);
	}
	inline jint Resources::getDimensionPixelSize(jint arg0) const
	{
		return callMethod<jint>(
			"getDimensionPixelSize",
			"(I)I",
			arg0
		);
	}
	inline android::util::DisplayMetrics Resources::getDisplayMetrics() const
	{
		return callObjectMethod(
			"getDisplayMetrics",
			"()Landroid/util/DisplayMetrics;"
		);
	}
	inline android::graphics::drawable::Drawable Resources::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable Resources::getDrawable(jint arg0, android::content::res::Resources_Theme arg1) const
	{
		return callObjectMethod(
			"getDrawable",
			"(ILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1.object()
		);
	}
	inline android::graphics::drawable::Drawable Resources::getDrawableForDensity(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(II)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1
		);
	}
	inline android::graphics::drawable::Drawable Resources::getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2) const
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(IILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jfloat Resources::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	inline android::graphics::Typeface Resources::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	inline jfloat Resources::getFraction(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"getFraction",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Resources::getIdentifier(JString arg0, JString arg1, JString arg2) const
	{
		return callMethod<jint>(
			"getIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JIntArray Resources::getIntArray(jint arg0) const
	{
		return callObjectMethod(
			"getIntArray",
			"(I)[I",
			arg0
		);
	}
	inline jint Resources::getInteger(jint arg0) const
	{
		return callMethod<jint>(
			"getInteger",
			"(I)I",
			arg0
		);
	}
	inline JObject Resources::getLayout(jint arg0) const
	{
		return callObjectMethod(
			"getLayout",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	inline android::graphics::Movie Resources::getMovie(jint arg0) const
	{
		return callObjectMethod(
			"getMovie",
			"(I)Landroid/graphics/Movie;",
			arg0
		);
	}
	inline JString Resources::getQuantityString(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getQuantityString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JString Resources::getQuantityString(jint arg0, jint arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"getQuantityString",
			"(II[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jobjectArray>()
		);
	}
	inline JString Resources::getQuantityText(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getQuantityText",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString Resources::getResourceEntryName(jint arg0) const
	{
		return callObjectMethod(
			"getResourceEntryName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Resources::getResourceName(jint arg0) const
	{
		return callObjectMethod(
			"getResourceName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Resources::getResourcePackageName(jint arg0) const
	{
		return callObjectMethod(
			"getResourcePackageName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Resources::getResourceTypeName(jint arg0) const
	{
		return callObjectMethod(
			"getResourceTypeName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Resources::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Resources::getString(jint arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	inline JArray Resources::getStringArray(jint arg0) const
	{
		return callObjectMethod(
			"getStringArray",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	inline JString Resources::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline JString Resources::getText(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"getText",
			"(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline JArray Resources::getTextArray(jint arg0) const
	{
		return callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline void Resources::getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2) const
	{
		callMethod<void>(
			"getValue",
			"(ILandroid/util/TypedValue;Z)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline void Resources::getValue(JString arg0, android::util::TypedValue arg1, jboolean arg2) const
	{
		callMethod<void>(
			"getValue",
			"(Ljava/lang/String;Landroid/util/TypedValue;Z)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void Resources::getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3) const
	{
		callMethod<void>(
			"getValueForDensity",
			"(IILandroid/util/TypedValue;Z)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline JObject Resources::getXml(jint arg0) const
	{
		return callObjectMethod(
			"getXml",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	inline android::content::res::Resources_Theme Resources::newTheme() const
	{
		return callObjectMethod(
			"newTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	inline android::content::res::TypedArray Resources::obtainAttributes(JObject arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"obtainAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	inline android::content::res::TypedArray Resources::obtainTypedArray(jint arg0) const
	{
		return callObjectMethod(
			"obtainTypedArray",
			"(I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	inline java::io::InputStream Resources::openRawResource(jint arg0) const
	{
		return callObjectMethod(
			"openRawResource",
			"(I)Ljava/io/InputStream;",
			arg0
		);
	}
	inline java::io::InputStream Resources::openRawResource(jint arg0, android::util::TypedValue arg1) const
	{
		return callObjectMethod(
			"openRawResource",
			"(ILandroid/util/TypedValue;)Ljava/io/InputStream;",
			arg0,
			arg1.object()
		);
	}
	inline android::content::res::AssetFileDescriptor Resources::openRawResourceFd(jint arg0) const
	{
		return callObjectMethod(
			"openRawResourceFd",
			"(I)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	inline void Resources::parseBundleExtra(JString arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"parseBundleExtra",
			"(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Resources::parseBundleExtras(JObject arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"parseBundleExtras",
			"(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Resources::removeLoaders(JArray arg0) const
	{
		callMethod<void>(
			"removeLoaders",
			"([Landroid/content/res/loader/ResourcesLoader;)V",
			arg0.object<jarray>()
		);
	}
	inline void Resources::updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1) const
	{
		callMethod<void>(
			"updateConfiguration",
			"(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::content::res

// Base class headers

