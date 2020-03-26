#pragma once

#ifndef JAVA_SECURITY_PROVIDER
#define JAVA_SECURITY_PROVIDER

#include "../../__JniBaseClass.hpp"
#include "../util/Dictionary.hpp"
#include "../util/Hashtable.hpp"
#include "../util/Properties.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::security
{
	class Provider_Service;
}

namespace __jni_impl::java::security
{
	class Provider : public __jni_impl::java::util::Properties
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jobject remove(jobject arg0);
		jboolean remove(jobject arg0, jobject arg1);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		jstring getProperty(jstring arg0);
		jstring toString();
		QAndroidJniObject values();
		void clear();
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject elements();
		jobject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void load(__jni_impl::java::io::InputStream arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject keys();
		QAndroidJniObject keySet();
		jobject getOrDefault(jobject arg0, jobject arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jdouble getVersion();
		QAndroidJniObject getService(jstring arg0, jstring arg1);
		QAndroidJniObject getServices();
		jstring getInfo();
		jboolean isConfigured();
		jstring getVersionStr();
		QAndroidJniObject configure(jstring arg0);
	};
} // namespace __jni_impl::java::security

#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "Provider_Service.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Provider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.Provider",
			"(V)V");
	}
	
	// Methods
	jstring Provider::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Provider::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Provider::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject Provider::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Provider::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jstring Provider::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Provider::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Provider::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
	void Provider::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean Provider::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject Provider::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Provider::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Provider::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Provider::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Provider::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void Provider::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Provider::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Provider::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void Provider::load(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Provider::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Provider::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Provider::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Provider::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject Provider::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Provider::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jdouble Provider::getVersion()
	{
		return __thiz.callMethod<jdouble>(
			"getVersion",
			"()D"
		);
	}
	QAndroidJniObject Provider::getService(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getService",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Provider::getServices()
	{
		return __thiz.callObjectMethod(
			"getServices",
			"()Ljava/util/Set;"
		);
	}
	jstring Provider::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Provider::isConfigured()
	{
		return __thiz.callMethod<jboolean>(
			"isConfigured",
			"()Z"
		);
	}
	jstring Provider::getVersionStr()
	{
		return __thiz.callObjectMethod(
			"getVersionStr",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Provider::configure(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"configure",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Provider : public __jni_impl::java::security::Provider
	{
	public:
		Provider(QAndroidJniObject obj) { __thiz = obj; }
		Provider()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PROVIDER

