#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/lang/Integer.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	inline JThrowable ContentProviderResult::exception()
	{
		return getObjectField(
			"exception",
			"Ljava/lang/Throwable;"
		);
	}
	inline android::os::Bundle ContentProviderResult::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
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
	inline ContentProviderResult::ContentProviderResult(android::os::Bundle arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(Landroid/os/Bundle;)V",
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
	inline ContentProviderResult::ContentProviderResult(JThrowable arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
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
