#pragma once

#include "../../../JIntArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./PendingJobReasonsInfo.def.hpp"

namespace android::app::job
{
	// Fields
	inline JObject PendingJobReasonsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.PendingJobReasonsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PendingJobReasonsInfo::PendingJobReasonsInfo(jlong arg0, JIntArray arg1)
		: JObject(
			"android.app.job.PendingJobReasonsInfo",
			"(J[I)V",
			arg0,
			arg1.object<jintArray>()
		) {}
	
	// Methods
	inline jint PendingJobReasonsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JIntArray PendingJobReasonsInfo::getPendingJobReasons() const
	{
		return callObjectMethod(
			"getPendingJobReasons",
			"()[I"
		);
	}
	inline jlong PendingJobReasonsInfo::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline void PendingJobReasonsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
