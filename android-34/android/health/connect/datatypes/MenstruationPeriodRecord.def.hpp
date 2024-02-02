#pragma once

#include "./IntervalRecord.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class MenstruationPeriodRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MenstruationPeriodRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		MenstruationPeriodRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

