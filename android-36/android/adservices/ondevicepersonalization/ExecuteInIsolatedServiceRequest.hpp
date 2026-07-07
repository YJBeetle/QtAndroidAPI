#pragma once

#include "./ExecuteInIsolatedServiceRequest_OutputSpec.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JObject.hpp"
#include "./ExecuteInIsolatedServiceRequest.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ExecuteInIsolatedServiceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::PersistableBundle ExecuteInIsolatedServiceRequest::getAppParams() const
	{
		return callObjectMethod(
			"getAppParams",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec ExecuteInIsolatedServiceRequest::getOutputSpec() const
	{
		return callObjectMethod(
			"getOutputSpec",
			"()Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest$OutputSpec;"
		);
	}
	inline android::content::ComponentName ExecuteInIsolatedServiceRequest::getService() const
	{
		return callObjectMethod(
			"getService",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jint ExecuteInIsolatedServiceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
