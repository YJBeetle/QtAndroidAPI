#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2::params
{
	class RggbChannelVector : public __JniBaseClass
	{
	public:
		// Fields
		static jint BLUE();
		static jint COUNT();
		static jint GREEN_EVEN();
		static jint GREEN_ODD();
		static jint RED();
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		void copyTo(jfloatArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jfloat getBlue();
		jfloat getComponent(jint arg0);
		jfloat getGreenEven();
		jfloat getGreenOdd();
		jfloat getRed();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::hardware::camera2::params


namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jint RggbChannelVector::BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"BLUE"
		);
	}
	jint RggbChannelVector::COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"COUNT"
		);
	}
	jint RggbChannelVector::GREEN_EVEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"GREEN_EVEN"
		);
	}
	jint RggbChannelVector::GREEN_ODD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"GREEN_ODD"
		);
	}
	jint RggbChannelVector::RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"RED"
		);
	}
	
	// Constructors
	void RggbChannelVector::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.RggbChannelVector",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void RggbChannelVector::copyTo(jfloatArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([FI)V",
			arg0,
			arg1
		);
	}
	jboolean RggbChannelVector::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat RggbChannelVector::getBlue()
	{
		return __thiz.callMethod<jfloat>(
			"getBlue",
			"()F"
		);
	}
	jfloat RggbChannelVector::getComponent(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getComponent",
			"(I)F",
			arg0
		);
	}
	jfloat RggbChannelVector::getGreenEven()
	{
		return __thiz.callMethod<jfloat>(
			"getGreenEven",
			"()F"
		);
	}
	jfloat RggbChannelVector::getGreenOdd()
	{
		return __thiz.callMethod<jfloat>(
			"getGreenOdd",
			"()F"
		);
	}
	jfloat RggbChannelVector::getRed()
	{
		return __thiz.callMethod<jfloat>(
			"getRed",
			"()F"
		);
	}
	jint RggbChannelVector::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring RggbChannelVector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class RggbChannelVector : public __jni_impl::android::hardware::camera2::params::RggbChannelVector
	{
	public:
		RggbChannelVector(QAndroidJniObject obj) { __thiz = obj; }
		RggbChannelVector(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::hardware::camera2::params

