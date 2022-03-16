#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JString;
class JObject;
class JString;
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}

namespace java::time
{
	class Duration : public JObject
	{
	public:
		// Fields
		static java::time::Duration ZERO();
		
		// QJniObject forward
		template<typename ...Ts> explicit Duration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Duration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::Duration between(JObject arg0, JObject arg1);
		static java::time::Duration from(JObject arg0);
		static java::time::Duration of(jlong arg0, JObject arg1);
		static java::time::Duration ofDays(jlong arg0);
		static java::time::Duration ofHours(jlong arg0);
		static java::time::Duration ofMillis(jlong arg0);
		static java::time::Duration ofMinutes(jlong arg0);
		static java::time::Duration ofNanos(jlong arg0);
		static java::time::Duration ofSeconds(jlong arg0);
		static java::time::Duration ofSeconds(jlong arg0, jlong arg1);
		static java::time::Duration parse(JString arg0);
		java::time::Duration abs() const;
		JObject addTo(JObject arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::Duration arg0) const;
		java::time::Duration dividedBy(jlong arg0) const;
		jlong dividedBy(java::time::Duration arg0) const;
		jboolean equals(JObject arg0) const;
		jlong get(JObject arg0) const;
		jint getNano() const;
		jlong getSeconds() const;
		JObject getUnits() const;
		jint hashCode() const;
		jboolean isNegative() const;
		jboolean isZero() const;
		java::time::Duration minus(java::time::Duration arg0) const;
		java::time::Duration minus(jlong arg0, JObject arg1) const;
		java::time::Duration minusDays(jlong arg0) const;
		java::time::Duration minusHours(jlong arg0) const;
		java::time::Duration minusMillis(jlong arg0) const;
		java::time::Duration minusMinutes(jlong arg0) const;
		java::time::Duration minusNanos(jlong arg0) const;
		java::time::Duration minusSeconds(jlong arg0) const;
		java::time::Duration multipliedBy(jlong arg0) const;
		java::time::Duration negated() const;
		java::time::Duration plus(java::time::Duration arg0) const;
		java::time::Duration plus(jlong arg0, JObject arg1) const;
		java::time::Duration plusDays(jlong arg0) const;
		java::time::Duration plusHours(jlong arg0) const;
		java::time::Duration plusMillis(jlong arg0) const;
		java::time::Duration plusMinutes(jlong arg0) const;
		java::time::Duration plusNanos(jlong arg0) const;
		java::time::Duration plusSeconds(jlong arg0) const;
		JObject subtractFrom(JObject arg0) const;
		jlong toDays() const;
		jlong toDaysPart() const;
		jlong toHours() const;
		jint toHoursPart() const;
		jlong toMillis() const;
		jint toMillisPart() const;
		jlong toMinutes() const;
		jint toMinutesPart() const;
		jlong toNanos() const;
		jint toNanosPart() const;
		jlong toSeconds() const;
		jint toSecondsPart() const;
		JString toString() const;
		java::time::Duration truncatedTo(JObject arg0) const;
		java::time::Duration withNanos(jint arg0) const;
		java::time::Duration withSeconds(jlong arg0) const;
	};
} // namespace java::time

