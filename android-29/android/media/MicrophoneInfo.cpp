#include "./MicrophoneInfo_Coordinate3F.hpp"
#include "./MicrophoneInfo.hpp"

namespace android::media
{
	// Fields
	jint MicrophoneInfo::CHANNEL_MAPPING_DIRECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"CHANNEL_MAPPING_DIRECT"
		);
	}
	jint MicrophoneInfo::CHANNEL_MAPPING_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"CHANNEL_MAPPING_PROCESSED"
		);
	}
	jint MicrophoneInfo::DIRECTIONALITY_BI_DIRECTIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_BI_DIRECTIONAL"
		);
	}
	jint MicrophoneInfo::DIRECTIONALITY_CARDIOID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_CARDIOID"
		);
	}
	jint MicrophoneInfo::DIRECTIONALITY_HYPER_CARDIOID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_HYPER_CARDIOID"
		);
	}
	jint MicrophoneInfo::DIRECTIONALITY_OMNI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_OMNI"
		);
	}
	jint MicrophoneInfo::DIRECTIONALITY_SUPER_CARDIOID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_SUPER_CARDIOID"
		);
	}
	jint MicrophoneInfo::DIRECTIONALITY_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"DIRECTIONALITY_UNKNOWN"
		);
	}
	jint MicrophoneInfo::GROUP_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"GROUP_UNKNOWN"
		);
	}
	jint MicrophoneInfo::INDEX_IN_THE_GROUP_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"INDEX_IN_THE_GROUP_UNKNOWN"
		);
	}
	jint MicrophoneInfo::LOCATION_MAINBODY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_MAINBODY"
		);
	}
	jint MicrophoneInfo::LOCATION_MAINBODY_MOVABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_MAINBODY_MOVABLE"
		);
	}
	jint MicrophoneInfo::LOCATION_PERIPHERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_PERIPHERAL"
		);
	}
	jint MicrophoneInfo::LOCATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MicrophoneInfo",
			"LOCATION_UNKNOWN"
		);
	}
	QAndroidJniObject MicrophoneInfo::ORIENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MicrophoneInfo",
			"ORIENTATION_UNKNOWN",
			"Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	QAndroidJniObject MicrophoneInfo::POSITION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MicrophoneInfo",
			"POSITION_UNKNOWN",
			"Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	jfloat MicrophoneInfo::SENSITIVITY_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.media.MicrophoneInfo",
			"SENSITIVITY_UNKNOWN"
		);
	}
	jfloat MicrophoneInfo::SPL_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.media.MicrophoneInfo",
			"SPL_UNKNOWN"
		);
	}
	
	MicrophoneInfo::MicrophoneInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MicrophoneInfo::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MicrophoneInfo::getChannelMapping()
	{
		return __thiz.callObjectMethod(
			"getChannelMapping",
			"()Ljava/util/List;"
		);
	}
	jstring MicrophoneInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MicrophoneInfo::getDirectionality()
	{
		return __thiz.callMethod<jint>(
			"getDirectionality",
			"()I"
		);
	}
	QAndroidJniObject MicrophoneInfo::getFrequencyResponse()
	{
		return __thiz.callObjectMethod(
			"getFrequencyResponse",
			"()Ljava/util/List;"
		);
	}
	jint MicrophoneInfo::getGroup()
	{
		return __thiz.callMethod<jint>(
			"getGroup",
			"()I"
		);
	}
	jint MicrophoneInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint MicrophoneInfo::getIndexInTheGroup()
	{
		return __thiz.callMethod<jint>(
			"getIndexInTheGroup",
			"()I"
		);
	}
	jint MicrophoneInfo::getLocation()
	{
		return __thiz.callMethod<jint>(
			"getLocation",
			"()I"
		);
	}
	jfloat MicrophoneInfo::getMaxSpl()
	{
		return __thiz.callMethod<jfloat>(
			"getMaxSpl",
			"()F"
		);
	}
	jfloat MicrophoneInfo::getMinSpl()
	{
		return __thiz.callMethod<jfloat>(
			"getMinSpl",
			"()F"
		);
	}
	QAndroidJniObject MicrophoneInfo::getOrientation()
	{
		return __thiz.callObjectMethod(
			"getOrientation",
			"()Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	QAndroidJniObject MicrophoneInfo::getPosition()
	{
		return __thiz.callObjectMethod(
			"getPosition",
			"()Landroid/media/MicrophoneInfo$Coordinate3F;"
		);
	}
	jfloat MicrophoneInfo::getSensitivity()
	{
		return __thiz.callMethod<jfloat>(
			"getSensitivity",
			"()F"
		);
	}
	jint MicrophoneInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::media

