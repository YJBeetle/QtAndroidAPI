#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MutableShort : public __JniBaseClass
	{
	public:
		// Fields
		jshort value();
		
		// Constructors
		void __constructor(jshort arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jshort MutableShort::value()
	{
		return __thiz.getField<jshort>(
			"value"
		);
	}
	
	// Constructors
	void MutableShort::__constructor(jshort arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableShort",
			"(S)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MutableShort : public __jni_impl::android::util::MutableShort
	{
	public:
		MutableShort(QAndroidJniObject obj) { __thiz = obj; }
		MutableShort(jshort arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

