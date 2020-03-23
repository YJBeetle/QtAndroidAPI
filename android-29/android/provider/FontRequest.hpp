#pragma once

#ifndef ANDROID_PROVIDER_FONTREQUEST
#define ANDROID_PROVIDER_FONTREQUEST

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class FontRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getCertificates();
		QAndroidJniObject getQuery();
		QAndroidJniObject getProviderAuthority();
		QAndroidJniObject getProviderPackage();
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void FontRequest::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void FontRequest::__constructor(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject FontRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FontRequest::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;");
	}
	QAndroidJniObject FontRequest::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FontRequest::getProviderAuthority()
	{
		return __thiz.callObjectMethod(
			"getProviderAuthority",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FontRequest::getProviderPackage()
	{
		return __thiz.callObjectMethod(
			"getProviderPackage",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class FontRequest : public __jni_impl::android::provider::FontRequest
	{
	public:
		FontRequest(QAndroidJniObject obj) { __thiz = obj; }
		FontRequest(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		FontRequest(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_FONTREQUEST

