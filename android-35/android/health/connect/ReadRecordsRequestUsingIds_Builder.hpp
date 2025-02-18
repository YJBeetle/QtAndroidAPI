#pragma once

#include "./ReadRecordsRequestUsingIds.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "./ReadRecordsRequestUsingIds_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline ReadRecordsRequestUsingIds_Builder::ReadRecordsRequestUsingIds_Builder(JClass arg0)
		: JObject(
			"android.health.connect.ReadRecordsRequestUsingIds$Builder",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		) {}
	
	// Methods
	inline android::health::connect::ReadRecordsRequestUsingIds_Builder ReadRecordsRequestUsingIds_Builder::addClientRecordId(JString arg0) const
	{
		return callObjectMethod(
			"addClientRecordId",
			"(Ljava/lang/String;)Landroid/health/connect/ReadRecordsRequestUsingIds$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingIds_Builder ReadRecordsRequestUsingIds_Builder::addId(JString arg0) const
	{
		return callObjectMethod(
			"addId",
			"(Ljava/lang/String;)Landroid/health/connect/ReadRecordsRequestUsingIds$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingIds ReadRecordsRequestUsingIds_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/ReadRecordsRequestUsingIds;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
