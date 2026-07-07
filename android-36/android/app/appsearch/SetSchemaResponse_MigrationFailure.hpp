#pragma once

#include "./AppSearchResult.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SetSchemaResponse_MigrationFailure.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject SetSchemaResponse_MigrationFailure::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.SetSchemaResponse$MigrationFailure",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SetSchemaResponse_MigrationFailure::SetSchemaResponse_MigrationFailure(JString arg0, JString arg1, JString arg2, android::app::appsearch::AppSearchResult arg3)
		: JObject(
			"android.app.appsearch.SetSchemaResponse$MigrationFailure",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/appsearch/AppSearchResult;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline jint SetSchemaResponse_MigrationFailure::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::appsearch::AppSearchResult SetSchemaResponse_MigrationFailure::getAppSearchResult() const
	{
		return callObjectMethod(
			"getAppSearchResult",
			"()Landroid/app/appsearch/AppSearchResult;"
		);
	}
	inline JString SetSchemaResponse_MigrationFailure::getDocumentId() const
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	inline JString SetSchemaResponse_MigrationFailure::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline JString SetSchemaResponse_MigrationFailure::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	inline JString SetSchemaResponse_MigrationFailure::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SetSchemaResponse_MigrationFailure::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
