#pragma once

#include "../appsearch/GenericDocument.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ExecuteAppFunctionResponse.def.hpp"

namespace android::app::appfunctions
{
	// Fields
	inline JObject ExecuteAppFunctionResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appfunctions.ExecuteAppFunctionResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ExecuteAppFunctionResponse::PROPERTY_RETURN_VALUE()
	{
		return getStaticObjectField(
			"android.app.appfunctions.ExecuteAppFunctionResponse",
			"PROPERTY_RETURN_VALUE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ExecuteAppFunctionResponse::ExecuteAppFunctionResponse(android::app::appsearch::GenericDocument arg0)
		: JObject(
			"android.app.appfunctions.ExecuteAppFunctionResponse",
			"(Landroid/app/appsearch/GenericDocument;)V",
			arg0.object()
		) {}
	inline ExecuteAppFunctionResponse::ExecuteAppFunctionResponse(android::app::appsearch::GenericDocument arg0, android::os::Bundle arg1)
		: JObject(
			"android.app.appfunctions.ExecuteAppFunctionResponse",
			"(Landroid/app/appsearch/GenericDocument;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint ExecuteAppFunctionResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle ExecuteAppFunctionResponse::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::app::appsearch::GenericDocument ExecuteAppFunctionResponse::getResultDocument() const
	{
		return callObjectMethod(
			"getResultDocument",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	inline void ExecuteAppFunctionResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appfunctions

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appfunctions;
#endif
