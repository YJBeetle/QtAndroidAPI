#pragma once

#include "../content/ComponentName.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PhoneAccountHandle.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject PhoneAccountHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccountHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName arg0, JString arg1)
		: JObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName arg0, JString arg1, android::os::UserHandle arg2)
		: JObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint PhoneAccountHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PhoneAccountHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::ComponentName PhoneAccountHandle::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JString PhoneAccountHandle::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::UserHandle PhoneAccountHandle::getUserHandle() const
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline jint PhoneAccountHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PhoneAccountHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PhoneAccountHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

