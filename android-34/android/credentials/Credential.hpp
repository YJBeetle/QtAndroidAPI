#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Credential.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject Credential::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.Credential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString Credential::TYPE_PASSWORD_CREDENTIAL()
	{
		return getStaticObjectField(
			"android.credentials.Credential",
			"TYPE_PASSWORD_CREDENTIAL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Credential::Credential(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.credentials.Credential",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint Credential::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle Credential::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString Credential::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline JString Credential::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Credential::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif
