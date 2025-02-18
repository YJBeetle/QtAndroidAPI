#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RecognitionSupport.def.hpp"

namespace android::speech
{
	// Fields
	inline JObject RecognitionSupport::CREATOR()
	{
		return getStaticObjectField(
			"android.speech.RecognitionSupport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RecognitionSupport::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RecognitionSupport::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject RecognitionSupport::getInstalledOnDeviceLanguages() const
	{
		return callObjectMethod(
			"getInstalledOnDeviceLanguages",
			"()Ljava/util/List;"
		);
	}
	inline JObject RecognitionSupport::getOnlineLanguages() const
	{
		return callObjectMethod(
			"getOnlineLanguages",
			"()Ljava/util/List;"
		);
	}
	inline JObject RecognitionSupport::getPendingOnDeviceLanguages() const
	{
		return callObjectMethod(
			"getPendingOnDeviceLanguages",
			"()Ljava/util/List;"
		);
	}
	inline JObject RecognitionSupport::getSupportedOnDeviceLanguages() const
	{
		return callObjectMethod(
			"getSupportedOnDeviceLanguages",
			"()Ljava/util/List;"
		);
	}
	inline jint RecognitionSupport::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RecognitionSupport::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RecognitionSupport::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
