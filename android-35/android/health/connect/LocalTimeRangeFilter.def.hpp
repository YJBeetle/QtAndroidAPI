#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::time
{
	class LocalDateTime;
}

namespace android::health::connect
{
	class LocalTimeRangeFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalTimeRangeFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalTimeRangeFilter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::LocalDateTime getEndTime() const;
		java::time::LocalDateTime getStartTime() const;
		jint hashCode() const;
		jboolean isBounded() const;
	};
} // namespace android::health::connect

