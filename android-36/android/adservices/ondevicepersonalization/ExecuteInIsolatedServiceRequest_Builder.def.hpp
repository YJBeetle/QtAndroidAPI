#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class ExecuteInIsolatedServiceRequest;
}
namespace android::adservices::ondevicepersonalization
{
	class ExecuteInIsolatedServiceRequest_OutputSpec;
}
namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::adservices::ondevicepersonalization
{
	class ExecuteInIsolatedServiceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteInIsolatedServiceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteInIsolatedServiceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExecuteInIsolatedServiceRequest_Builder(android::content::ComponentName arg0);
		
		// Methods
		android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest build() const;
		android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_Builder setAppParams(android::os::PersistableBundle arg0) const;
		android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_Builder setOutputSpec(android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

