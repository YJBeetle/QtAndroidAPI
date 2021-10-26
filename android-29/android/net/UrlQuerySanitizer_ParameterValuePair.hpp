#pragma once

#ifndef ANDROID_NET_URLQUERYSANITIZER_PARAMETERVALUEPAIR
#define ANDROID_NET_URLQUERYSANITIZER_PARAMETERVALUEPAIR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class UrlQuerySanitizer;
}

namespace __jni_impl::android::net
{
	class UrlQuerySanitizer_ParameterValuePair : public __JniBaseClass
	{
	public:
		// Fields
		jstring mParameter();
		jstring mValue();
		
		// Constructors
		void __constructor(__jni_impl::android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2);
		void __constructor(__jni_impl::android::net::UrlQuerySanitizer arg0, const QString &arg1, const QString &arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::net

#include "UrlQuerySanitizer.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jstring UrlQuerySanitizer_ParameterValuePair::mParameter()
	{
		return __thiz.getObjectField(
			"mParameter",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UrlQuerySanitizer_ParameterValuePair::mValue()
	{
		return __thiz.getObjectField(
			"mValue",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void UrlQuerySanitizer_ParameterValuePair::__constructor(__jni_impl::android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer$ParameterValuePair",
			"(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void UrlQuerySanitizer_ParameterValuePair::__constructor(__jni_impl::android::net::UrlQuerySanitizer arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer$ParameterValuePair",
			"(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::net

namespace android::net
{
	class UrlQuerySanitizer_ParameterValuePair : public __jni_impl::android::net::UrlQuerySanitizer_ParameterValuePair
	{
	public:
		UrlQuerySanitizer_ParameterValuePair(QAndroidJniObject obj) { __thiz = obj; }
		UrlQuerySanitizer_ParameterValuePair(__jni_impl::android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_URLQUERYSANITIZER_PARAMETERVALUEPAIR

