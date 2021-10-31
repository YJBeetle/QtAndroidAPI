#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class ConstrainedFieldPosition;
}
namespace java::math
{
	class BigDecimal;
}

namespace android::icu::number
{
	class FormattedNumber : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormattedNumber(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumber(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass appendTo(__JniBaseClass arg0);
		jchar charAt(jint arg0);
		jint length();
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0);
		jstring subSequence(jint arg0, jint arg1);
		java::math::BigDecimal toBigDecimal();
		__JniBaseClass toCharacterIterator();
		jstring toString();
	};
} // namespace android::icu::number

