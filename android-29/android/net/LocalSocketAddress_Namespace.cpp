#include "./LocalSocketAddress_Namespace.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject LocalSocketAddress_Namespace::ABSTRACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"ABSTRACT",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	QAndroidJniObject LocalSocketAddress_Namespace::FILESYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"FILESYSTEM",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	QAndroidJniObject LocalSocketAddress_Namespace::RESERVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"RESERVED",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	
	// QAndroidJniObject forward
	LocalSocketAddress_Namespace::LocalSocketAddress_Namespace(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LocalSocketAddress_Namespace::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;",
			arg0
		);
	}
	jarray LocalSocketAddress_Namespace::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"values",
			"()[Landroid/net/LocalSocketAddress$Namespace;"
		).object<jarray>();
	}
} // namespace android::net

