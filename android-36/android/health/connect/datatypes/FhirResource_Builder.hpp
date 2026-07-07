#pragma once

#include "./FhirResource.def.hpp"
#include "../../../../JString.hpp"
#include "./FhirResource_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline FhirResource_Builder::FhirResource_Builder(android::health::connect::datatypes::FhirResource arg0)
		: JObject(
			"android.health.connect.datatypes.FhirResource$Builder",
			"(Landroid/health/connect/datatypes/FhirResource;)V",
			arg0.object()
		) {}
	inline FhirResource_Builder::FhirResource_Builder(android::health::connect::datatypes::FhirResource_Builder &arg0)
		: JObject(
			"android.health.connect.datatypes.FhirResource$Builder",
			"(Landroid/health/connect/datatypes/FhirResource$Builder;)V",
			arg0.object()
		) {}
	inline FhirResource_Builder::FhirResource_Builder(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.health.connect.datatypes.FhirResource$Builder",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::FhirResource FhirResource_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/FhirResource;"
		);
	}
	inline android::health::connect::datatypes::FhirResource_Builder FhirResource_Builder::setData(JString arg0) const
	{
		return callObjectMethod(
			"setData",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/FhirResource$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::FhirResource_Builder FhirResource_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/FhirResource$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::FhirResource_Builder FhirResource_Builder::setType(jint arg0) const
	{
		return callObjectMethod(
			"setType",
			"(I)Landroid/health/connect/datatypes/FhirResource$Builder;",
			arg0
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
