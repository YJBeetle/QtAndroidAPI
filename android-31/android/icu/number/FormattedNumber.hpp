#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class ConstrainedFieldPosition;
}
class JString;
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
		JObject appendTo(JObject arg0) const;
		jchar charAt(jint arg0) const;
		jint length() const;
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const;
		JString subSequence(jint arg0, jint arg1) const;
		java::math::BigDecimal toBigDecimal() const;
		JObject toCharacterIterator() const;
		JString toString() const;
	};
} // namespace android::icu::number

