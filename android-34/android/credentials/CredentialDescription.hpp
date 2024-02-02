#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CredentialDescription.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject CredentialDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.CredentialDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CredentialDescription::CredentialDescription(JString arg0, JObject arg1, JObject arg2)
		: JObject(
			"android.credentials.CredentialDescription",
			"(Ljava/lang/String;Ljava/util/Set;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jint CredentialDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CredentialDescription::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CredentialDescription::getCredentialEntries() const
	{
		return callObjectMethod(
			"getCredentialEntries",
			"()Ljava/util/List;"
		);
	}
	inline JObject CredentialDescription::getSupportedElementKeys() const
	{
		return callObjectMethod(
			"getSupportedElementKeys",
			"()Ljava/util/Set;"
		);
	}
	inline JString CredentialDescription::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jint CredentialDescription::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void CredentialDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
