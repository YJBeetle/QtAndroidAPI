#pragma once

#include "./ExecuteInIsolatedServiceRequest.def.hpp"
#include "./ExecuteInIsolatedServiceRequest_OutputSpec.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "./ExecuteInIsolatedServiceRequest_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline ExecuteInIsolatedServiceRequest_Builder::ExecuteInIsolatedServiceRequest_Builder(android::content::ComponentName arg0)
		: JObject(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceRequest$Builder",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest ExecuteInIsolatedServiceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest;"
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_Builder ExecuteInIsolatedServiceRequest_Builder::setAppParams(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setAppParams",
			"(Landroid/os/PersistableBundle;)Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_Builder ExecuteInIsolatedServiceRequest_Builder::setOutputSpec(android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec arg0) const
	{
		return callObjectMethod(
			"setOutputSpec",
			"(Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest$OutputSpec;)Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
