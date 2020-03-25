#pragma once

#ifndef ANDROID_OS_STRICTMODE_WEBVIEWMETHODCALLEDONWRONGTHREADVIOLATION
#define ANDROID_OS_STRICTMODE_WEBVIEWMETHODCALLEDONWRONGTHREADVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class WebViewMethodCalledOnWrongThreadViolation : public __jni_impl::android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::strictmode


namespace __jni_impl::android::os::strictmode
{
	// Fields
	
	// Constructors
	void WebViewMethodCalledOnWrongThreadViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.WebViewMethodCalledOnWrongThreadViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class WebViewMethodCalledOnWrongThreadViolation : public __jni_impl::android::os::strictmode::WebViewMethodCalledOnWrongThreadViolation
	{
	public:
		WebViewMethodCalledOnWrongThreadViolation(QAndroidJniObject obj) { __thiz = obj; }
		WebViewMethodCalledOnWrongThreadViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_WEBVIEWMETHODCALLEDONWRONGTHREADVIOLATION

