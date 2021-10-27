#include "../lang/ClassLoader.hpp"
#include "../lang/Void.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "../net/URL.hpp"
#include "../security/AccessControlContext.hpp"
#include "./Optional.hpp"
#include "./ServiceLoader.hpp"

namespace java::util
{
	// Fields
	
	ServiceLoader::ServiceLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	QAndroidJniObject ServiceLoader::load(jclass arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ServiceLoader::load(__JniBaseClass arg0, jclass arg1)
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
} // namespace java::util

