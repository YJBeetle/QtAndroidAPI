#pragma once

#ifndef ANDROID_UTIL_MUTABLECHAR
#define ANDROID_UTIL_MUTABLECHAR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableChar : public __JniBaseClass
	{
	public:
		// Fields
		jchar value();
		
		// Constructors
		void __constructor(jchar arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jchar MutableChar::value()
	{
		return __thiz.getField<jchar>(
			"value"
		);
	}
	
	// Constructors
	void MutableChar::__constructor(jchar arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableChar",
			"(C)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableChar : public __jni_impl::android::util::MutableChar
	{
	public:
		MutableChar(QAndroidJniObject obj) { __thiz = obj; }
		MutableChar(jchar arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_MUTABLECHAR

