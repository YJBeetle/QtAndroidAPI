#pragma once

#include "../../app/slice/Slice.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./BeginGetCredentialOption.def.hpp"
#include "../../../JString.hpp"
#include "./CredentialEntry.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject CredentialEntry::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialEntry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CredentialEntry::CredentialEntry(android::service::credentials::BeginGetCredentialOption arg0, android::app::slice::Slice arg1)
		: JObject(
			"android.service.credentials.CredentialEntry",
			"(Landroid/service/credentials/BeginGetCredentialOption;Landroid/app/slice/Slice;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CredentialEntry::CredentialEntry(JString arg0, android::app::slice::Slice arg1)
		: JObject(
			"android.service.credentials.CredentialEntry",
			"(Ljava/lang/String;Landroid/app/slice/Slice;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline CredentialEntry::CredentialEntry(JString arg0, JString arg1, android::app::slice::Slice arg2)
		: JObject(
			"android.service.credentials.CredentialEntry",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/slice/Slice;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint CredentialEntry::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString CredentialEntry::getBeginGetCredentialOptionId() const
	{
		return callObjectMethod(
			"getBeginGetCredentialOptionId",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::slice::Slice CredentialEntry::getSlice() const
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	inline JString CredentialEntry::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline void CredentialEntry::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
