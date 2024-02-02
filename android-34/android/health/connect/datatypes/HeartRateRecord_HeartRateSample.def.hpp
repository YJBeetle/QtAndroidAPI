#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class HeartRateRecord_HeartRateSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HeartRateRecord_HeartRateSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HeartRateRecord_HeartRateSample(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HeartRateRecord_HeartRateSample(jlong arg0, java::time::Instant arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getBeatsPerMinute() const;
		java::time::Instant getTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

