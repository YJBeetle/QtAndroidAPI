#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::util
{
	class TypedValue;
}
class JString;
class JString;

namespace android::content::res
{
	class TypedArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TypedArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TypedArray(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean getBoolean(jint arg0, jboolean arg1) const;
		jint getChangingConfigurations() const;
		jint getColor(jint arg0, jint arg1) const;
		android::content::res::ColorStateList getColorStateList(jint arg0) const;
		jfloat getDimension(jint arg0, jfloat arg1) const;
		jint getDimensionPixelOffset(jint arg0, jint arg1) const;
		jint getDimensionPixelSize(jint arg0, jint arg1) const;
		android::graphics::drawable::Drawable getDrawable(jint arg0) const;
		jfloat getFloat(jint arg0, jfloat arg1) const;
		android::graphics::Typeface getFont(jint arg0) const;
		jfloat getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3) const;
		jint getIndex(jint arg0) const;
		jint getIndexCount() const;
		jint getInt(jint arg0, jint arg1) const;
		jint getInteger(jint arg0, jint arg1) const;
		jint getLayoutDimension(jint arg0, jint arg1) const;
		jint getLayoutDimension(jint arg0, JString arg1) const;
		JString getNonResourceString(jint arg0) const;
		JString getPositionDescription() const;
		jint getResourceId(jint arg0, jint arg1) const;
		android::content::res::Resources getResources() const;
		jint getSourceResourceId(jint arg0, jint arg1) const;
		JString getString(jint arg0) const;
		JString getText(jint arg0) const;
		JArray getTextArray(jint arg0) const;
		jint getType(jint arg0) const;
		jboolean getValue(jint arg0, android::util::TypedValue arg1) const;
		jboolean hasValue(jint arg0) const;
		jboolean hasValueOrEmpty(jint arg0) const;
		jint length() const;
		android::util::TypedValue peekValue(jint arg0) const;
		void recycle() const;
		JString toString() const;
	};
} // namespace android::content::res

