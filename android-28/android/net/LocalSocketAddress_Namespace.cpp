#include "./LocalSocketAddress_Namespace.hpp"

namespace android::net
{
	// Fields
	android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::ABSTRACT()
	{
		return getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"ABSTRACT",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::FILESYSTEM()
	{
		return getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"FILESYSTEM",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::RESERVED()
	{
		return getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"RESERVED",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	
	// QJniObject forward
	LocalSocketAddress_Namespace::LocalSocketAddress_Namespace(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;",
			arg0
		);
	}
	jarray LocalSocketAddress_Namespace::values()
	{
		return callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"values",
			"()[Landroid/net/LocalSocketAddress$Namespace;"
		).object<jarray>();
	}
} // namespace android::net

