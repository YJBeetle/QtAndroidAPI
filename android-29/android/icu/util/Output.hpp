#pragma once

#ifndef ANDROID_ICU_UTIL_OUTPUT
#define ANDROID_ICU_UTIL_OUTPUT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class Output : public __JniBaseClass
	{
	public:
		// Fields
		jobject value();
		
		// Constructors
		void __constructor();
		void __constructor(jobject arg0);
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	jobject Output::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void Output::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Output",
			"()V"
		);
	}
	void Output::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Output",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jstring Output::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class Output : public __jni_impl::android::icu::util::Output
	{
	public:
		Output(QAndroidJniObject obj) { __thiz = obj; }
		Output()
		{
			__constructor();
		}
		Output(jobject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_OUTPUT

