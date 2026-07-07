#pragma once

#include "./ReadMedicalResourcesInitialRequest.def.hpp"
#include "../../../JString.hpp"
#include "./ReadMedicalResourcesInitialRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline ReadMedicalResourcesInitialRequest_Builder::ReadMedicalResourcesInitialRequest_Builder(android::health::connect::ReadMedicalResourcesInitialRequest arg0)
		: JObject(
			"android.health.connect.ReadMedicalResourcesInitialRequest$Builder",
			"(Landroid/health/connect/ReadMedicalResourcesInitialRequest;)V",
			arg0.object()
		) {}
	inline ReadMedicalResourcesInitialRequest_Builder::ReadMedicalResourcesInitialRequest_Builder(android::health::connect::ReadMedicalResourcesInitialRequest_Builder &arg0)
		: JObject(
			"android.health.connect.ReadMedicalResourcesInitialRequest$Builder",
			"(Landroid/health/connect/ReadMedicalResourcesInitialRequest$Builder;)V",
			arg0.object()
		) {}
	inline ReadMedicalResourcesInitialRequest_Builder::ReadMedicalResourcesInitialRequest_Builder(jint arg0)
		: JObject(
			"android.health.connect.ReadMedicalResourcesInitialRequest$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::health::connect::ReadMedicalResourcesInitialRequest_Builder ReadMedicalResourcesInitialRequest_Builder::addDataSourceId(JString arg0) const
	{
		return callObjectMethod(
			"addDataSourceId",
			"(Ljava/lang/String;)Landroid/health/connect/ReadMedicalResourcesInitialRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::ReadMedicalResourcesInitialRequest_Builder ReadMedicalResourcesInitialRequest_Builder::addDataSourceIds(JObject arg0) const
	{
		return callObjectMethod(
			"addDataSourceIds",
			"(Ljava/util/Set;)Landroid/health/connect/ReadMedicalResourcesInitialRequest$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::ReadMedicalResourcesInitialRequest ReadMedicalResourcesInitialRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/ReadMedicalResourcesInitialRequest;"
		);
	}
	inline android::health::connect::ReadMedicalResourcesInitialRequest_Builder ReadMedicalResourcesInitialRequest_Builder::clearDataSourceIds() const
	{
		return callObjectMethod(
			"clearDataSourceIds",
			"()Landroid/health/connect/ReadMedicalResourcesInitialRequest$Builder;"
		);
	}
	inline android::health::connect::ReadMedicalResourcesInitialRequest_Builder ReadMedicalResourcesInitialRequest_Builder::setMedicalResourceType(jint arg0) const
	{
		return callObjectMethod(
			"setMedicalResourceType",
			"(I)Landroid/health/connect/ReadMedicalResourcesInitialRequest$Builder;",
			arg0
		);
	}
	inline android::health::connect::ReadMedicalResourcesInitialRequest_Builder ReadMedicalResourcesInitialRequest_Builder::setPageSize(jint arg0) const
	{
		return callObjectMethod(
			"setPageSize",
			"(I)Landroid/health/connect/ReadMedicalResourcesInitialRequest$Builder;",
			arg0
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
