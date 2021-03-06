#pragma once

#ifndef JAVA_SECURITY_PROVIDER_SERVICE
#define JAVA_SECURITY_PROVIDER_SERVICE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::lang::ref
{
	class Reference;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}

namespace __jni_impl::java::security
{
	class Provider_Service : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::Provider arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5);
		
		// Methods
		jstring toString();
		jobject newInstance(jobject arg0);
		jstring getType();
		jstring getClassName();
		QAndroidJniObject getProvider();
		jstring getAttribute(jstring arg0);
		jboolean supportsParameter(jobject arg0);
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "../lang/ref/Reference.hpp"
#include "../lang/Boolean.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Provider_Service::__constructor(__jni_impl::java::security::Provider arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz = QAndroidJniObject(
			"java.security.Provider$Service",
			"(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	
	// Methods
	jstring Provider_Service::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Provider_Service::newInstance(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"newInstance",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Provider_Service::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Provider_Service::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Provider_Service::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring Provider_Service::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Provider_Service::supportsParameter(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsParameter",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Provider_Service::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Provider_Service : public __jni_impl::java::security::Provider_Service
	{
	public:
		Provider_Service(QAndroidJniObject obj) { __thiz = obj; }
		Provider_Service(__jni_impl::java::security::Provider arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PROVIDER_SERVICE

