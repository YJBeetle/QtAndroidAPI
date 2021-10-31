#include "./Proxy_Type.hpp"

namespace java::net
{
	// Fields
	QAndroidJniObject Proxy_Type::DIRECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy$Type",
			"DIRECT",
			"Ljava/net/Proxy$Type;"
		);
	}
	QAndroidJniObject Proxy_Type::HTTP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy$Type",
			"HTTP",
			"Ljava/net/Proxy$Type;"
		);
	}
	QAndroidJniObject Proxy_Type::SOCKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy$Type",
			"SOCKS",
			"Ljava/net/Proxy$Type;"
		);
	}
	
	Proxy_Type::Proxy_Type(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Proxy_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Proxy$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Proxy$Type;",
			arg0
		);
	}
	jarray Proxy_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Proxy$Type",
			"values",
			"()[Ljava/net/Proxy$Type;"
		).object<jarray>();
	}
} // namespace java::net

