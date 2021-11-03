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
		jboolean equals(JObject arg0) const;
		jint getBreakStrategy() const;
		jint getHyphenationFrequency() const;
		JObject getTextDirection() const;
		android::text::TextPaint getTextPaint() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::text

