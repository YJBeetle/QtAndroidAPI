#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_BLACKLEVELPATTERN
#define ANDROID_HARDWARE_CAMERA2_PARAMS_BLACKLEVELPATTERN

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2::params
{
	class BlackLevelPattern : public __JniBaseClass
	{
	public:
		// Fields
		static jint COUNT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void copyTo(jintArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jint getOffsetForIndex(jint arg0, jint arg1);
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::hardware::camera2::params


namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jint BlackLevelPattern::COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.BlackLevelPattern",
			"COUNT"
		);
	}
	
	// Constructors
	void BlackLevelPattern::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.BlackLevelPattern",
			"(V)V");
	}
	
	// Methods
	void BlackLevelPattern::copyTo(jintArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([II)V",
			arg0,
			arg1
		);
	}
	jboolean BlackLevelPattern::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BlackLevelPattern::getOffsetForIndex(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getOffsetForIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint BlackLevelPattern::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BlackLevelPattern::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class BlackLevelPattern : public __jni_impl::android::hardware::camera2::params::BlackLevelPattern
	{
	public:
		BlackLevelPattern(QAndroidJniObject obj) { __thiz = obj; }
		BlackLevelPattern()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_BLACKLEVELPATTERN

