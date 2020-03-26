#pragma once

#ifndef ANDROID_ICU_UTIL_MEASURE
#define ANDROID_ICU_UTIL_MEASURE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::android::icu::util
{
	class MeasureUnit;
}

namespace __jni_impl::android::icu::util
{
	class Measure : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Number arg0, __jni_impl::android::icu::util::MeasureUnit arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getNumber();
		QAndroidJniObject getUnit();
	};
} // namespace __jni_impl::android::icu::util

#include "../../../java/lang/Number.hpp"
#include "MeasureUnit.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void Measure::__constructor(__jni_impl::java::lang::Number arg0, __jni_impl::android::icu::util::MeasureUnit arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Measure",
			"(Ljava/lang/Number;Landroid/icu/util/MeasureUnit;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jboolean Measure::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Measure::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Measure::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Measure::getNumber()
	{
		return __thiz.callObjectMethod(
			"getNumber",
			"()Ljava/lang/Number;"
		);
	}
	QAndroidJniObject Measure::getUnit()
	{
		return __thiz.callObjectMethod(
			"getUnit",
			"()Landroid/icu/util/MeasureUnit;"
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class Measure : public __jni_impl::android::icu::util::Measure
	{
	public:
		Measure(QAndroidJniObject obj) { __thiz = obj; }
		Measure(__jni_impl::java::lang::Number arg0, __jni_impl::android::icu::util::MeasureUnit arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_MEASURE

