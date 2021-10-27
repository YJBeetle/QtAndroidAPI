#pragma once

#include "../../__JniBaseClass.hpp"
#include "LoginFilter.hpp"


namespace __jni_impl::android::text
{
	class LoginFilter_UsernameFilterGeneric : public __jni_impl::android::text::LoginFilter
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
	void LoginFilter_UsernameFilterGeneric::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"()V"
		);
	}
	void LoginFilter_UsernameFilterGeneric::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jboolean LoginFilter_UsernameFilterGeneric::isAllowed(jchar arg0)
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
	class LoginFilter_UsernameFilterGeneric : public __jni_impl::android::text::LoginFilter_UsernameFilterGeneric
	{
	public:
		LoginFilter_UsernameFilterGeneric(QAndroidJniObject obj) { __thiz = obj; }
		LoginFilter_UsernameFilterGeneric()
		{
			__constructor();
		}
		LoginFilter_UsernameFilterGeneric(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

