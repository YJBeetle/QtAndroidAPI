#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class TracingConfig;
}

namespace __jni_impl::android::webkit
{
	class TracingConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject addCategories(jintArray arg0);
		QAndroidJniObject addCategories(jarray arg0);
		QAndroidJniObject addCategories(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject build();
		QAndroidJniObject setTracingMode(jint arg0);
	};
} // namespace __jni_impl::android::webkit

#include "./TracingConfig.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void TracingConfig_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.TracingConfig$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TracingConfig_Builder::addCategories(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"addCategories",
			"([I)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject TracingConfig_Builder::addCategories(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"addCategories",
			"([Ljava/lang/String;)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject TracingConfig_Builder::addCategories(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addCategories",
			"(Ljava/util/Collection;)Landroid/webkit/TracingConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TracingConfig_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/webkit/TracingConfig;"
		);
	}
	QAndroidJniObject TracingConfig_Builder::setTracingMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTracingMode",
			"(I)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class TracingConfig_Builder : public __jni_impl::android::webkit::TracingConfig_Builder
	{
	public:
		TracingConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TracingConfig_Builder()
		{
			__constructor();
		}
	};
} // namespace android::webkit

