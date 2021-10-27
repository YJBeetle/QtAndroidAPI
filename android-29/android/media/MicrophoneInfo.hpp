#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MicrophoneInfo_Coordinate3F;
}

namespace android::media
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
		
		MicrophoneInfo(QAndroidJniObject obj);
		// Constructors
		MicrophoneInfo() = default;
		
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
} // namespace android::media

