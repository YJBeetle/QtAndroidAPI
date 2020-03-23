#pragma once

#ifndef ANDROID_UTIL_FLOATMATH
#define ANDROID_UTIL_FLOATMATH

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class FloatMath : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void FloatMath::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.FloatMath",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class FloatMath : public __jni_impl::android::util::FloatMath
	{
	public:
		FloatMath(QAndroidJniObject obj) { __thiz = obj; }
		FloatMath()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_FLOATMATH

