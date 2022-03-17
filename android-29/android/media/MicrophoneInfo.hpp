#pragma once

#include "./MicrophoneInfo_Coordinate3F.def.hpp"
#include "../../JString.hpp"
#include "./MicrophoneInfo.def.hpp"

namespace android::media
{
	// Fields
	inline jint MicrophoneInfo::CHANNEL_MAPPING_DIRECT()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"CHANNEL_MAPPING_DIRECT"
		);
	}
	inline jint MicrophoneInfo::CHANNEL_MAPPING_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"CHANNEL_MAPPING_PROCESSED"
		);
	}
	inline jint MicrophoneInfo::DIRECTIONALITY_BI_DIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_BI_DIRECTIONAL"
		);
	}
	inline jint MicrophoneInfo::DIRECTIONALITY_CARDIOID()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_CARDIOID"
		);
	}
	inline jint MicrophoneInfo::DIRECTIONALITY_HYPER_CARDIOID()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_HYPER_CARDIOID"
		);
	}
	inline jint MicrophoneInfo::DIRECTIONALITY_OMNI()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_OMNI"
		);
	}
	inline jint MicrophoneInfo::DIRECTIONALITY_SUPER_CARDIOID()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_SUPER_CARDIOID"
		);
	}
	inline jint MicrophoneInfo::DIRECTIONALITY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_UNKNOWN"
		);
	}
	inline jint MicrophoneInfo::GROUP_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"GROUP_UNKNOWN"
		);
	}
	inline jint MicrophoneInfo::INDEX_IN_THE_GROUP_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"INDEX_IN_THE_GROUP_UNKNOWN"
		);
	}
	inline jint MicrophoneInfo::LOCATION_MAINBODY()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_MAINBODY"
		);
	}
	inline jint MicrophoneInfo::LOCATION_MAINBODY_MOVABLE()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_MAINBODY_MOVABLE"
		);
	}
	inline jint MicrophoneInfo::LOCATION_PERIPHERAL()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_PERIPHERAL"
		);
	}
	inline jint MicrophoneInfo::LOCATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_UNKNOWN"
		);
	}
	inline android::media::MicrophoneInfo_Coordinate3F MicrophoneInfo::ORIENTATION_UNKNOWN()
	{
		return getStaticObjectField(
			"android.media.MicrophoneInfo",
			"ORIENTATION_UNKNOWN",
			"Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	inline android::media::MicrophoneInfo_Coordinate3F MicrophoneInfo::POSITION_UNKNOWN()
	{
		return getStaticObjectField(
			"android.media.MicrophoneInfo",
			"POSITION_UNKNOWN",
			"Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	inline jfloat MicrophoneInfo::SENSITIVITY_UNKNOWN()
	{
		return getStaticField<jfloat>(
			"android.media.MicrophoneInfo",
			"SENSITIVITY_UNKNOWN"
		);
	}
	inline jfloat MicrophoneInfo::SPL_UNKNOWN()
	{
		return getStaticField<jfloat>(
			"android.media.MicrophoneInfo",
			"SPL_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString MicrophoneInfo::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JObject MicrophoneInfo::getChannelMapping() const
	{
		return callObjectMethod(
			"getChannelMapping",
			"()Ljava/util/List;"
		);
	}
	inline JString MicrophoneInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint MicrophoneInfo::getDirectionality() const
	{
		return callMethod<jint>(
			"getDirectionality",
			"()I"
		);
	}
	inline JObject MicrophoneInfo::getFrequencyResponse() const
	{
		return callObjectMethod(
			"getFrequencyResponse",
			"()Ljava/util/List;"
		);
	}
	inline jint MicrophoneInfo::getGroup() const
	{
		return callMethod<jint>(
			"getGroup",
			"()I"
		);
	}
	inline jint MicrophoneInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint MicrophoneInfo::getIndexInTheGroup() const
	{
		return callMethod<jint>(
			"getIndexInTheGroup",
			"()I"
		);
	}
	inline jint MicrophoneInfo::getLocation() const
	{
		return callMethod<jint>(
			"getLocation",
			"()I"
		);
	}
	inline jfloat MicrophoneInfo::getMaxSpl() const
	{
		return callMethod<jfloat>(
			"getMaxSpl",
			"()F"
		);
	}
	inline jfloat MicrophoneInfo::getMinSpl() const
	{
		return callMethod<jfloat>(
			"getMinSpl",
			"()F"
		);
	}
	inline android::media::MicrophoneInfo_Coordinate3F MicrophoneInfo::getOrientation() const
	{
		return callObjectMethod(
			"getOrientation",
			"()Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	inline android::media::MicrophoneInfo_Coordinate3F MicrophoneInfo::getPosition() const
	{
		return callObjectMethod(
			"getPosition",
			"()Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	inline jfloat MicrophoneInfo::getSensitivity() const
	{
		return callMethod<jfloat>(
			"getSensitivity",
			"()F"
		);
	}
	inline jint MicrophoneInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
