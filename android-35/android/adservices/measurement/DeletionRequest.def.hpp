#pragma once

#include "../../../JObject.hpp"

namespace java::time
{
	class Instant;
}

namespace android::adservices::measurement
{
	class DeletionRequest : public JObject
	{
	public:
		// Fields
		static jint DELETION_MODE_ALL();
		static jint DELETION_MODE_EXCLUDE_INTERNAL_DATA();
		static jint MATCH_BEHAVIOR_DELETE();
		static jint MATCH_BEHAVIOR_PRESERVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeletionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeletionRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getDeletionMode() const;
		JObject getDomainUris() const;
		java::time::Instant getEnd() const;
		jint getMatchBehavior() const;
		JObject getOriginUris() const;
		java::time::Instant getStart() const;
	};
} // namespace android::adservices::measurement

