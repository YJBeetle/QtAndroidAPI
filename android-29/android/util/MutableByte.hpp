#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableByte : public __JniBaseClass
	{
	public:
		// Fields
		jbyte value();
		
		// Constructors
		void __constructor(jbyte arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jbyte MutableByte::value()
	{
		return __thiz.getField<jbyte>(
			"value"
		);
	}
	
	// Constructors
	void MutableByte::__constructor(jbyte arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableByte",
			"(B)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableByte : public __jni_impl::android::util::MutableByte
	{
	public:
		MutableByte(QAndroidJniObject obj) { __thiz = obj; }
		MutableByte(jbyte arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

