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
		
		// QJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_FormattedRelativeDateTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_FormattedRelativeDateTime(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject appendTo(JObject arg0) const;
		jchar charAt(jint arg0) const;
		jint length() const;
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const;
		JString subSequence(jint arg0, jint arg1) const;
		JObject toCharacterIterator() const;
		JString toString() const;
	};
} // namespace android::icu::text

