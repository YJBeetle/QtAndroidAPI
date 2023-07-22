#pragma once

#include "../../../../os/Parcel.def.hpp"
#include "../../../../os/UserHandle.def.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./DomainVerificationUserState.def.hpp"

namespace android::content::pm::verify::domain
{
	// Fields
	inline JObject DomainVerificationUserState::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint DomainVerificationUserState::DOMAIN_STATE_NONE()
	{
		return getStaticField<jint>(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"DOMAIN_STATE_NONE"
		);
	}
	inline jint DomainVerificationUserState::DOMAIN_STATE_SELECTED()
	{
		return getStaticField<jint>(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"DOMAIN_STATE_SELECTED"
		);
	}
	inline jint DomainVerificationUserState::DOMAIN_STATE_VERIFIED()
	{
		return getStaticField<jint>(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"DOMAIN_STATE_VERIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DomainVerificationUserState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DomainVerificationUserState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DomainVerificationUserState::getHostToStateMap() const
	{
		return callObjectMethod(
			"getHostToStateMap",
			"()Ljava/util/Map;"
		);
	}
	inline JString DomainVerificationUserState::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::UserHandle DomainVerificationUserState::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	inline jint DomainVerificationUserState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean DomainVerificationUserState::isLinkHandlingAllowed() const
	{
		return callMethod<jboolean>(
			"isLinkHandlingAllowed",
			"()Z"
		);
	}
	inline JString DomainVerificationUserState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DomainVerificationUserState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm::verify::domain

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm::verify::domain;
#endif
