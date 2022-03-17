#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/lang/Integer.def.hpp"
#include "../../JString.hpp"
#include "./ContentProviderResult.def.hpp"

namespace android::content
{
	// Fields
	inline JObject ContentProviderResult::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ContentProviderResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline java::lang::Integer ContentProviderResult::count()
	{
		return getObjectField(
			"count",
			"Ljava/lang/Integer;"
		);
	}
	inline android::net::Uri ContentProviderResult::uri()
	{
		return getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline ContentProviderResult::ContentProviderResult(android::net::Uri arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	inline ContentProviderResult::ContentProviderResult(android::os::Parcel arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline ContentProviderResult::ContentProviderResult(jint arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint ContentProviderResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ContentProviderResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ContentProviderResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
