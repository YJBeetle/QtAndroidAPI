#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class ConstrainedFieldPosition;
}

namespace android::icu::text
{
	class DateIntervalFormat_FormattedDateInterval : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateIntervalFormat_FormattedDateInterval(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalFormat_FormattedDateInterval(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass appendTo(__JniBaseClass arg0);
		jchar charAt(jint arg0);
		jint length();
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0);
		jstring subSequence(jint arg0, jint arg1);
		__JniBaseClass toCharacterIterator();
		jstring toString();
	};
} // namespace android::icu::text

