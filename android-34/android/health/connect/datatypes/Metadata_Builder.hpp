#pragma once

#include "./DataOrigin.def.hpp"
#include "./Device.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./Metadata_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline Metadata_Builder::Metadata_Builder()
		: JObject(
			"android.health.connect.datatypes.Metadata$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::health::connect::datatypes::Metadata Metadata_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/Metadata;"
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setClientRecordId(JString arg0) const
	{
		return callObjectMethod(
			"setClientRecordId",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setClientRecordVersion(jlong arg0) const
	{
		return callObjectMethod(
			"setClientRecordVersion",
			"(J)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setDataOrigin(android::health::connect::datatypes::DataOrigin arg0) const
	{
		return callObjectMethod(
			"setDataOrigin",
			"(Landroid/health/connect/datatypes/DataOrigin;)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setDevice(android::health::connect::datatypes::Device arg0) const
	{
		return callObjectMethod(
			"setDevice",
			"(Landroid/health/connect/datatypes/Device;)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setLastModifiedTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setLastModifiedTime",
			"(Ljava/time/Instant;)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::Metadata_Builder Metadata_Builder::setRecordingMethod(jint arg0) const
	{
		return callObjectMethod(
			"setRecordingMethod",
			"(I)Landroid/health/connect/datatypes/Metadata$Builder;",
			arg0
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
