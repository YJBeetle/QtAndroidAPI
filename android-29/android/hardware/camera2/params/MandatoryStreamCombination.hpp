#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION
#define ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2::params
{
	class MandatoryStreamCombination : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getDescription();
		QAndroidJniObject getStreamsInformation();
		jint hashCode();
		jboolean isReprocessable();
	};
} // namespace __jni_impl::android::hardware::camera2::params


namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	void MandatoryStreamCombination::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MandatoryStreamCombination",
			"(V)V");
	}
	
	// Methods
	jboolean MandatoryStreamCombination::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MandatoryStreamCombination::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject MandatoryStreamCombination::getStreamsInformation()
	{
		return __thiz.callObjectMethod(
			"getStreamsInformation",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination::isReprocessable()
	{
		return __thiz.callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination : public __jni_impl::android::hardware::camera2::params::MandatoryStreamCombination
	{
	public:
		MandatoryStreamCombination(QAndroidJniObject obj) { __thiz = obj; }
		MandatoryStreamCombination()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION

