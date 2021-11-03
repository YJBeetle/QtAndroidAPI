#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class ConstrainedFieldPosition;
}
class JString;
class JString;

namespace android::icu::text
{
	class RelativeDateTimeFormatter_FormattedRelativeDateTime : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_FormattedRelativeDateTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_FormattedRelativeDateTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject appendTo(JObject arg0);
		jchar charAt(jint arg0);
		jint length();
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0);
		JString subSequence(jint arg0, jint arg1);
		JObject toCharacterIterator();
		JString toString();
	};
} // namespace android::icu::text

