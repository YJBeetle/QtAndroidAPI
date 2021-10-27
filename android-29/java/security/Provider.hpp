#pragma once

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
		void clear();
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject configure(jstring arg0);
		QAndroidJniObject configure(const QString &arg0);
		QAndroidJniObject elements();
		QAndroidJniObject entrySet();
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jobject arg0);
		jstring getInfo();
		jstring getName();
		jobject getOrDefault(jobject arg0, jobject arg1);
		jstring getProperty(jstring arg0);
		jstring getProperty(const QString &arg0);
		QAndroidJniObject getService(jstring arg0, jstring arg1);
		QAndroidJniObject getService(const QString &arg0, const QString &arg1);
		QAndroidJniObject getServices();
		jdouble getVersion();
		jstring getVersionStr();
		jboolean isConfigured();
		QAndroidJniObject keySet();
		QAndroidJniObject keys();
		void load(__jni_impl::java::io::InputStream arg0);
		jobject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jstring toString();
		QAndroidJniObject values();
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
	void Provider::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
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
	jobject Provider::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject Provider::configure(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"configure",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0
		);
	}
	QAndroidJniObject Provider::configure(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"configure",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Provider::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Provider::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
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
	jobject Provider::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Provider::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Provider::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring Provider::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Provider::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
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
	QAndroidJniObject Provider::getService(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getService",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Provider::getServices()
	{
		return __thiz.callObjectMethod(
			"getServices",
			"()Ljava/util/Set;"
		);
	}
	jdouble Provider::getVersion()
	{
		return __thiz.callMethod<jdouble>(
			"getVersion",
			"()D"
		);
	}
	jstring Provider::getVersionStr()
	{
		return __thiz.callObjectMethod(
			"getVersionStr",
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
	QAndroidJniObject Provider::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Provider::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	void Provider::load(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
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
	jobject Provider::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
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
	jboolean Provider::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject Provider::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
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

