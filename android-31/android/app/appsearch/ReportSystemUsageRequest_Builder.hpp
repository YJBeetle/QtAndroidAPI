#pragma once

#include "./ReportSystemUsageRequest.def.hpp"
#include "../../../JString.hpp"
#include "./ReportSystemUsageRequest_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline ReportSystemUsageRequest_Builder::ReportSystemUsageRequest_Builder(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.app.appsearch.ReportSystemUsageRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::ReportSystemUsageRequest ReportSystemUsageRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/ReportSystemUsageRequest;"
		);
	}
	inline android::app::appsearch::ReportSystemUsageRequest_Builder ReportSystemUsageRequest_Builder::setUsageTimestampMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setUsageTimestampMillis",
			"(J)Landroid/app/appsearch/ReportSystemUsageRequest$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
