#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TvRecordingInfo.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TvRecordingInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvRecordingInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TvRecordingInfo::FRIDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"FRIDAY"
		);
	}
	inline jint TvRecordingInfo::MONDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"MONDAY"
		);
	}
	inline jint TvRecordingInfo::RECORDING_ALL()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"RECORDING_ALL"
		);
	}
	inline jint TvRecordingInfo::RECORDING_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"RECORDING_IN_PROGRESS"
		);
	}
	inline jint TvRecordingInfo::RECORDING_SCHEDULED()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"RECORDING_SCHEDULED"
		);
	}
	inline jint TvRecordingInfo::SATURDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"SATURDAY"
		);
	}
	inline jint TvRecordingInfo::SUNDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"SUNDAY"
		);
	}
	inline jint TvRecordingInfo::THURSDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"THURSDAY"
		);
	}
	inline jint TvRecordingInfo::TUESDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"TUESDAY"
		);
	}
	inline jint TvRecordingInfo::WEDNESDAY()
	{
		return getStaticField<jint>(
			"android.media.tv.TvRecordingInfo",
			"WEDNESDAY"
		);
	}
	
	// Constructors
	inline TvRecordingInfo::TvRecordingInfo(JString arg0, jlong arg1, jlong arg2, jint arg3, JString arg4, JString arg5, jlong arg6, jlong arg7, android::net::Uri arg8, android::net::Uri arg9, JObject arg10, android::net::Uri arg11, jlong arg12, jlong arg13)
		: JObject(
			"android.media.tv.TvRecordingInfo",
			"(Ljava/lang/String;JJILjava/lang/String;Ljava/lang/String;JJLandroid/net/Uri;Landroid/net/Uri;Ljava/util/List;Landroid/net/Uri;JJ)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6,
			arg7,
			arg8.object(),
			arg9.object(),
			arg10.object(),
			arg11.object(),
			arg12,
			arg13
		) {}
	
	// Methods
	inline jint TvRecordingInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::Uri TvRecordingInfo::getChannelUri() const
	{
		return callObjectMethod(
			"getChannelUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject TvRecordingInfo::getContentRatings() const
	{
		return callObjectMethod(
			"getContentRatings",
			"()Ljava/util/List;"
		);
	}
	inline JString TvRecordingInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jlong TvRecordingInfo::getEndPaddingMillis() const
	{
		return callMethod<jlong>(
			"getEndPaddingMillis",
			"()J"
		);
	}
	inline JString TvRecordingInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri TvRecordingInfo::getProgramUri() const
	{
		return callObjectMethod(
			"getProgramUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jlong TvRecordingInfo::getRecordingDurationMillis() const
	{
		return callMethod<jlong>(
			"getRecordingDurationMillis",
			"()J"
		);
	}
	inline JString TvRecordingInfo::getRecordingId() const
	{
		return callObjectMethod(
			"getRecordingId",
			"()Ljava/lang/String;"
		);
	}
	inline jlong TvRecordingInfo::getRecordingStartTimeMillis() const
	{
		return callMethod<jlong>(
			"getRecordingStartTimeMillis",
			"()J"
		);
	}
	inline android::net::Uri TvRecordingInfo::getRecordingUri() const
	{
		return callObjectMethod(
			"getRecordingUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint TvRecordingInfo::getRepeatDays() const
	{
		return callMethod<jint>(
			"getRepeatDays",
			"()I"
		);
	}
	inline jlong TvRecordingInfo::getScheduledDurationMillis() const
	{
		return callMethod<jlong>(
			"getScheduledDurationMillis",
			"()J"
		);
	}
	inline jlong TvRecordingInfo::getScheduledStartTimeMillis() const
	{
		return callMethod<jlong>(
			"getScheduledStartTimeMillis",
			"()J"
		);
	}
	inline jlong TvRecordingInfo::getStartPaddingMillis() const
	{
		return callMethod<jlong>(
			"getStartPaddingMillis",
			"()J"
		);
	}
	inline void TvRecordingInfo::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvRecordingInfo::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvRecordingInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
