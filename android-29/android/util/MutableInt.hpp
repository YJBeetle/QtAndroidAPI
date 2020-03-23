#pragma once

#ifndef ANDROID_UTIL_MUTABLEINT
#define ANDROID_UTIL_MUTABLEINT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableInt : public __JniBaseClass
	{
	public:
		// Fields
		jint value();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jint MutableInt::value()
	{
		return __thiz.getField<jint>(
			"value");
	}
	
	// Constructors
	void MutableInt::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableInt",
			"(I)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableInt : public __jni_impl::android::util::MutableInt
	{
	public:
		MutableInt(QAndroidJniObject obj) { __thiz = obj; }
		MutableInt(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_MUTABLEINT

