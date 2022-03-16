#pragma once

#include "./EncoderProfiles.def.hpp"
#include "../../JString.hpp"
#include "./CamcorderProfile.def.hpp"

namespace android::media
{
	// Fields
	inline jint CamcorderProfile::QUALITY_1080P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_1080P"
		);
	}
	inline jint CamcorderProfile::QUALITY_2160P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_2160P"
		);
	}
	inline jint CamcorderProfile::QUALITY_2K()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_2K"
		);
	}
	inline jint CamcorderProfile::QUALITY_480P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_480P"
		);
	}
	inline jint CamcorderProfile::QUALITY_4KDCI()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_4KDCI"
		);
	}
	inline jint CamcorderProfile::QUALITY_720P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_720P"
		);
	}
	inline jint CamcorderProfile::QUALITY_8KUHD()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_8KUHD"
		);
	}
	inline jint CamcorderProfile::QUALITY_CIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_CIF"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_1080P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_1080P"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_2160P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_2160P"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_480P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_480P"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_4KDCI()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_4KDCI"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_720P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_720P"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_CIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_CIF"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_HIGH"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_LOW()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_LOW"
		);
	}
	inline jint CamcorderProfile::QUALITY_HIGH_SPEED_VGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_VGA"
		);
	}
	inline jint CamcorderProfile::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_LOW"
		);
	}
	inline jint CamcorderProfile::QUALITY_QCIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QCIF"
		);
	}
	inline jint CamcorderProfile::QUALITY_QHD()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QHD"
		);
	}
	inline jint CamcorderProfile::QUALITY_QVGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QVGA"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_1080P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_1080P"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_2160P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_2160P"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_2K()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_2K"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_480P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_480P"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_4KDCI()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_4KDCI"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_720P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_720P"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_8KUHD()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_8KUHD"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_CIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_CIF"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_HIGH"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_LOW()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_LOW"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_QCIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QCIF"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_QHD()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QHD"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_QVGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QVGA"
		);
	}
	inline jint CamcorderProfile::QUALITY_TIME_LAPSE_VGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_VGA"
		);
	}
	inline jint CamcorderProfile::QUALITY_VGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_VGA"
		);
	}
	inline jint CamcorderProfile::audioBitRate()
	{
		return getField<jint>(
			"audioBitRate"
		);
	}
	inline jint CamcorderProfile::audioChannels()
	{
		return getField<jint>(
			"audioChannels"
		);
	}
	inline jint CamcorderProfile::audioCodec()
	{
		return getField<jint>(
			"audioCodec"
		);
	}
	inline jint CamcorderProfile::audioSampleRate()
	{
		return getField<jint>(
			"audioSampleRate"
		);
	}
	inline jint CamcorderProfile::duration()
	{
		return getField<jint>(
			"duration"
		);
	}
	inline jint CamcorderProfile::fileFormat()
	{
		return getField<jint>(
			"fileFormat"
		);
	}
	inline jint CamcorderProfile::quality()
	{
		return getField<jint>(
			"quality"
		);
	}
	inline jint CamcorderProfile::videoBitRate()
	{
		return getField<jint>(
			"videoBitRate"
		);
	}
	inline jint CamcorderProfile::videoCodec()
	{
		return getField<jint>(
			"videoCodec"
		);
	}
	inline jint CamcorderProfile::videoFrameHeight()
	{
		return getField<jint>(
			"videoFrameHeight"
		);
	}
	inline jint CamcorderProfile::videoFrameRate()
	{
		return getField<jint>(
			"videoFrameRate"
		);
	}
	inline jint CamcorderProfile::videoFrameWidth()
	{
		return getField<jint>(
			"videoFrameWidth"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::CamcorderProfile CamcorderProfile::get(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"get",
			"(I)Landroid/media/CamcorderProfile;",
			arg0
		);
	}
	inline android::media::CamcorderProfile CamcorderProfile::get(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"get",
			"(II)Landroid/media/CamcorderProfile;",
			arg0,
			arg1
		);
	}
	inline android::media::EncoderProfiles CamcorderProfile::getAll(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"getAll",
			"(Ljava/lang/String;I)Landroid/media/EncoderProfiles;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean CamcorderProfile::hasProfile(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.CamcorderProfile",
			"hasProfile",
			"(I)Z",
			arg0
		);
	}
	inline jboolean CamcorderProfile::hasProfile(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.CamcorderProfile",
			"hasProfile",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::media

// Base class headers

