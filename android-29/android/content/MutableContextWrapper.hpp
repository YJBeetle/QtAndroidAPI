#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Context.hpp"
#include "./ContextWrapper.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::content
{
	class MutableContextWrapper : public __jni_impl::android::content::ContextWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setBaseContext(__jni_impl::android::content::Context arg0);
	};
} // namespace __jni_impl::android::content

#include "./Context.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void MutableContextWrapper::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.MutableContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void MutableContextWrapper::setBaseContext(__jni_impl::android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"setBaseContext",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class MutableContextWrapper : public __jni_impl::android::content::MutableContextWrapper
	{
	public:
		MutableContextWrapper(QAndroidJniObject obj) { __thiz = obj; }
		MutableContextWrapper(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

