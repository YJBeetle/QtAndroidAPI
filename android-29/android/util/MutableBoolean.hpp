#pragma once

#ifndef ANDROID_UTIL_MUTABLEBOOLEAN
#define ANDROID_UTIL_MUTABLEBOOLEAN

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableBoolean : public __JniBaseClass
	{
	public:
		// Fields
		jboolean value();
		
		// Constructors
		void __constructor(jboolean arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jboolean MutableBoolean::value()
	{
		return __thiz.getField<jboolean>(
			"value"
		);
	}
	
	// Constructors
	void MutableBoolean::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableBoolean",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableBoolean : public __jni_impl::android::util::MutableBoolean
	{
	public:
		MutableBoolean(QAndroidJniObject obj) { __thiz = obj; }
		MutableBoolean(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_MUTABLEBOOLEAN

