#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigDecimal;
}

namespace android::icu::number
{
	class FormattedNumber : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormattedNumber(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumber(QJniObject obj);
		
		// Constructors
		
		// Methods
		jchar charAt(jint arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jint length();
		jstring subSequence(jint arg0, jint arg1);
		java::math::BigDecimal toBigDecimal();
		JObject toCharacterIterator();
		jstring toString();
	};
} // namespace android::icu::number

