#pragma once

#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "./RecordIdFilter.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::RecordIdFilter RecordIdFilter::fromClientRecordId(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.health.connect.RecordIdFilter",
			"fromClientRecordId",
			"(Ljava/lang/Class;Ljava/lang/String;)Landroid/health/connect/RecordIdFilter;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	inline android::health::connect::RecordIdFilter RecordIdFilter::fromId(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.health.connect.RecordIdFilter",
			"fromId",
			"(Ljava/lang/Class;Ljava/lang/String;)Landroid/health/connect/RecordIdFilter;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	inline JString RecordIdFilter::getClientRecordId() const
	{
		return callObjectMethod(
			"getClientRecordId",
			"()Ljava/lang/String;"
		);
	}
	inline JString RecordIdFilter::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JClass RecordIdFilter::getRecordType() const
	{
		return callObjectMethod(
			"getRecordType",
			"()Ljava/lang/Class;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
