#pragma once

#include "../../../JObject.hpp"

namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::content::res
{
	class AssetManager;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics
{
	class Movie;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class DisplayMetrics;
}
namespace android::util
{
	class TypedValue;
}
namespace java::io
{
	class InputStream;
}

namespace android::content::res
{
	class Resources : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Resources(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Resources(QJniObject obj);
		
		// Constructors
		Resources(android::content::res::AssetManager arg0, android::util::DisplayMetrics arg1, android::content::res::Configuration arg2);
		
		// Methods
		static android::content::res::Resources getSystem();
		void finishPreloading();
		void flushLayoutCache();
		JObject getAnimation(jint arg0);
		android::content::res::AssetManager getAssets();
		jboolean getBoolean(jint arg0);
		jint getColor(jint arg0);
		jint getColor(jint arg0, android::content::res::Resources_Theme arg1);
		android::content::res::ColorStateList getColorStateList(jint arg0);
		android::content::res::ColorStateList getColorStateList(jint arg0, android::content::res::Resources_Theme arg1);
		android::content::res::Configuration getConfiguration();
		jfloat getDimension(jint arg0);
		jint getDimensionPixelOffset(jint arg0);
		jint getDimensionPixelSize(jint arg0);
		android::util::DisplayMetrics getDisplayMetrics();
		android::graphics::drawable::Drawable getDrawable(jint arg0);
		android::graphics::drawable::Drawable getDrawable(jint arg0, android::content::res::Resources_Theme arg1);
		android::graphics::drawable::Drawable getDrawableForDensity(jint arg0, jint arg1);
		android::graphics::drawable::Drawable getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2);
		android::graphics::Typeface getFont(jint arg0);
		jfloat getFraction(jint arg0, jint arg1, jint arg2);
		jint getIdentifier(jstring arg0, jstring arg1, jstring arg2);
		jintArray getIntArray(jint arg0);
		jint getInteger(jint arg0);
		JObject getLayout(jint arg0);
		android::graphics::Movie getMovie(jint arg0);
		jstring getQuantityString(jint arg0, jint arg1);
		jstring getQuantityString(jint arg0, jint arg1, jobjectArray arg2);
		jstring getQuantityText(jint arg0, jint arg1);
		jstring getResourceEntryName(jint arg0);
		jstring getResourceName(jint arg0);
		jstring getResourcePackageName(jint arg0);
		jstring getResourceTypeName(jint arg0);
		jstring getString(jint arg0);
		jstring getString(jint arg0, jobjectArray arg1);
		jarray getStringArray(jint arg0);
		jstring getText(jint arg0);
		jstring getText(jint arg0, jstring arg1);
		jarray getTextArray(jint arg0);
		void getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2);
		void getValue(jstring arg0, android::util::TypedValue arg1, jboolean arg2);
		void getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3);
		JObject getXml(jint arg0);
		android::content::res::Resources_Theme newTheme();
		android::content::res::TypedArray obtainAttributes(JObject arg0, jintArray arg1);
		android::content::res::TypedArray obtainTypedArray(jint arg0);
		java::io::InputStream openRawResource(jint arg0);
		java::io::InputStream openRawResource(jint arg0, android::util::TypedValue arg1);
		android::content::res::AssetFileDescriptor openRawResourceFd(jint arg0);
		void parseBundleExtra(jstring arg0, JObject arg1, android::os::Bundle arg2);
		void parseBundleExtras(JObject arg0, android::os::Bundle arg1);
		void updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1);
	};
} // namespace android::content::res

