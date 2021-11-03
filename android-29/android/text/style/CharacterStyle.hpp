#pragma once

#include "../../../JObject.hpp"

namespace android::text
{
	class TextPaint;
}

namespace android::text::style
{
	class CharacterStyle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CharacterStyle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharacterStyle(QJniObject obj);
		
		// Constructors
		CharacterStyle();
		
		// Methods
		static android::text::style::CharacterStyle wrap(android::text::style::CharacterStyle arg0);
		android::text::style::CharacterStyle getUnderlying();
		void updateDrawState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

