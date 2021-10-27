#include "./CameraProfile.hpp"

namespace android::media
{
	// Fields
	jint CameraProfile::QUALITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_HIGH"
		);
	}
	jint CameraProfile::QUALITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_LOW"
		);
	}
	jint CameraProfile::QUALITY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_MEDIUM"
		);
	}
	
	CameraProfile::CameraProfile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraProfile::CameraProfile()
	{
		__thiz = QAndroidJniObject(
			"android.media.CameraProfile",
			"()V"
		);
	}
	
	// Methods
	jint CameraProfile::getJpegEncodingQualityParameter(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.CameraProfile",
			"getJpegEncodingQualityParameter",
			"(I)I",
			arg0
		);
	}
	jint CameraProfile::getJpegEncodingQualityParameter(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.CameraProfile",
			"getJpegEncodingQualityParameter",
			"(II)I",
			arg0,
			arg1
		);
	}
} // namespace android::media

