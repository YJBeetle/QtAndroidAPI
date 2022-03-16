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
		FormattedNumber(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jchar charAt(jint arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jint length() const;
		JString subSequence(jint arg0, jint arg1) const;
		java::math::BigDecimal toBigDecimal() const;
		JObject toCharacterIterator() const;
		JString toString() const;
	};
} // namespace android::icu::number

