#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class SurfacePackageToken;
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
	class OnDevicePersonalizationManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OnDevicePersonalizationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OnDevicePersonalizationManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void execute(android::content::ComponentName arg0, android::os::PersistableBundle arg1, JObject arg2, JObject arg3) const;
		void requestSurfacePackage(android::adservices::ondevicepersonalization::SurfacePackageToken arg0, JObject arg1, jint arg2, jint arg3, jint arg4, JObject arg5, JObject arg6) const;
	};
} // namespace android::adservices::ondevicepersonalization

