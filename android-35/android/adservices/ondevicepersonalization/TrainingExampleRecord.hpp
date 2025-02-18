#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./TrainingExampleRecord.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline JObject TrainingExampleRecord::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.ondevicepersonalization.TrainingExampleRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TrainingExampleRecord::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray TrainingExampleRecord::getResumptionToken() const
	{
		return callObjectMethod(
			"getResumptionToken",
			"()[B"
		);
	}
	inline JByteArray TrainingExampleRecord::getTrainingExample() const
	{
		return callObjectMethod(
			"getTrainingExample",
			"()[B"
		);
	}
	inline void TrainingExampleRecord::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
