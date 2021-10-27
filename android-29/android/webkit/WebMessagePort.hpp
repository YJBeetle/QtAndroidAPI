#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::webkit
{
	class WebMessage;
}
namespace __jni_impl::android::webkit
{
	class WebMessagePort_WebMessageCallback;
}

namespace __jni_impl::android::webkit
{
	class WebMessagePort : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void postMessage(__jni_impl::android::webkit::WebMessage arg0);
		void setWebMessageCallback(__jni_impl::android::webkit::WebMessagePort_WebMessageCallback arg0);
		void setWebMessageCallback(__jni_impl::android::webkit::WebMessagePort_WebMessageCallback arg0, __jni_impl::android::os::Handler arg1);
	};
} // namespace __jni_impl::android::webkit

#include "../os/Handler.hpp"
#include "WebMessage.hpp"
#include "WebMessagePort_WebMessageCallback.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebMessagePort::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessagePort",
			"(V)V");
	}
	
	// Methods
	void WebMessagePort::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebMessagePort::postMessage(__jni_impl::android::webkit::WebMessage arg0)
	{
		__thiz.callMethod<void>(
			"postMessage",
			"(Landroid/webkit/WebMessage;)V",
			arg0.__jniObject().object()
		);
	}
	void WebMessagePort::setWebMessageCallback(__jni_impl::android::webkit::WebMessagePort_WebMessageCallback arg0)
	{
		__thiz.callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void WebMessagePort::setWebMessageCallback(__jni_impl::android::webkit::WebMessagePort_WebMessageCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebMessagePort : public __jni_impl::android::webkit::WebMessagePort
	{
	public:
		WebMessagePort(QAndroidJniObject obj) { __thiz = obj; }
		WebMessagePort()
		{
			__constructor();
		}
	};
} // namespace android::webkit

