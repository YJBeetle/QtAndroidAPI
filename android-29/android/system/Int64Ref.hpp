#pragma once

#ifndef ANDROID_SYSTEM_INT64REF
#define ANDROID_SYSTEM_INT64REF

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
{
	class Int64Ref : public __JniBaseClass
	{
	public:
		// Fields
		jlong value();
		
		// Constructors
		void __constructor(jlong arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	jlong Int64Ref::value()
	{
		return __thiz.getField<jlong>(
			"value"
		);
	}
	
	// Constructors
	void Int64Ref::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.system.Int64Ref",
			"(J)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::system

namespace android::system
{
	class Int64Ref : public __jni_impl::android::system::Int64Ref
	{
	public:
		Int64Ref(QAndroidJniObject obj) { __thiz = obj; }
		Int64Ref(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_INT64REF

