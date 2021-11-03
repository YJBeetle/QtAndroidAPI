#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
		Duration(QJniObject obj);
		
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
		static java::time::Duration parse(jstring arg0);
		java::time::Duration abs();
		JObject addTo(JObject arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::Duration arg0);
		java::time::Duration dividedBy(jlong arg0);
		jlong dividedBy(java::time::Duration arg0);
		jboolean equals(jobject arg0);
		jlong get(JObject arg0);
		jint getNano();
		jlong getSeconds();
		JObject getUnits();
		jint hashCode();
		jboolean isNegative();
		jboolean isZero();
		java::time::Duration minus(java::time::Duration arg0);
		java::time::Duration minus(jlong arg0, JObject arg1);
		java::time::Duration minusDays(jlong arg0);
		java::time::Duration minusHours(jlong arg0);
		java::time::Duration minusMillis(jlong arg0);
		java::time::Duration minusMinutes(jlong arg0);
		java::time::Duration minusNanos(jlong arg0);
		java::time::Duration minusSeconds(jlong arg0);
		java::time::Duration multipliedBy(jlong arg0);
		java::time::Duration negated();
		java::time::Duration plus(java::time::Duration arg0);
		java::time::Duration plus(jlong arg0, JObject arg1);
		java::time::Duration plusDays(jlong arg0);
		java::time::Duration plusHours(jlong arg0);
		java::time::Duration plusMillis(jlong arg0);
		java::time::Duration plusMinutes(jlong arg0);
		java::time::Duration plusNanos(jlong arg0);
		java::time::Duration plusSeconds(jlong arg0);
		JObject subtractFrom(JObject arg0);
		jlong toDays();
		jlong toDaysPart();
		jlong toHours();
		jint toHoursPart();
		jlong toMillis();
		jint toMillisPart();
		jlong toMinutes();
		jint toMinutesPart();
		jlong toNanos();
		jint toNanosPart();
		jlong toSeconds();
		jint toSecondsPart();
		jstring toString();
		java::time::Duration truncatedTo(JObject arg0);
		java::time::Duration withNanos(jint arg0);
		java::time::Duration withSeconds(jlong arg0);
	};
} // namespace java::time

