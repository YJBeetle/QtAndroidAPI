#pragma once

#include "./DeleteMedicalResourcesRequest.def.hpp"
#include "../../../JString.hpp"
#include "./DeleteMedicalResourcesRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline DeleteMedicalResourcesRequest_Builder::DeleteMedicalResourcesRequest_Builder()
		: JObject(
			"android.health.connect.DeleteMedicalResourcesRequest$Builder",
			"()V"
		) {}
	inline DeleteMedicalResourcesRequest_Builder::DeleteMedicalResourcesRequest_Builder(android::health::connect::DeleteMedicalResourcesRequest arg0)
		: JObject(
			"android.health.connect.DeleteMedicalResourcesRequest$Builder",
			"(Landroid/health/connect/DeleteMedicalResourcesRequest;)V",
			arg0.object()
		) {}
	inline DeleteMedicalResourcesRequest_Builder::DeleteMedicalResourcesRequest_Builder(android::health::connect::DeleteMedicalResourcesRequest_Builder &arg0)
		: JObject(
			"android.health.connect.DeleteMedicalResourcesRequest$Builder",
			"(Landroid/health/connect/DeleteMedicalResourcesRequest$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::health::connect::DeleteMedicalResourcesRequest_Builder DeleteMedicalResourcesRequest_Builder::addDataSourceId(JString arg0) const
	{
		return callObjectMethod(
			"addDataSourceId",
			"(Ljava/lang/String;)Landroid/health/connect/DeleteMedicalResourcesRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::DeleteMedicalResourcesRequest_Builder DeleteMedicalResourcesRequest_Builder::addMedicalResourceType(jint arg0) const
	{
		return callObjectMethod(
			"addMedicalResourceType",
			"(I)Landroid/health/connect/DeleteMedicalResourcesRequest$Builder;",
			arg0
		);
	}
	inline android::health::connect::DeleteMedicalResourcesRequest DeleteMedicalResourcesRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/DeleteMedicalResourcesRequest;"
		);
	}
	inline android::health::connect::DeleteMedicalResourcesRequest_Builder DeleteMedicalResourcesRequest_Builder::clearDataSourceIds() const
	{
		return callObjectMethod(
			"clearDataSourceIds",
			"()Landroid/health/connect/DeleteMedicalResourcesRequest$Builder;"
		);
	}
	inline android::health::connect::DeleteMedicalResourcesRequest_Builder DeleteMedicalResourcesRequest_Builder::clearMedicalResourceTypes() const
	{
		return callObjectMethod(
			"clearMedicalResourceTypes",
			"()Landroid/health/connect/DeleteMedicalResourcesRequest$Builder;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
