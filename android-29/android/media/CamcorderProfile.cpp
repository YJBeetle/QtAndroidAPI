#include "./CamcorderProfile.hpp"

namespace android::media
{
	// Fields
	jint CamcorderProfile::QUALITY_1080P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_1080P"
		);
	}
	jint CamcorderProfile::QUALITY_2160P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_2160P"
		);
	}
	jint CamcorderProfile::QUALITY_480P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_480P"
		);
	}
	jint CamcorderProfile::QUALITY_720P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_720P"
		);
	}
	jint CamcorderProfile::QUALITY_CIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_CIF"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_1080P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_1080P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_2160P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_2160P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_480P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_480P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_720P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_720P"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_HIGH"
		);
	}
	jint CamcorderProfile::QUALITY_HIGH_SPEED_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_HIGH_SPEED_LOW"
		);
	}
	jint CamcorderProfile::QUALITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_LOW"
		);
	}
	jint CamcorderProfile::QUALITY_QCIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QCIF"
		);
	}
	jint CamcorderProfile::QUALITY_QVGA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_QVGA"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_1080P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_1080P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_2160P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_2160P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_480P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_480P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_720P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_720P"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_CIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_CIF"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_HIGH"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_LOW"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_QCIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QCIF"
		);
	}
	jint CamcorderProfile::QUALITY_TIME_LAPSE_QVGA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CamcorderProfile",
			"QUALITY_TIME_LAPSE_QVGA"
		);
	}
	jint CamcorderProfile::audioBitRate()
	{
		return __thiz.getField<jint>(
			"audioBitRate"
		);
	}
	jint CamcorderProfile::audioChannels()
	{
		return __thiz.getField<jint>(
			"audioChannels"
		);
	}
	jint CamcorderProfile::audioCodec()
	{
		return __thiz.getField<jint>(
			"audioCodec"
		);
	}
	jint CamcorderProfile::audioSampleRate()
	{
		return __thiz.getField<jint>(
			"audioSampleRate"
		);
	}
	jint CamcorderProfile::duration()
	{
		return __thiz.getField<jint>(
			"duration"
		);
	}
	jint CamcorderProfile::fileFormat()
	{
		return __thiz.getField<jint>(
			"fileFormat"
		);
	}
	jint CamcorderProfile::quality()
	{
		return __thiz.getField<jint>(
			"quality"
		);
	}
	jint CamcorderProfile::videoBitRate()
	{
		return __thiz.getField<jint>(
			"videoBitRate"
		);
	}
	jint CamcorderProfile::videoCodec()
	{
		return __thiz.getField<jint>(
			"videoCodec"
		);
	}
	jint CamcorderProfile::videoFrameHeight()
	{
		return __thiz.getField<jint>(
			"videoFrameHeight"
		);
	}
	jint CamcorderProfile::videoFrameRate()
	{
		return __thiz.getField<jint>(
			"videoFrameRate"
		);
	}
	jint CamcorderProfile::videoFrameWidth()
	{
		return __thiz.getField<jint>(
			"videoFrameWidth"
		);
	}
	
	CamcorderProfile::CamcorderProfile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CamcorderProfile::get(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"get",
			"(I)Landroid/media/CamcorderProfile;",
			arg0
		);
	}
	QAndroidJniObject CamcorderProfile::get(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.CamcorderProfile",
			"get",
			"(II)Landroid/media/CamcorderProfile;",
			arg0,
			arg1
		);
	}
	jboolean CamcorderProfile::hasProfile(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.CamcorderProfile",
			"hasProfile",
			"(I)Z",
			arg0
		);
	}
	jboolean CamcorderProfile::hasProfile(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.CamcorderProfile",
			"hasProfile",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::media

