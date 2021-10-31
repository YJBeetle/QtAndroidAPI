#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityResult;
}
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
	class FormattedNumberRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormattedNumberRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumberRange(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass appendTo(__JniBaseClass arg0);
		jchar charAt(jint arg0);
		jboolean equals(jobject arg0);
		java::math::BigDecimal getFirstBigDecimal();
		android::icu::number::NumberRangeFormatter_RangeIdentityResult getIdentityResult();
		java::math::BigDecimal getSecondBigDecimal();
		jint hashCode();
		jint length();
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0);
		jstring subSequence(jint arg0, jint arg1);
		__JniBaseClass toCharacterIterator();
		jstring toString();
	};
} // namespace android::icu::number

