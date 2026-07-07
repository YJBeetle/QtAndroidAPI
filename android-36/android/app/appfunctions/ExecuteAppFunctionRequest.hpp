#pragma once

#include "../appsearch/GenericDocument.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ExecuteAppFunctionRequest.def.hpp"

namespace android::app::appfunctions
{
	// Fields
	inline JObject ExecuteAppFunctionRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appfunctions.ExecuteAppFunctionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ExecuteAppFunctionRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle ExecuteAppFunctionRequest::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString ExecuteAppFunctionRequest::getFunctionIdentifier() const
	{
		return callObjectMethod(
			"getFunctionIdentifier",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::appsearch::GenericDocument ExecuteAppFunctionRequest::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	inline JString ExecuteAppFunctionRequest::getTargetPackageName() const
	{
		return callObjectMethod(
			"getTargetPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline void ExecuteAppFunctionRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
