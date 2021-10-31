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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrecomputedText_Params(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText_Params(QAndroidJniObject obj);
		
		// Constructors
		
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

