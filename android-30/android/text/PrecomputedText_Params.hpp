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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrecomputedText_Params(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText_Params(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBreakStrategy();
		jint getHyphenationFrequency();
		__JniBaseClass getTextDirection();
		android::text::TextPaint getTextPaint();
		jint hashCode();
		jstring toString();
	};
} // namespace android::text

