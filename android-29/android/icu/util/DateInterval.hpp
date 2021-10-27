#pragma once

#ifndef ANDROID_ICU_UTIL_DATEINTERVAL
#define ANDROID_ICU_UTIL_DATEINTERVAL

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class DateInterval : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getFromDate();
		jlong getToDate();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void DateInterval::__constructor(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.DateInterval",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean DateInterval::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong DateInterval::getFromDate()
	{
		return __thiz.callMethod<jlong>(
			"getFromDate",
			"()J"
		);
	}
	jlong DateInterval::getToDate()
	{
		return __thiz.callMethod<jlong>(
			"getToDate",
			"()J"
		);
	}
	jint DateInterval::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DateInterval::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class DateInterval : public __jni_impl::android::icu::util::DateInterval
	{
	public:
		DateInterval(QAndroidJniObject obj) { __thiz = obj; }
		DateInterval(jlong arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_DATEINTERVAL

