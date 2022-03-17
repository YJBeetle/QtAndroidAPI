#pragma once

#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PersistableBundle.def.hpp"

namespace android::os
{
	// Fields
	inline JObject PersistableBundle::CREATOR()
	{
		return getStaticObjectField(
			"android.os.PersistableBundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::os::PersistableBundle PersistableBundle::EMPTY()
	{
		return getStaticObjectField(
			"android.os.PersistableBundle",
			"EMPTY",
			"Landroid/os/PersistableBundle;"
		);
	}
	
	// Constructors
	inline PersistableBundle::PersistableBundle()
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"()V"
		) {}
	inline PersistableBundle::PersistableBundle(android::os::PersistableBundle &arg0)
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		) {}
	inline PersistableBundle::PersistableBundle(jint arg0)
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JObject PersistableBundle::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::os::PersistableBundle PersistableBundle::deepCopy() const
	{
		return callObjectMethod(
			"deepCopy",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint PersistableBundle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::PersistableBundle PersistableBundle::getPersistableBundle(JString arg0) const
	{
		return callObjectMethod(
			"getPersistableBundle",
			"(Ljava/lang/String;)Landroid/os/PersistableBundle;",
			arg0.object<jstring>()
		);
	}
	inline void PersistableBundle::putPersistableBundle(JString arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"putPersistableBundle",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString PersistableBundle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PersistableBundle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers
#include "./BaseBundle.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
