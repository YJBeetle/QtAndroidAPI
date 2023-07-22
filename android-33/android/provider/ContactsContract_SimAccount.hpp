#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_SimAccount.def.hpp"

namespace android::provider
{
	// Fields
	inline jint ContactsContract_SimAccount::ADN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"ADN_EF_TYPE"
		);
	}
	inline JObject ContactsContract_SimAccount::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SimAccount",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ContactsContract_SimAccount::FDN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"FDN_EF_TYPE"
		);
	}
	inline jint ContactsContract_SimAccount::SDN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"SDN_EF_TYPE"
		);
	}
	inline jint ContactsContract_SimAccount::UNKNOWN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"UNKNOWN_EF_TYPE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ContactsContract_SimAccount::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ContactsContract_SimAccount::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ContactsContract_SimAccount::getAccountName() const
	{
		return callObjectMethod(
			"getAccountName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_SimAccount::getAccountType() const
	{
		return callObjectMethod(
			"getAccountType",
			"()Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_SimAccount::getEfType() const
	{
		return callMethod<jint>(
			"getEfType",
			"()I"
		);
	}
	inline jint ContactsContract_SimAccount::getSimSlotIndex() const
	{
		return callMethod<jint>(
			"getSimSlotIndex",
			"()I"
		);
	}
	inline jint ContactsContract_SimAccount::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ContactsContract_SimAccount::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
