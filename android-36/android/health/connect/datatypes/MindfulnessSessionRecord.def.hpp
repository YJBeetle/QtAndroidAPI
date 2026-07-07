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
	class MindfulnessSessionRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType MINDFULNESS_DURATION_TOTAL();
		static jint MINDFULNESS_SESSION_TYPE_BREATHING();
		static jint MINDFULNESS_SESSION_TYPE_MEDITATION();
		static jint MINDFULNESS_SESSION_TYPE_MOVEMENT();
		static jint MINDFULNESS_SESSION_TYPE_MUSIC();
		static jint MINDFULNESS_SESSION_TYPE_OTHER();
		static jint MINDFULNESS_SESSION_TYPE_UNGUIDED();
		static jint MINDFULNESS_SESSION_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MindfulnessSessionRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		MindfulnessSessionRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getMindfulnessSessionType() const;
		JString getNotes() const;
		JString getTitle() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

