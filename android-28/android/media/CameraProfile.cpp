#include "./CameraProfile.hpp"

namespace android::media
{
	// Fields
	jint CameraProfile::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_HIGH"
		);
	}
	jint CameraProfile::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_LOW"
		);
	}
	jint CameraProfile::QUALITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_MEDIUM"
		);
	}
	
	// QAndroidJniObject forward
	CameraProfile::CameraProfile(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CameraProfile::CameraProfile()
		: __JniBaseClass(
			"android.media.CameraProfile",
			"()V"
		) {}
	
	// Methods
	jint CameraProfile::getJpegEncodingQualityParameter(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.media.CameraProfile",
			"getJpegEncodingQualityParameter",
			"(I)I",
			arg0
		);
	}
	jint CameraProfile::getJpegEncodingQualityParameter(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.media.CameraProfile",
			"getJpegEncodingQualityParameter",
			"(II)I",
			arg0,
			arg1
		);
	}
} // namespace android::media

