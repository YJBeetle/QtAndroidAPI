#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::graphics::fonts
{
	class FontVariationAxis : public __JniBaseClass
	{
	public:
		// Fields
		
		FontVariationAxis(QAndroidJniObject obj);
		// Constructors
		FontVariationAxis(jstring arg0, jfloat arg1);
		FontVariationAxis() = default;
		
		// Methods
		static jarray fromFontVariationSettings(jstring arg0);
		static jstring toFontVariationSettings(jarray arg0);
		jboolean equals(jobject arg0);
		jfloat getStyleValue();
		jstring getTag();
		jint hashCode();
		jstring toString();
	};
} // namespace android::graphics::fonts

