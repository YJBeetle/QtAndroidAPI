#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class TextPaint;
}

namespace android::text
{
	class PrecomputedText_Params : public __JniBaseClass
	{
	public:
		// Fields
		
		PrecomputedText_Params(QAndroidJniObject obj);
		// Constructors
		PrecomputedText_Params() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBreakStrategy();
		jint getHyphenationFrequency();
		QAndroidJniObject getTextDirection();
		QAndroidJniObject getTextPaint();
		jint hashCode();
		jstring toString();
	};
} // namespace android::text

