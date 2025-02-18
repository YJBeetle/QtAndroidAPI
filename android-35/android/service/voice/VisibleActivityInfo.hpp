#pragma once

#include "../../os/Parcel.def.hpp"
#include "./VoiceInteractionSession_ActivityId.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VisibleActivityInfo.def.hpp"

namespace android::service::voice
{
	// Fields
	inline JObject VisibleActivityInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.service.voice.VisibleActivityInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VisibleActivityInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VisibleActivityInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::service::voice::VoiceInteractionSession_ActivityId VisibleActivityInfo::getActivityId() const
	{
		return callObjectMethod(
			"getActivityId",
			"()Landroid/service/voice/VoiceInteractionSession$ActivityId;"
		);
	}
	inline jint VisibleActivityInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString VisibleActivityInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VisibleActivityInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::voice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::voice;
#endif
