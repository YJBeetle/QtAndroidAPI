#include "./CamcorderProfile.hpp"

namespace android::media
{
	// Fields
	jint CamcorderProfile::QUALITY_1080P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_1080P"
		);
	}
	jint CamcorderProfile::QUALITY_2160P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_2160P"
		);
	}
	jint CamcorderProfile::QUALITY_480P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_480P"
		);
	}
	jint CamcorderProfile::QUALITY_720P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_720P"
		);
	}
	jint CamcorderProfile::QUALITY_CIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_CIF"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_1080P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_1080P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_2160P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_2160P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_480P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_480P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_720P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_720P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_HIGH"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_LOW()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_LOW"
		);
	}
	jint CamcorderProfile::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_LOW"
		);
	}
	jint CamcorderProfile::QUALITY_QCIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QCIF"
		);
	}
	jint CamcorderProfile::QUALITY_QVGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QVGA"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_1080P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_1080P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_2160P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_2160P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_480P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_480P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_720P()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_720P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_CIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_CIF"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_HIGH"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_LOW()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_LOW"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_QCIF()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QCIF"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_QVGA()
	{
		return getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QVGA"
		);
	}
	jint CamcorderProfile::audioBitRate()
	{
		return getField<jint>(
			"audioBitRate"
		);
	}
	jint CamcorderProfile::audioChannels()
	{
		return getField<jint>(
			"audioChannels"
		);
	}
	jint CamcorderProfile::audioCodec()
	{
		return getField<jint>(
			"audioCodec"
		);
	}
	jint CamcorderProfile::audioSampleRate()
	{
		return getField<jint>(
			"audioSampleRate"
		);
	}
	jint CamcorderProfile::duration()
	{
		return getField<jint>(
			"duration"
		);
	}
	jint CamcorderProfile::fileFormat()
	{
		return getField<jint>(
			"fileFormat"
		);
	}
	jint CamcorderProfile::quality()
	{
		return getField<jint>(
			"quality"
		);
	}
	jint CamcorderProfile::videoBitRate()
	{
		return getField<jint>(
			"videoBitRate"
		);
	}
	jint CamcorderProfile::videoCodec()
	{
		return getField<jint>(
			"videoCodec"
		);
	}
	jint CamcorderProfile::videoFrameHeight()
	{
		return getField<jint>(
			"videoFrameHeight"
		);
	}
	jint CamcorderProfile::videoFrameRate()
	{
		return getField<jint>(
			"videoFrameRate"
		);
	}
	jint CamcorderProfile::videoFrameWidth()
	{
		return getField<jint>(
			"videoFrameWidth"
		);
	}
	
	// Constructors
	
	// Methods
	android::media::CamcorderProfile CamcorderProfile::get(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"get",
			"(I)Landroid/media/CamcorderProfile;",
			arg0
		);
	}
	android::media::CamcorderProfile CamcorderProfile::get(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"get",
			"(II)Landroid/media/CamcorderProfile;",
			arg0,
			arg1
		);
	}
	jboolean CamcorderProfile::hasProfile(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.CamcorderProfile",
			"hasProfile",
			"(I)Z",
			arg0
		);
	}
	jboolean CamcorderProfile::hasProfile(jint arg0, jint arg1)
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

