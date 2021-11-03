#pragma once

#include "../../../JObject.hpp"

class JString;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormattedNumber(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumber(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jchar charAt(jint arg0);
		jboolean equals(JObject arg0);
		jint hashCode();
		jint length();
		JString subSequence(jint arg0, jint arg1);
		java::math::BigDecimal toBigDecimal();
		JObject toCharacterIterator();
		JString toString();
	};
} // namespace android::icu::number

