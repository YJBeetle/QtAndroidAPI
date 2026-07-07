#pragma once

#include "./UpsertMedicalResourceRequest.def.hpp"
#include "./datatypes/FhirVersion.def.hpp"
#include "../../../JString.hpp"
#include "./UpsertMedicalResourceRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline UpsertMedicalResourceRequest_Builder::UpsertMedicalResourceRequest_Builder(android::health::connect::UpsertMedicalResourceRequest arg0)
		: JObject(
			"android.health.connect.UpsertMedicalResourceRequest$Builder",
			"(Landroid/health/connect/UpsertMedicalResourceRequest;)V",
			arg0.object()
		) {}
	inline UpsertMedicalResourceRequest_Builder::UpsertMedicalResourceRequest_Builder(android::health::connect::UpsertMedicalResourceRequest_Builder &arg0)
		: JObject(
			"android.health.connect.UpsertMedicalResourceRequest$Builder",
			"(Landroid/health/connect/UpsertMedicalResourceRequest$Builder;)V",
			arg0.object()
		) {}
	inline UpsertMedicalResourceRequest_Builder::UpsertMedicalResourceRequest_Builder(JString arg0, android::health::connect::datatypes::FhirVersion arg1, JString arg2)
		: JObject(
			"android.health.connect.UpsertMedicalResourceRequest$Builder",
			"(Ljava/lang/String;Landroid/health/connect/datatypes/FhirVersion;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::health::connect::UpsertMedicalResourceRequest UpsertMedicalResourceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/UpsertMedicalResourceRequest;"
		);
	}
	inline android::health::connect::UpsertMedicalResourceRequest_Builder UpsertMedicalResourceRequest_Builder::setData(JString arg0) const
	{
		return callObjectMethod(
			"setData",
			"(Ljava/lang/String;)Landroid/health/connect/UpsertMedicalResourceRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::UpsertMedicalResourceRequest_Builder UpsertMedicalResourceRequest_Builder::setDataSourceId(JString arg0) const
	{
		return callObjectMethod(
			"setDataSourceId",
			"(Ljava/lang/String;)Landroid/health/connect/UpsertMedicalResourceRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::UpsertMedicalResourceRequest_Builder UpsertMedicalResourceRequest_Builder::setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const
	{
		return callObjectMethod(
			"setFhirVersion",
			"(Landroid/health/connect/datatypes/FhirVersion;)Landroid/health/connect/UpsertMedicalResourceRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
