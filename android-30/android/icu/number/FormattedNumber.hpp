#pragma once

#include "../../../__JniBaseClass.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormattedNumber(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumber(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jchar charAt(jint arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jint length();
		jstring subSequence(jint arg0, jint arg1);
		java::math::BigDecimal toBigDecimal();
		__JniBaseClass toCharacterIterator();
		jstring toString();
	};
} // namespace android::icu::number

