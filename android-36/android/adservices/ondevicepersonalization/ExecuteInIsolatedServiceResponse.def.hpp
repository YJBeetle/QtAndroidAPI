#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class SurfacePackageToken;
}

namespace android::adservices::ondevicepersonalization
{
	class ExecuteInIsolatedServiceResponse : public JObject
	{
	public:
		// Fields
		static jint DEFAULT_BEST_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteInIsolatedServiceResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteInIsolatedServiceResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExecuteInIsolatedServiceResponse(android::adservices::ondevicepersonalization::SurfacePackageToken arg0, jint arg1);
		
		// Methods
		jint getBestValue() const;
		android::adservices::ondevicepersonalization::SurfacePackageToken getSurfacePackageToken() const;
	};
} // namespace android::adservices::ondevicepersonalization

