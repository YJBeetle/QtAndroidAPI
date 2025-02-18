#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect
{
	class TimeInstantRangeFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeInstantRangeFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeInstantRangeFilter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getEndTime() const;
		java::time::Instant getStartTime() const;
		jint hashCode() const;
		jboolean isBounded() const;
	};
} // namespace android::health::connect

