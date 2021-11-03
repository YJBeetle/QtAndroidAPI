#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "./AssetFileDescriptor.hpp"
#include "./AssetManager.hpp"
#include "./ColorStateList.hpp"
#include "./Configuration.hpp"
#include "./Resources_Theme.hpp"
#include "./TypedArray.hpp"
#include "../../graphics/Movie.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "../../util/TypedValue.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Resources.hpp"

namespace android::content::res
{
	// Fields
	jint Resources::ID_NULL()
	{
		return getStaticField<jint>(
			"android.content.res.Resources",
			"ID_NULL"
		);
	}
	
	// QAndroidJniObject forward
	Resources::Resources(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Resources::Resources(android::content::res::AssetManager arg0, android::util::DisplayMetrics arg1, android::content::res::Configuration arg2)
		: JObject(
			"android.content.res.Resources",
			"(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jint Resources::getAttributeSetSourceResId(JObject arg0)
	{
		return callStaticMethod<jint>(
			"android.content.res.Resources",
			"getAttributeSetSourceResId",
			"(Landroid/util/AttributeSet;)I",
			arg0.object()
		);
	}
	android::content::res::Resources Resources::getSystem()
	{
		return callStaticObjectMethod(
			"android.content.res.Resources",
			"getSystem",
			"()Landroid/content/res/Resources;"
		);
	}
	void Resources::addLoaders(JArray arg0) const
	{
		callMethod<void>(
			"addLoaders",
			"([Landroid/content/res/loader/ResourcesLoader;)V",
			arg0.object<jarray>()
		);
	}
	void Resources::finishPreloading() const
	{
		callMethod<void>(
			"finishPreloading",
			"()V"
		);
	}
	void Resources::flushLayoutCache() const
	{
		callMethod<void>(
			"flushLayoutCache",
			"()V"
		);
	}
	JObject Resources::getAnimation(jint arg0) const
	{
		return callObjectMethod(
			"getAnimation",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	android::content::res::AssetManager Resources::getAssets() const
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	jboolean Resources::getBoolean(jint arg0) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	jint Resources::getColor(jint arg0) const
	{
		return callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	jint Resources::getColor(jint arg0, android::content::res::Resources_Theme arg1) const
	{
		return callMethod<jint>(
			"getColor",
			"(ILandroid/content/res/Resources$Theme;)I",
			arg0,
			arg1.object()
		);
	}
	android::content::res::ColorStateList Resources::getColorStateList(jint arg0) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	android::content::res::ColorStateList Resources::getColorStateList(jint arg0, android::content::res::Resources_Theme arg1) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(ILandroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0,
			arg1.object()
		);
	}
	android::content::res::Configuration Resources::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jfloat Resources::getDimension(jint arg0) const
	{
		return callMethod<jfloat>(
			"getDimension",
			"(I)F",
			arg0
		);
	}
	jint Resources::getDimensionPixelOffset(jint arg0) const
	{
		return callMethod<jint>(
			"getDimensionPixelOffset",
			"(I)I",
			arg0
		);
	}
	jint Resources::getDimensionPixelSize(jint arg0) const
	{
		return callMethod<jint>(
			"getDimensionPixelSize",
			"(I)I",
			arg0
		);
	}
	android::util::DisplayMetrics Resources::getDisplayMetrics() const
	{
		return callObjectMethod(
			"getDisplayMetrics",
			"()Landroid/util/DisplayMetrics;"
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawable(jint arg0, android::content::res::Resources_Theme arg1) const
	{
		return callObjectMethod(
			"getDrawable",
			"(ILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1.object()
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawableForDensity(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(II)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1
		);
	}
	android::graphics::drawable::Drawable Resources::getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2) const
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(IILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jfloat Resources::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	android::graphics::Typeface Resources::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jfloat Resources::getFraction(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"getFraction",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint Resources::getIdentifier(JString arg0, JString arg1, JString arg2) const
	{
		return callMethod<jint>(
			"getIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	JIntArray Resources::getIntArray(jint arg0) const
	{
		return callObjectMethod(
			"getIntArray",
			"(I)[I",
			arg0
		);
	}
	jint Resources::getInteger(jint arg0) const
	{
		return callMethod<jint>(
			"getInteger",
			"(I)I",
			arg0
		);
	}
	JObject Resources::getLayout(jint arg0) const
	{
		return callObjectMethod(
			"getLayout",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	android::graphics::Movie Resources::getMovie(jint arg0) const
	{
		return callObjectMethod(
			"getMovie",
			"(I)Landroid/graphics/Movie;",
			arg0
		);
	}
	JString Resources::getQuantityString(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getQuantityString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString Resources::getQuantityString(jint arg0, jint arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"getQuantityString",
			"(II[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jobjectArray>()
		);
	}
	JString Resources::getQuantityText(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getQuantityText",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString Resources::getResourceEntryName(jint arg0) const
	{
		return callObjectMethod(
			"getResourceEntryName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Resources::getResourceName(jint arg0) const
	{
		return callObjectMethod(
			"getResourceName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Resources::getResourcePackageName(jint arg0) const
	{
		return callObjectMethod(
			"getResourcePackageName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Resources::getResourceTypeName(jint arg0) const
	{
		return callObjectMethod(
			"getResourceTypeName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Resources::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Resources::getString(jint arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	JArray Resources::getStringArray(jint arg0) const
	{
		return callObjectMethod(
			"getStringArray",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	JString Resources::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	JString Resources::getText(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"getText",
			"(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object<jstring>()
		);
	}
	JArray Resources::getTextArray(jint arg0) const
	{
		return callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		);
	}
	void Resources::getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2) const
	{
		callMethod<void>(
			"getValue",
			"(ILandroid/util/TypedValue;Z)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Resources::getValue(JString arg0, android::util::TypedValue arg1, jboolean arg2) const
	{
		callMethod<void>(
			"getValue",
			"(Ljava/lang/String;Landroid/util/TypedValue;Z)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	void Resources::getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3) const
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
	JObject Resources::getXml(jint arg0) const
	{
		return callObjectMethod(
			"getXml",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	android::content::res::Resources_Theme Resources::newTheme() const
	{
		return callObjectMethod(
			"newTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::content::res::TypedArray Resources::obtainAttributes(JObject arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"obtainAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	android::content::res::TypedArray Resources::obtainTypedArray(jint arg0) const
	{
		return callObjectMethod(
			"obtainTypedArray",
			"(I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	java::io::InputStream Resources::openRawResource(jint arg0) const
	{
		return callObjectMethod(
			"openRawResource",
			"(I)Ljava/io/InputStream;",
			arg0
		);
	}
	java::io::InputStream Resources::openRawResource(jint arg0, android::util::TypedValue arg1) const
	{
		return callObjectMethod(
			"openRawResource",
			"(ILandroid/util/TypedValue;)Ljava/io/InputStream;",
			arg0,
			arg1.object()
		);
	}
	android::content::res::AssetFileDescriptor Resources::openRawResourceFd(jint arg0) const
	{
		return callObjectMethod(
			"openRawResourceFd",
			"(I)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	void Resources::parseBundleExtra(JString arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"parseBundleExtra",
			"(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void Resources::parseBundleExtras(JObject arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"parseBundleExtras",
			"(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Resources::removeLoaders(JArray arg0) const
	{
		callMethod<void>(
			"removeLoaders",
			"([Landroid/content/res/loader/ResourcesLoader;)V",
			arg0.object<jarray>()
		);
	}
	void Resources::updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1) const
	{
		callMethod<void>(
			"updateConfiguration",
			"(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::content::res

