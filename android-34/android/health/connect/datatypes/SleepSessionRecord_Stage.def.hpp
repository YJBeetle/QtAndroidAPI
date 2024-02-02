#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class SleepSessionRecord_Stage : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SleepSessionRecord_Stage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SleepSessionRecord_Stage(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SleepSessionRecord_Stage(java::time::Instant arg0, java::time::Instant arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getEndTime() const;
		java::time::Instant getStartTime() const;
		jint getType() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

