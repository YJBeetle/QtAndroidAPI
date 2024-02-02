#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample(jdouble arg0, java::time::Instant arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jdouble getRevolutionsPerMinute() const;
		java::time::Instant getTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

