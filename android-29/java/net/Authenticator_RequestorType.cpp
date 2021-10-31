#include "./Authenticator_RequestorType.hpp"

namespace java::net
{
	// Fields
	QAndroidJniObject Authenticator_RequestorType::PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"PROXY",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	QAndroidJniObject Authenticator_RequestorType::SERVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"SERVER",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	
	Authenticator_RequestorType::Authenticator_RequestorType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Authenticator_RequestorType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;",
			arg0
		);
	}
	jarray Authenticator_RequestorType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"values",
			"()[Ljava/net/Authenticator$RequestorType;"
		).object<jarray>();
	}
} // namespace java::net

