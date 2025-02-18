#pragma once

#include "./ChangeLogTokenRequest.def.hpp"
#include "../datatypes/DataOrigin.def.hpp"
#include "../../../../JClass.hpp"
#include "./ChangeLogTokenRequest_Builder.def.hpp"

namespace android::health::connect::changelog
{
	// Fields
	
	// Constructors
	inline ChangeLogTokenRequest_Builder::ChangeLogTokenRequest_Builder()
		: JObject(
			"android.health.connect.changelog.ChangeLogTokenRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::health::connect::changelog::ChangeLogTokenRequest_Builder ChangeLogTokenRequest_Builder::addDataOriginFilter(android::health::connect::datatypes::DataOrigin arg0) const
	{
		return callObjectMethod(
			"addDataOriginFilter",
			"(Landroid/health/connect/datatypes/DataOrigin;)Landroid/health/connect/changelog/ChangeLogTokenRequest$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::changelog::ChangeLogTokenRequest_Builder ChangeLogTokenRequest_Builder::addRecordType(JClass arg0) const
	{
		return callObjectMethod(
			"addRecordType",
			"(Ljava/lang/Class;)Landroid/health/connect/changelog/ChangeLogTokenRequest$Builder;",
			arg0.object<jclass>()
		);
	}
	inline android::health::connect::changelog::ChangeLogTokenRequest ChangeLogTokenRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/changelog/ChangeLogTokenRequest;"
		);
	}
} // namespace android::health::connect::changelog

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::changelog;
#endif
