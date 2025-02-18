#pragma once

#include "./InstantRecord.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class RespiratoryRateRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RespiratoryRateRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		RespiratoryRateRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jdouble getRate() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

