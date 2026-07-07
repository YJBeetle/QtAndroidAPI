#pragma once

#include "./ChangeLogsRequest.def.hpp"
#include "../../../../JString.hpp"
#include "./ChangeLogsRequest_Builder.def.hpp"

namespace android::health::connect::changelog
{
	// Fields
	
	// Constructors
	inline ChangeLogsRequest_Builder::ChangeLogsRequest_Builder(JString arg0)
		: JObject(
			"android.health.connect.changelog.ChangeLogsRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::health::connect::changelog::ChangeLogsRequest ChangeLogsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/changelog/ChangeLogsRequest;"
		);
	}
	inline android::health::connect::changelog::ChangeLogsRequest_Builder ChangeLogsRequest_Builder::setPageSize(jint arg0) const
	{
		return callObjectMethod(
			"setPageSize",
			"(I)Landroid/health/connect/changelog/ChangeLogsRequest$Builder;",
			arg0
		);
	}
} // namespace android::health::connect::changelog

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::changelog;
#endif
