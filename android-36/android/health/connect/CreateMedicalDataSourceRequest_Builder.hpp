#pragma once

#include "./CreateMedicalDataSourceRequest.def.hpp"
#include "./datatypes/FhirVersion.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./CreateMedicalDataSourceRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline CreateMedicalDataSourceRequest_Builder::CreateMedicalDataSourceRequest_Builder(android::health::connect::CreateMedicalDataSourceRequest arg0)
		: JObject(
			"android.health.connect.CreateMedicalDataSourceRequest$Builder",
			"(Landroid/health/connect/CreateMedicalDataSourceRequest;)V",
			arg0.object()
		) {}
	inline CreateMedicalDataSourceRequest_Builder::CreateMedicalDataSourceRequest_Builder(android::health::connect::CreateMedicalDataSourceRequest_Builder &arg0)
		: JObject(
			"android.health.connect.CreateMedicalDataSourceRequest$Builder",
			"(Landroid/health/connect/CreateMedicalDataSourceRequest$Builder;)V",
			arg0.object()
		) {}
	inline CreateMedicalDataSourceRequest_Builder::CreateMedicalDataSourceRequest_Builder(android::net::Uri arg0, JString arg1, android::health::connect::datatypes::FhirVersion arg2)
		: JObject(
			"android.health.connect.CreateMedicalDataSourceRequest$Builder",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/health/connect/datatypes/FhirVersion;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::CreateMedicalDataSourceRequest CreateMedicalDataSourceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/CreateMedicalDataSourceRequest;"
		);
	}
	inline android::health::connect::CreateMedicalDataSourceRequest_Builder CreateMedicalDataSourceRequest_Builder::setDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/health/connect/CreateMedicalDataSourceRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::CreateMedicalDataSourceRequest_Builder CreateMedicalDataSourceRequest_Builder::setFhirBaseUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setFhirBaseUri",
			"(Landroid/net/Uri;)Landroid/health/connect/CreateMedicalDataSourceRequest$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::CreateMedicalDataSourceRequest_Builder CreateMedicalDataSourceRequest_Builder::setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const
	{
		return callObjectMethod(
			"setFhirVersion",
			"(Landroid/health/connect/datatypes/FhirVersion;)Landroid/health/connect/CreateMedicalDataSourceRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
