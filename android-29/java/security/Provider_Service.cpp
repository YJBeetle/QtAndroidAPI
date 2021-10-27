#include "../lang/Boolean.hpp"
#include "../lang/ref/Reference.hpp"
#include "./Provider.hpp"
#include "./Provider_Service.hpp"

namespace java::security
{
	// Fields
	
	Provider_Service::Provider_Service(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Provider_Service::Provider_Service(java::security::Provider &arg0, jstring &arg1, jstring &arg2, jstring &arg3, __JniBaseClass &arg4, __JniBaseClass &arg5)
	{
		__thiz = QAndroidJniObject(
			"java.security.Provider$Service",
			"(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	Provider_Service::Provider_Service(java::security::Provider &arg0, const QString &arg1, const QString &arg2, const QString &arg3, __JniBaseClass &arg4, __JniBaseClass &arg5)
	{
		__thiz = QAndroidJniObject(
			"java.security.Provider$Service",
			"(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	jstring Provider_Service::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Provider_Service::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Provider_Service::getAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring Provider_Service::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
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
	jboolean Provider_Service::supportsParameter(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsParameter",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Provider_Service::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

