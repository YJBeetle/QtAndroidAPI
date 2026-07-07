#pragma once

#include "../../../JIntArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./UsageEventsQuery.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject UsageEventsQuery::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.UsageEventsQuery",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsageEventsQuery::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong UsageEventsQuery::getBeginTimeMillis() const
	{
		return callMethod<jlong>(
			"getBeginTimeMillis",
			"()J"
		);
	}
	inline jlong UsageEventsQuery::getEndTimeMillis() const
	{
		return callMethod<jlong>(
			"getEndTimeMillis",
			"()J"
		);
	}
	inline JIntArray UsageEventsQuery::getEventTypes() const
	{
		return callObjectMethod(
			"getEventTypes",
			"()[I"
		);
	}
	inline JObject UsageEventsQuery::getPackageNames() const
	{
		return callObjectMethod(
			"getPackageNames",
			"()Ljava/util/Set;"
		);
	}
	inline void UsageEventsQuery::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
