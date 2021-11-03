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
	class DateIntervalFormat_FormattedDateInterval : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateIntervalFormat_FormattedDateInterval(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalFormat_FormattedDateInterval(QJniObject obj);
		
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

