#pragma once

#include "./GetMedicalDataSourcesRequest.def.hpp"
#include "../../../JString.hpp"
#include "./GetMedicalDataSourcesRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline GetMedicalDataSourcesRequest_Builder::GetMedicalDataSourcesRequest_Builder()
		: JObject(
			"android.health.connect.GetMedicalDataSourcesRequest$Builder",
			"()V"
		) {}
	inline GetMedicalDataSourcesRequest_Builder::GetMedicalDataSourcesRequest_Builder(android::health::connect::GetMedicalDataSourcesRequest arg0)
		: JObject(
			"android.health.connect.GetMedicalDataSourcesRequest$Builder",
			"(Landroid/health/connect/GetMedicalDataSourcesRequest;)V",
			arg0.object()
		) {}
	inline GetMedicalDataSourcesRequest_Builder::GetMedicalDataSourcesRequest_Builder(android::health::connect::GetMedicalDataSourcesRequest_Builder &arg0)
		: JObject(
			"android.health.connect.GetMedicalDataSourcesRequest$Builder",
			"(Landroid/health/connect/GetMedicalDataSourcesRequest$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::health::connect::GetMedicalDataSourcesRequest_Builder GetMedicalDataSourcesRequest_Builder::addPackageName(JString arg0) const
	{
		return callObjectMethod(
			"addPackageName",
			"(Ljava/lang/String;)Landroid/health/connect/GetMedicalDataSourcesRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::GetMedicalDataSourcesRequest GetMedicalDataSourcesRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/GetMedicalDataSourcesRequest;"
		);
	}
	inline android::health::connect::GetMedicalDataSourcesRequest_Builder GetMedicalDataSourcesRequest_Builder::clearPackageNames() const
	{
		return callObjectMethod(
			"clearPackageNames",
			"()Landroid/health/connect/GetMedicalDataSourcesRequest$Builder;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
