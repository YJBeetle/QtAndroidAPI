#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION_MANDATORYSTREAMINFORMATION
#define ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION_MANDATORYSTREAMINFORMATION

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2::params
{
	class MandatoryStreamCombination_MandatoryStreamInformation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAvailableSizes();
		jint getFormat();
		jint hashCode();
		jboolean isInput();
	};
} // namespace __jni_impl::android::hardware::camera2::params


namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	void MandatoryStreamCombination_MandatoryStreamInformation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MandatoryStreamCombination$MandatoryStreamInformation",
			"(V)V");
	}
	
	// Methods
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MandatoryStreamCombination_MandatoryStreamInformation::getAvailableSizes()
	{
		return __thiz.callObjectMethod(
			"getAvailableSizes",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination_MandatoryStreamInformation::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint MandatoryStreamCombination_MandatoryStreamInformation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::isInput()
	{
		return __thiz.callMethod<jboolean>(
			"isInput",
			"()Z"
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination_MandatoryStreamInformation : public __jni_impl::android::hardware::camera2::params::MandatoryStreamCombination_MandatoryStreamInformation
	{
	public:
		MandatoryStreamCombination_MandatoryStreamInformation(QAndroidJniObject obj) { __thiz = obj; }
		MandatoryStreamCombination_MandatoryStreamInformation()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION_MANDATORYSTREAMINFORMATION

