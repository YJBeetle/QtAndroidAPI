#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AppUriAuthenticationPolicy.def.hpp"

namespace android::security
{
	// Fields
	inline JObject AppUriAuthenticationPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.security.AppUriAuthenticationPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AppUriAuthenticationPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AppUriAuthenticationPolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AppUriAuthenticationPolicy::getAppAndUriMappings() const
	{
		return callObjectMethod(
			"getAppAndUriMappings",
			"()Ljava/util/Map;"
		);
	}
	inline jint AppUriAuthenticationPolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AppUriAuthenticationPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AppUriAuthenticationPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
