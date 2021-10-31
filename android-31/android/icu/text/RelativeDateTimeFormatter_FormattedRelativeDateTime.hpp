#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class ConstrainedFieldPosition;
}

namespace android::icu::text
{
	class RelativeDateTimeFormatter_FormattedRelativeDateTime : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_FormattedRelativeDateTime(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_FormattedRelativeDateTime(QAndroidJniObject obj);
		
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

