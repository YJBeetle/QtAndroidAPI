#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class MeasureUnit;
}
namespace __jni_impl::java::lang
{
	class Number;
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
		QAndroidJniObject getNumber();
		QAndroidJniObject getUnit();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::icu::util

#include "MeasureUnit.hpp"
#include "../../../java/lang/Number.hpp"

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
			arg1.__jniObject().object()
		);
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
	jint Measure::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Measure::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

