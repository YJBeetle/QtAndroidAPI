#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class TextPaint;
}
class JObject;
class JString;

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
		jboolean equals(JObject arg0);
		jint getBreakStrategy();
		jint getHyphenationFrequency();
		JObject getTextDirection();
		android::text::TextPaint getTextPaint();
		jint hashCode();
		JString toString();
	};
} // namespace android::text

