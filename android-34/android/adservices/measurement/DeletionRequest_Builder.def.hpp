#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class DeletionRequest;
}
namespace java::time
{
	class Instant;
}

namespace android::adservices::measurement
{
	class DeletionRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeletionRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeletionRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeletionRequest_Builder();
		
		// Methods
		android::adservices::measurement::DeletionRequest build() const;
		android::adservices::measurement::DeletionRequest_Builder setDeletionMode(jint arg0) const;
		android::adservices::measurement::DeletionRequest_Builder setDomainUris(JObject arg0) const;
		android::adservices::measurement::DeletionRequest_Builder setEnd(java::time::Instant arg0) const;
		android::adservices::measurement::DeletionRequest_Builder setMatchBehavior(jint arg0) const;
		android::adservices::measurement::DeletionRequest_Builder setOriginUris(JObject arg0) const;
		android::adservices::measurement::DeletionRequest_Builder setStart(java::time::Instant arg0) const;
	};
} // namespace android::adservices::measurement

