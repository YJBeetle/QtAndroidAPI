#pragma once

#ifndef ANDROID_UTIL_MUTABLEDOUBLE
#define ANDROID_UTIL_MUTABLEDOUBLE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableDouble : public __JniBaseClass
	{
	public:
		// Fields
		jdouble value();
		
		// Constructors
		void __constructor(jdouble arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jdouble MutableDouble::value()
	{
		return __thiz.getField<jdouble>(
			"value"
		);
	}
	
	// Constructors
	void MutableDouble::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableDouble",
			"(D)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableDouble : public __jni_impl::android::util::MutableDouble
	{
	public:
		MutableDouble(QAndroidJniObject obj) { __thiz = obj; }
		MutableDouble(jdouble arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_MUTABLEDOUBLE

