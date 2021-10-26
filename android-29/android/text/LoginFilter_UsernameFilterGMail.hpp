#pragma once

#ifndef ANDROID_TEXT_LOGINFILTER_USERNAMEFILTERGMAIL
#define ANDROID_TEXT_LOGINFILTER_USERNAMEFILTERGMAIL

#include "../../__JniBaseClass.hpp"
#include "LoginFilter.hpp"


namespace __jni_impl::android::text
{
	class LoginFilter_UsernameFilterGMail : public __jni_impl::android::text::LoginFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void LoginFilter_UsernameFilterGMail::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGMail",
			"()V"
		);
	}
	void LoginFilter_UsernameFilterGMail::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGMail",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jboolean LoginFilter_UsernameFilterGMail::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class LoginFilter_UsernameFilterGMail : public __jni_impl::android::text::LoginFilter_UsernameFilterGMail
	{
	public:
		LoginFilter_UsernameFilterGMail(QAndroidJniObject obj) { __thiz = obj; }
		LoginFilter_UsernameFilterGMail()
		{
			__constructor();
		}
		LoginFilter_UsernameFilterGMail(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_LOGINFILTER_USERNAMEFILTERGMAIL

