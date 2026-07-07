#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::ondevicepersonalization
{
	class SurfacePackageToken;
}

namespace android::adservices::ondevicepersonalization
{
	class OnDevicePersonalizationManager_ExecuteResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OnDevicePersonalizationManager_ExecuteResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OnDevicePersonalizationManager_ExecuteResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getOutputData() const;
		android::adservices::ondevicepersonalization::SurfacePackageToken getSurfacePackageToken() const;
	};
} // namespace android::adservices::ondevicepersonalization

