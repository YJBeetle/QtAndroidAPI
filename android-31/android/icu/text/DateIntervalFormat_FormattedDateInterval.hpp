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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateIntervalFormat_FormattedDateInterval(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalFormat_FormattedDateInterval(QAndroidJniObject obj) : JObject(obj) {}
		
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

