#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./BeginGetCredentialOption.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject BeginGetCredentialOption::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.BeginGetCredentialOption",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BeginGetCredentialOption::BeginGetCredentialOption(JString arg0, JString arg1, android::os::Bundle arg2)
		: JObject(
			"android.service.credentials.BeginGetCredentialOption",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint BeginGetCredentialOption::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle BeginGetCredentialOption::getCandidateQueryData() const
	{
		return callObjectMethod(
			"getCandidateQueryData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString BeginGetCredentialOption::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString BeginGetCredentialOption::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline JString BeginGetCredentialOption::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BeginGetCredentialOption::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
