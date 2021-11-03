#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class TextPaint;
}

namespace android::text
{
	class PrecomputedText_Params : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrecomputedText_Params(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText_Params(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBreakStrategy();
		jint getHyphenationFrequency();
		JObject getTextDirection();
		android::text::TextPaint getTextPaint();
		jint hashCode();
		jstring toString();
	};
} // namespace android::text

