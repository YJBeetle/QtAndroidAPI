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
		
		// QJniObject forward
		template<typename ...Ts> explicit TypedArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TypedArray(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean getBoolean(jint arg0, jboolean arg1);
		jint getChangingConfigurations();
		jint getColor(jint arg0, jint arg1);
		android::content::res::ColorStateList getColorStateList(jint arg0);
		jfloat getDimension(jint arg0, jfloat arg1);
		jint getDimensionPixelOffset(jint arg0, jint arg1);
		jint getDimensionPixelSize(jint arg0, jint arg1);
		android::graphics::drawable::Drawable getDrawable(jint arg0);
		jfloat getFloat(jint arg0, jfloat arg1);
		android::graphics::Typeface getFont(jint arg0);
		jfloat getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3);
		jint getIndex(jint arg0);
		jint getIndexCount();
		jint getInt(jint arg0, jint arg1);
		jint getInteger(jint arg0, jint arg1);
		jint getLayoutDimension(jint arg0, jint arg1);
		jint getLayoutDimension(jint arg0, JString arg1);
		JString getNonResourceString(jint arg0);
		JString getPositionDescription();
		jint getResourceId(jint arg0, jint arg1);
		android::content::res::Resources getResources();
		JString getString(jint arg0);
		JString getText(jint arg0);
		JArray getTextArray(jint arg0);
		jint getType(jint arg0);
		jboolean getValue(jint arg0, android::util::TypedValue arg1);
		jboolean hasValue(jint arg0);
		jboolean hasValueOrEmpty(jint arg0);
		jint length();
		android::util::TypedValue peekValue(jint arg0);
		void recycle();
		JString toString();
	};
} // namespace android::content::res

