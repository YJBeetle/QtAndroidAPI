#pragma once

#include "./ReadMedicalResourcesPageRequest.def.hpp"
#include "../../../JString.hpp"
#include "./ReadMedicalResourcesPageRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline ReadMedicalResourcesPageRequest_Builder::ReadMedicalResourcesPageRequest_Builder(android::health::connect::ReadMedicalResourcesPageRequest arg0)
		: JObject(
			"android.health.connect.ReadMedicalResourcesPageRequest$Builder",
			"(Landroid/health/connect/ReadMedicalResourcesPageRequest;)V",
			arg0.object()
		) {}
	inline ReadMedicalResourcesPageRequest_Builder::ReadMedicalResourcesPageRequest_Builder(android::health::connect::ReadMedicalResourcesPageRequest_Builder &arg0)
		: JObject(
			"android.health.connect.ReadMedicalResourcesPageRequest$Builder",
			"(Landroid/health/connect/ReadMedicalResourcesPageRequest$Builder;)V",
			arg0.object()
		) {}
	inline ReadMedicalResourcesPageRequest_Builder::ReadMedicalResourcesPageRequest_Builder(JString arg0)
		: JObject(
			"android.health.connect.ReadMedicalResourcesPageRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::health::connect::ReadMedicalResourcesPageRequest ReadMedicalResourcesPageRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/ReadMedicalResourcesPageRequest;"
		);
	}
	inline android::health::connect::ReadMedicalResourcesPageRequest_Builder ReadMedicalResourcesPageRequest_Builder::setPageSize(jint arg0) const
	{
		return callObjectMethod(
			"setPageSize",
			"(I)Landroid/health/connect/ReadMedicalResourcesPageRequest$Builder;",
			arg0
		);
	}
	inline android::health::connect::ReadMedicalResourcesPageRequest_Builder ReadMedicalResourcesPageRequest_Builder::setPageToken(JString arg0) const
	{
		return callObjectMethod(
			"setPageToken",
			"(Ljava/lang/String;)Landroid/health/connect/ReadMedicalResourcesPageRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
