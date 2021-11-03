#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JObjectArray;
class JArray;
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
class JString;
class JString;

namespace android::content::res
{
	class Resources : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Resources(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Resources(QAndroidJniObject obj);
		
		// Constructors
		Resources(android::content::res::AssetManager arg0, android::util::DisplayMetrics arg1, android::content::res::Configuration arg2);
		
		// Methods
		static android::content::res::Resources getSystem();
		void finishPreloading() const;
		void flushLayoutCache() const;
		JObject getAnimation(jint arg0) const;
		android::content::res::AssetManager getAssets() const;
		jboolean getBoolean(jint arg0) const;
		jint getColor(jint arg0) const;
		jint getColor(jint arg0, android::content::res::Resources_Theme arg1) const;
		android::content::res::ColorStateList getColorStateList(jint arg0) const;
		android::content::res::ColorStateList getColorStateList(jint arg0, android::content::res::Resources_Theme arg1) const;
		android::content::res::Configuration getConfiguration() const;
		jfloat getDimension(jint arg0) const;
		jint getDimensionPixelOffset(jint arg0) const;
		jint getDimensionPixelSize(jint arg0) const;
		android::util::DisplayMetrics getDisplayMetrics() const;
		android::graphics::drawable::Drawable getDrawable(jint arg0) const;
		android::graphics::drawable::Drawable getDrawable(jint arg0, android::content::res::Resources_Theme arg1) const;
		android::graphics::drawable::Drawable getDrawableForDensity(jint arg0, jint arg1) const;
		android::graphics::drawable::Drawable getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2) const;
		android::graphics::Typeface getFont(jint arg0) const;
		jfloat getFraction(jint arg0, jint arg1, jint arg2) const;
		jint getIdentifier(JString arg0, JString arg1, JString arg2) const;
		JIntArray getIntArray(jint arg0) const;
		jint getInteger(jint arg0) const;
		JObject getLayout(jint arg0) const;
		android::graphics::Movie getMovie(jint arg0) const;
		JString getQuantityString(jint arg0, jint arg1) const;
		JString getQuantityString(jint arg0, jint arg1, JObjectArray arg2) const;
		JString getQuantityText(jint arg0, jint arg1) const;
		JString getResourceEntryName(jint arg0) const;
		JString getResourceName(jint arg0) const;
		JString getResourcePackageName(jint arg0) const;
		JString getResourceTypeName(jint arg0) const;
		JString getString(jint arg0) const;
		JString getString(jint arg0, JObjectArray arg1) const;
		JArray getStringArray(jint arg0) const;
		JString getText(jint arg0) const;
		JString getText(jint arg0, JString arg1) const;
		JArray getTextArray(jint arg0) const;
		void getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2) const;
		void getValue(JString arg0, android::util::TypedValue arg1, jboolean arg2) const;
		void getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3) const;
		JObject getXml(jint arg0) const;
		android::content::res::Resources_Theme newTheme() const;
		android::content::res::TypedArray obtainAttributes(JObject arg0, JIntArray arg1) const;
		android::content::res::TypedArray obtainTypedArray(jint arg0) const;
		java::io::InputStream openRawResource(jint arg0) const;
		java::io::InputStream openRawResource(jint arg0, android::util::TypedValue arg1) const;
		android::content::res::AssetFileDescriptor openRawResourceFd(jint arg0) const;
		void parseBundleExtra(JString arg0, JObject arg1, android::os::Bundle arg2) const;
		void parseBundleExtras(JObject arg0, android::os::Bundle arg1) const;
		void updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1) const;
	};
} // namespace android::content::res

