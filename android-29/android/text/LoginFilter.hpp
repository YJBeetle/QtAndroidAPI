#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class LoginFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
		jstring filter(const QString &arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
		jboolean isAllowed(jchar arg0);
		void onInvalidCharacter(jchar arg0);
		void onStart();
		void onStop();
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void LoginFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter",
			"(V)V");
	}
	
	// Methods
	jstring LoginFilter::filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jstring LoginFilter::filter(const QString &arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jboolean LoginFilter::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
	void LoginFilter::onInvalidCharacter(jchar arg0)
	{
		__thiz.callMethod<void>(
			"onInvalidCharacter",
			"(C)V",
			arg0
		);
	}
	void LoginFilter::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void LoginFilter::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class LoginFilter : public __jni_impl::android::text::LoginFilter
	{
	public:
		LoginFilter(QAndroidJniObject obj) { __thiz = obj; }
		LoginFilter()
		{
			__constructor();
		}
	};
} // namespace android::text

