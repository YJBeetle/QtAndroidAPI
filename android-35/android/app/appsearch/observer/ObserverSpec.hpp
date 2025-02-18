#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./ObserverSpec.def.hpp"

namespace android::app::appsearch::observer
{
	// Fields
	inline JObject ObserverSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.observer.ObserverSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ObserverSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ObserverSpec::getFilterSchemas() const
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/Set;"
		);
	}
	inline void ObserverSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch::observer

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch::observer;
#endif
