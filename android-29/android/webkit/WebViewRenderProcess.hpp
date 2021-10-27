#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebViewRenderProcess : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean terminate();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebViewRenderProcess::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewRenderProcess",
			"()V"
		);
	}
	
	// Methods
	jboolean WebViewRenderProcess::terminate()
	{
		return __thiz.callMethod<jboolean>(
			"terminate",
			"()Z"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebViewRenderProcess : public __jni_impl::android::webkit::WebViewRenderProcess
	{
	public:
		WebViewRenderProcess(QAndroidJniObject obj) { __thiz = obj; }
		WebViewRenderProcess()
		{
			__constructor();
		}
	};
} // namespace android::webkit

