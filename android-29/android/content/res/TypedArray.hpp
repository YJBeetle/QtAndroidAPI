#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::content::res
{
	class TypedArray : public __JniBaseClass
	{
	public:
		// Fields
		
		TypedArray(QAndroidJniObject obj);
		// Constructors
		TypedArray() = default;
		
		// Methods
		jboolean getBoolean(jint arg0, jboolean arg1);
		jint getChangingConfigurations();
		jint getColor(jint arg0, jint arg1);
		QAndroidJniObject getColorStateList(jint arg0);
		jfloat getDimension(jint arg0, jfloat arg1);
		jint getDimensionPixelOffset(jint arg0, jint arg1);
		jint getDimensionPixelSize(jint arg0, jint arg1);
		QAndroidJniObject getDrawable(jint arg0);
		jfloat getFloat(jint arg0, jfloat arg1);
		QAndroidJniObject getFont(jint arg0);
		jfloat getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3);
		jint getIndex(jint arg0);
		jint getIndexCount();
		jint getInt(jint arg0, jint arg1);
		jint getInteger(jint arg0, jint arg1);
		jint getLayoutDimension(jint arg0, jint arg1);
		jint getLayoutDimension(jint arg0, jstring arg1);
		jstring getNonResourceString(jint arg0);
		jstring getPositionDescription();
		jint getResourceId(jint arg0, jint arg1);
		QAndroidJniObject getResources();
		jint getSourceResourceId(jint arg0, jint arg1);
		jstring getString(jint arg0);
		jstring getText(jint arg0);
		jarray getTextArray(jint arg0);
		jint getType(jint arg0);
		jboolean getValue(jint arg0, android::util::TypedValue arg1);
		jboolean hasValue(jint arg0);
		jboolean hasValueOrEmpty(jint arg0);
		jint length();
		QAndroidJniObject peekValue(jint arg0);
		void recycle();
		jstring toString();
	};
} // namespace android::content::res

