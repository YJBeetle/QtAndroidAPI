#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebMessage;
}
namespace __jni_impl::android::webkit
{
	class WebMessagePort;
}

namespace __jni_impl::android::webkit
{
	class WebMessagePort_WebMessageCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onMessage(__jni_impl::android::webkit::WebMessagePort arg0, __jni_impl::android::webkit::WebMessage arg1);
	};
} // namespace __jni_impl::android::webkit

#include "./WebMessage.hpp"
#include "./WebMessagePort.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebMessagePort_WebMessageCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessagePort$WebMessageCallback",
			"()V"
		);
	}
	
	// Methods
	void WebMessagePort_WebMessageCallback::onMessage(__jni_impl::android::webkit::WebMessagePort arg0, __jni_impl::android::webkit::WebMessage arg1)
	{
		__thiz.callMethod<void>(
			"onMessage",
			"(Landroid/webkit/WebMessagePort;Landroid/webkit/WebMessage;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebMessagePort_WebMessageCallback : public __jni_impl::android::webkit::WebMessagePort_WebMessageCallback
	{
	public:
		WebMessagePort_WebMessageCallback(QAndroidJniObject obj) { __thiz = obj; }
		WebMessagePort_WebMessageCallback()
		{
			__constructor();
		}
	};
} // namespace android::webkit

