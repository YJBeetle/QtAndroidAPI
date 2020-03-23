#pragma once

#ifndef JAVA_SECURITY_PROVIDER
#define JAVA_SECURITY_PROVIDER

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
		QAndroidJniObject getName();
		QAndroidJniObject remove(jobject arg0);
		jboolean remove(jobject arg0, jobject arg1);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
		QAndroidJniObject getProperty(jstring arg0);
		QAndroidJniObject toString();
		QAndroidJniObject values();
		void clear();
		QAndroidJniObject replace(jobject arg0, jobject arg1);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject elements();
		QAndroidJniObject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject putIfAbsent(jobject arg0, jobject arg1);
		QAndroidJniObject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void load(__jni_impl::java::io::InputStream arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject keys();
		QAndroidJniObject keySet();
		QAndroidJniObject getOrDefault(jobject arg0, jobject arg1);
		QAndroidJniObject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jdouble getVersion();
		QAndroidJniObject getInfo();
		jboolean isConfigured();
		QAndroidJniObject getVersionStr();
		QAndroidJniObject configure(jstring arg0);
		QAndroidJniObject getServices();
		QAndroidJniObject getService(jstring arg0, jstring arg1);
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
	QAndroidJniObject Provider::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Provider::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	jboolean Provider::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject Provider::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Provider::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Provider::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Provider::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Provider::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	void Provider::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	QAndroidJniObject Provider::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean Provider::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	void Provider::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Provider::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Provider::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject Provider::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void Provider::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Provider::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Provider::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	void Provider::load(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void Provider::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Provider::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Provider::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Provider::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Provider::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Provider::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	jdouble Provider::getVersion()
	{
		return __thiz.callMethod<jdouble>(
			"getVersion",
			"()D");
	}
	QAndroidJniObject Provider::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;");
	}
	jboolean Provider::isConfigured()
	{
		return __thiz.callMethod<jboolean>(
			"isConfigured",
			"()Z");
	}
	QAndroidJniObject Provider::getVersionStr()
	{
		return __thiz.callObjectMethod(
			"getVersionStr",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Provider::configure(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"configure",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0);
	}
	QAndroidJniObject Provider::getServices()
	{
		return __thiz.callObjectMethod(
			"getServices",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Provider::getService(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getService",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;",
			arg0,
			arg1);
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

