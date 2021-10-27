#pragma once

#ifndef JAVA_UTIL_SERVICELOADER
#define JAVA_UTIL_SERVICELOADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
}
namespace __jni_impl::java::lang::reflect
{
	class Method;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::util
{
	class Optional;
}

namespace __jni_impl::java::util
{
	class ServiceLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject load(jclass arg0);
		static QAndroidJniObject load(jclass arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject load(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject loadInstalled(jclass arg0);
		QAndroidJniObject findFirst();
		QAndroidJniObject iterator();
		void reload();
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace __jni_impl::java::util

#include "../lang/ClassLoader.hpp"
#include "../lang/Void.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "../net/URL.hpp"
#include "../security/AccessControlContext.hpp"
#include "Optional.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ServiceLoader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceLoader",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ServiceLoader::load(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0
		);
	}
	QAndroidJniObject ServiceLoader::load(jclass arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ServiceLoader::load(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/ModuleLayer;Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ServiceLoader::loadInstalled(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ServiceLoader",
			"loadInstalled",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0
		);
	}
	QAndroidJniObject ServiceLoader::findFirst()
	{
		return __thiz.callObjectMethod(
			"findFirst",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject ServiceLoader::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	void ServiceLoader::reload()
	{
		__thiz.callMethod<void>(
			"reload",
			"()V"
		);
	}
	QAndroidJniObject ServiceLoader::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jstring ServiceLoader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class ServiceLoader : public __jni_impl::java::util::ServiceLoader
	{
	public:
		ServiceLoader(QAndroidJniObject obj) { __thiz = obj; }
		ServiceLoader()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_SERVICELOADER

