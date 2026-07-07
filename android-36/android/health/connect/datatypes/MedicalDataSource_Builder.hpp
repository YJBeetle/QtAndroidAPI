#pragma once

#include "./FhirVersion.def.hpp"
#include "./MedicalDataSource.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./MedicalDataSource_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline MedicalDataSource_Builder::MedicalDataSource_Builder(android::health::connect::datatypes::MedicalDataSource arg0)
		: JObject(
			"android.health.connect.datatypes.MedicalDataSource$Builder",
			"(Landroid/health/connect/datatypes/MedicalDataSource;)V",
			arg0.object()
		) {}
	inline MedicalDataSource_Builder::MedicalDataSource_Builder(android::health::connect::datatypes::MedicalDataSource_Builder &arg0)
		: JObject(
			"android.health.connect.datatypes.MedicalDataSource$Builder",
			"(Landroid/health/connect/datatypes/MedicalDataSource$Builder;)V",
			arg0.object()
		) {}
	inline MedicalDataSource_Builder::MedicalDataSource_Builder(JString arg0, JString arg1, android::net::Uri arg2, JString arg3, android::health::connect::datatypes::FhirVersion arg4)
		: JObject(
			"android.health.connect.datatypes.MedicalDataSource$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/lang/String;Landroid/health/connect/datatypes/FhirVersion;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jstring>(),
			arg4.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::MedicalDataSource MedicalDataSource_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/MedicalDataSource;"
		);
	}
	inline android::health::connect::datatypes::MedicalDataSource_Builder MedicalDataSource_Builder::setDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/MedicalDataSource$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::MedicalDataSource_Builder MedicalDataSource_Builder::setFhirBaseUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setFhirBaseUri",
			"(Landroid/net/Uri;)Landroid/health/connect/datatypes/MedicalDataSource$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MedicalDataSource_Builder MedicalDataSource_Builder::setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const
	{
		return callObjectMethod(
			"setFhirVersion",
			"(Landroid/health/connect/datatypes/FhirVersion;)Landroid/health/connect/datatypes/MedicalDataSource$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MedicalDataSource_Builder MedicalDataSource_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/MedicalDataSource$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::MedicalDataSource_Builder MedicalDataSource_Builder::setLastDataUpdateTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setLastDataUpdateTime",
			"(Ljava/time/Instant;)Landroid/health/connect/datatypes/MedicalDataSource$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MedicalDataSource_Builder MedicalDataSource_Builder::setPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/MedicalDataSource$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
