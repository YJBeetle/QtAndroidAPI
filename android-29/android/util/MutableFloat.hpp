#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableFloat : public __JniBaseClass
	{
	public:
		// Fields
		jfloat value();
		
		// Constructors
		void __constructor(jfloat arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jfloat MutableFloat::value()
	{
		return __thiz.getField<jfloat>(
			"value"
		);
	}
	
	// Constructors
	void MutableFloat::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableFloat",
			"(F)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableFloat : public __jni_impl::android::util::MutableFloat
	{
	public:
		MutableFloat(QAndroidJniObject obj) { __thiz = obj; }
		MutableFloat(jfloat arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

