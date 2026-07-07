#pragma once

#include "./FhirResource.def.hpp"
#include "./FhirVersion.def.hpp"
#include "./MedicalResource.def.hpp"
#include "../../../../JString.hpp"
#include "./MedicalResource_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline MedicalResource_Builder::MedicalResource_Builder(android::health::connect::datatypes::MedicalResource arg0)
		: JObject(
			"android.health.connect.datatypes.MedicalResource$Builder",
			"(Landroid/health/connect/datatypes/MedicalResource;)V",
			arg0.object()
		) {}
	inline MedicalResource_Builder::MedicalResource_Builder(android::health::connect::datatypes::MedicalResource_Builder &arg0)
		: JObject(
			"android.health.connect.datatypes.MedicalResource$Builder",
			"(Landroid/health/connect/datatypes/MedicalResource$Builder;)V",
			arg0.object()
		) {}
	inline MedicalResource_Builder::MedicalResource_Builder(jint arg0, JString arg1, android::health::connect::datatypes::FhirVersion arg2, android::health::connect::datatypes::FhirResource arg3)
		: JObject(
			"android.health.connect.datatypes.MedicalResource$Builder",
			"(ILjava/lang/String;Landroid/health/connect/datatypes/FhirVersion;Landroid/health/connect/datatypes/FhirResource;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::MedicalResource MedicalResource_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/MedicalResource;"
		);
	}
	inline android::health::connect::datatypes::MedicalResource_Builder MedicalResource_Builder::setDataSourceId(JString arg0) const
	{
		return callObjectMethod(
			"setDataSourceId",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/MedicalResource$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::MedicalResource_Builder MedicalResource_Builder::setFhirResource(android::health::connect::datatypes::FhirResource arg0) const
	{
		return callObjectMethod(
			"setFhirResource",
			"(Landroid/health/connect/datatypes/FhirResource;)Landroid/health/connect/datatypes/MedicalResource$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MedicalResource_Builder MedicalResource_Builder::setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const
	{
		return callObjectMethod(
			"setFhirVersion",
			"(Landroid/health/connect/datatypes/FhirVersion;)Landroid/health/connect/datatypes/MedicalResource$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MedicalResource_Builder MedicalResource_Builder::setType(jint arg0) const
	{
		return callObjectMethod(
			"setType",
			"(I)Landroid/health/connect/datatypes/MedicalResource$Builder;",
			arg0
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
