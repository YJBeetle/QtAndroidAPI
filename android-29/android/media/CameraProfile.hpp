#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class CameraProfile : public __JniBaseClass
	{
	public:
		// Fields
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_MEDIUM();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getJpegEncodingQualityParameter(jint arg0);
		static jint getJpegEncodingQualityParameter(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
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
	
	// Constructors
	void CameraProfile::__constructor()
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class CameraProfile : public __jni_impl::android::media::CameraProfile
	{
	public:
		CameraProfile(QAndroidJniObject obj) { __thiz = obj; }
		CameraProfile()
		{
			__constructor();
		}
	};
} // namespace android::media

