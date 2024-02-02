#pragma once

#include "./IntervalRecord.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class SpeedRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpeedRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		SpeedRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getSamples() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

