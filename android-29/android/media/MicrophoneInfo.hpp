#pragma once

#ifndef ANDROID_MEDIA_MICROPHONEINFO
#define ANDROID_MEDIA_MICROPHONEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MicrophoneInfo_Coordinate3F;
}

namespace __jni_impl::android::media
{
	class MicrophoneInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CHANNEL_MAPPING_DIRECT();
		static jint CHANNEL_MAPPING_PROCESSED();
		static jint DIRECTIONALITY_BI_DIRECTIONAL();
		static jint DIRECTIONALITY_CARDIOID();
		static jint DIRECTIONALITY_HYPER_CARDIOID();
		static jint DIRECTIONALITY_OMNI();
		static jint DIRECTIONALITY_SUPER_CARDIOID();
		static jint DIRECTIONALITY_UNKNOWN();
		static jint GROUP_UNKNOWN();
		static jint INDEX_IN_THE_GROUP_UNKNOWN();
		static jint LOCATION_MAINBODY();
		static jint LOCATION_MAINBODY_MOVABLE();
		static jint LOCATION_PERIPHERAL();
		static jint LOCATION_UNKNOWN();
		static QAndroidJniObject ORIENTATION_UNKNOWN();
		static QAndroidJniObject POSITION_UNKNOWN();
		static jfloat SENSITIVITY_UNKNOWN();
		static jfloat SPL_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getAddress();
		QAndroidJniObject getChannelMapping();
		jstring getDescription();
		jint getDirectionality();
		QAndroidJniObject getFrequencyResponse();
		jint getGroup();
		jint getId();
		jint getIndexInTheGroup();
		jint getLocation();
		jfloat getMaxSpl();
		jfloat getMinSpl();
		QAndroidJniObject getOrientation();
		QAndroidJniObject getPosition();
		jfloat getSensitivity();
		jint getType();
	};
} // namespace __jni_impl::android::media

#include "MicrophoneInfo_Coordinate3F.hpp"

namespace __jni_impl::android::media
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
	
	// Constructors
	void MicrophoneInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MicrophoneInfo",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class MicrophoneInfo : public __jni_impl::android::media::MicrophoneInfo
	{
	public:
		MicrophoneInfo(QAndroidJniObject obj) { __thiz = obj; }
		MicrophoneInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MICROPHONEINFO

