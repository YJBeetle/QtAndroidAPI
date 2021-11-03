#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityResult;
}
namespace android::icu::text
{
	class ConstrainedFieldPosition;
}
class JString;
class JObject;
class JString;
namespace java::math
{
	class BigDecimal;
}

namespace android::icu::number
{
	class FormattedNumberRange : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormattedNumberRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumberRange(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject appendTo(JObject arg0) const;
		jchar charAt(jint arg0) const;
		jboolean equals(JObject arg0) const;
		java::math::BigDecimal getFirstBigDecimal() const;
		android::icu::number::NumberRangeFormatter_RangeIdentityResult getIdentityResult() const;
		java::math::BigDecimal getSecondBigDecimal() const;
		jint hashCode() const;
		jint length() const;
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const;
		JString subSequence(jint arg0, jint arg1) const;
		JObject toCharacterIterator() const;
		JString toString() const;
	};
} // namespace android::icu::number

