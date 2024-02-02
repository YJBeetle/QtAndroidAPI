#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class StepsCadenceRecord_StepsCadenceRecordSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StepsCadenceRecord_StepsCadenceRecordSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StepsCadenceRecord_StepsCadenceRecordSample(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StepsCadenceRecord_StepsCadenceRecordSample(jdouble arg0, java::time::Instant arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jdouble getRate() const;
		java::time::Instant getTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

