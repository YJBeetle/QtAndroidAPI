#pragma once

#include "../../../JObject.hpp"

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
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class ExecuteInIsolatedServiceRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteInIsolatedServiceRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteInIsolatedServiceRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::os::PersistableBundle getAppParams() const;
		android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec getOutputSpec() const;
		android::content::ComponentName getService() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

