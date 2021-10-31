#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::text
{
	class TextPaint;
}

namespace android::text::style
{
	class CharacterStyle : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharacterStyle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CharacterStyle(QAndroidJniObject obj);
		
		// Constructors
		CharacterStyle();
		
		// Methods
		static QAndroidJniObject wrap(android::text::style::CharacterStyle arg0);
		QAndroidJniObject getUnderlying();
		void updateDrawState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

