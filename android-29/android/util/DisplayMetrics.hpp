#pragma once

#ifndef ANDROID_UTIL_DISPLAYMETRICS
#define ANDROID_UTIL_DISPLAYMETRICS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class DisplayMetrics : public __JniBaseClass
	{
	public:
		// Fields
		static jint DENSITY_140();
		static jint DENSITY_180();
		static jint DENSITY_200();
		static jint DENSITY_220();
		static jint DENSITY_260();
		static jint DENSITY_280();
		static jint DENSITY_300();
		static jint DENSITY_340();
		static jint DENSITY_360();
		static jint DENSITY_400();
		static jint DENSITY_420();
		static jint DENSITY_440();
		static jint DENSITY_450();
		static jint DENSITY_560();
		static jint DENSITY_600();
		static jint DENSITY_DEFAULT();
		static jint DENSITY_DEVICE_STABLE();
		static jint DENSITY_HIGH();
		static jint DENSITY_LOW();
		static jint DENSITY_MEDIUM();
		static jint DENSITY_TV();
		static jint DENSITY_XHIGH();
		static jint DENSITY_XXHIGH();
		static jint DENSITY_XXXHIGH();
		jfloat density();
		jint densityDpi();
		jint heightPixels();
		jfloat scaledDensity();
		jint widthPixels();
		jfloat xdpi();
		jfloat ydpi();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(__jni_impl::android::util::DisplayMetrics arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		void setTo(__jni_impl::android::util::DisplayMetrics arg0);
		void setToDefaults();
		jstring toString();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jint DisplayMetrics::DENSITY_140()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_140"
		);
	}
	jint DisplayMetrics::DENSITY_180()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_180"
		);
	}
	jint DisplayMetrics::DENSITY_200()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_200"
		);
	}
	jint DisplayMetrics::DENSITY_220()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_220"
		);
	}
	jint DisplayMetrics::DENSITY_260()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_260"
		);
	}
	jint DisplayMetrics::DENSITY_280()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_280"
		);
	}
	jint DisplayMetrics::DENSITY_300()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_300"
		);
	}
	jint DisplayMetrics::DENSITY_340()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_340"
		);
	}
	jint DisplayMetrics::DENSITY_360()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_360"
		);
	}
	jint DisplayMetrics::DENSITY_400()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_400"
		);
	}
	jint DisplayMetrics::DENSITY_420()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_420"
		);
	}
	jint DisplayMetrics::DENSITY_440()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_440"
		);
	}
	jint DisplayMetrics::DENSITY_450()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_450"
		);
	}
	jint DisplayMetrics::DENSITY_560()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_560"
		);
	}
	jint DisplayMetrics::DENSITY_600()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_600"
		);
	}
	jint DisplayMetrics::DENSITY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_DEFAULT"
		);
	}
	jint DisplayMetrics::DENSITY_DEVICE_STABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_DEVICE_STABLE"
		);
	}
	jint DisplayMetrics::DENSITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_HIGH"
		);
	}
	jint DisplayMetrics::DENSITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_LOW"
		);
	}
	jint DisplayMetrics::DENSITY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_MEDIUM"
		);
	}
	jint DisplayMetrics::DENSITY_TV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_TV"
		);
	}
	jint DisplayMetrics::DENSITY_XHIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XHIGH"
		);
	}
	jint DisplayMetrics::DENSITY_XXHIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XXHIGH"
		);
	}
	jint DisplayMetrics::DENSITY_XXXHIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XXXHIGH"
		);
	}
	jfloat DisplayMetrics::density()
	{
		return __thiz.getField<jfloat>(
			"density"
		);
	}
	jint DisplayMetrics::densityDpi()
	{
		return __thiz.getField<jint>(
			"densityDpi"
		);
	}
	jint DisplayMetrics::heightPixels()
	{
		return __thiz.getField<jint>(
			"heightPixels"
		);
	}
	jfloat DisplayMetrics::scaledDensity()
	{
		return __thiz.getField<jfloat>(
			"scaledDensity"
		);
	}
	jint DisplayMetrics::widthPixels()
	{
		return __thiz.getField<jint>(
			"widthPixels"
		);
	}
	jfloat DisplayMetrics::xdpi()
	{
		return __thiz.getField<jfloat>(
			"xdpi"
		);
	}
	jfloat DisplayMetrics::ydpi()
	{
		return __thiz.getField<jfloat>(
			"ydpi"
		);
	}
	
	// Constructors
	void DisplayMetrics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.DisplayMetrics",
			"()V"
		);
	}
	
	// Methods
	jboolean DisplayMetrics::equals(__jni_impl::android::util::DisplayMetrics arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/util/DisplayMetrics;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DisplayMetrics::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DisplayMetrics::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DisplayMetrics::setTo(__jni_impl::android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"setTo",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	void DisplayMetrics::setToDefaults()
	{
		__thiz.callMethod<void>(
			"setToDefaults",
			"()V"
		);
	}
	jstring DisplayMetrics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class DisplayMetrics : public __jni_impl::android::util::DisplayMetrics
	{
	public:
		DisplayMetrics(QAndroidJniObject obj) { __thiz = obj; }
		DisplayMetrics()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_DISPLAYMETRICS

