#include "./StandardProtocolFamily.hpp"

namespace java::net
{
	// Fields
	QAndroidJniObject StandardProtocolFamily::INET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	QAndroidJniObject StandardProtocolFamily::INET6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET6",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	QAndroidJniObject StandardProtocolFamily::UNIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"UNIX",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	
	StandardProtocolFamily::StandardProtocolFamily(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject StandardProtocolFamily::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/StandardProtocolFamily;",
			arg0
		);
	}
	QAndroidJniObject StandardProtocolFamily::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/StandardProtocolFamily;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray StandardProtocolFamily::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"values",
			"()[Ljava/net/StandardProtocolFamily;"
		).object<jarray>();
	}
} // namespace java::net

