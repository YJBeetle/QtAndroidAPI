#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CameraMetadata.hpp"
#include "./CaptureResult.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class TotalCaptureResult : public __jni_impl::android::hardware::camera2::CaptureResult
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getPartialResults();
		QAndroidJniObject getPhysicalCameraResults();
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void TotalCaptureResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.TotalCaptureResult",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TotalCaptureResult::getPartialResults()
	{
		return __thiz.callObjectMethod(
			"getPartialResults",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject TotalCaptureResult::getPhysicalCameraResults()
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraResults",
			"()Ljava/util/Map;"
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class TotalCaptureResult : public __jni_impl::android::hardware::camera2::TotalCaptureResult
	{
	public:
		TotalCaptureResult(QAndroidJniObject obj) { __thiz = obj; }
		TotalCaptureResult()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

