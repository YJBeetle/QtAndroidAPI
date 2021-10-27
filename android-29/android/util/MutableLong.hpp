#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableLong : public __JniBaseClass
	{
	public:
		// Fields
		jlong value();
		
		// Constructors
		void __constructor(jlong arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jlong MutableLong::value()
	{
		return __thiz.getField<jlong>(
			"value"
		);
	}
	
	// Constructors
	void MutableLong::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableLong",
			"(J)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableLong : public __jni_impl::android::util::MutableLong
	{
	public:
		MutableLong(QAndroidJniObject obj) { __thiz = obj; }
		MutableLong(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

