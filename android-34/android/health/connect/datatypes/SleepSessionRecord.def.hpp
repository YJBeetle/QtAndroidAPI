#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JString;
class JObject;

namespace android::health::connect::datatypes
{
	class SleepSessionRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType SLEEP_DURATION_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit SleepSessionRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		SleepSessionRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getNotes() const;
		JObject getStages() const;
		JString getTitle() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

