#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::net
{
	class NetworkInterface;
}

namespace java::net
{
	class InetAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		InetAddress(QAndroidJniObject obj);
		// Constructors
		InetAddress() = default;
		
		// Methods
		static jarray getAllByName(jstring arg0);
		static jarray getAllByName(const QString &arg0);
		static QAndroidJniObject getByAddress(jbyteArray arg0);
		static QAndroidJniObject getByAddress(jstring arg0, jbyteArray arg1);
		static QAndroidJniObject getByAddress(const QString &arg0, jbyteArray arg1);
		static QAndroidJniObject getByName(jstring arg0);
		static QAndroidJniObject getByName(const QString &arg0);
		static QAndroidJniObject getLocalHost();
		static QAndroidJniObject getLoopbackAddress();
		jboolean equals(jobject arg0);
		jbyteArray getAddress();
		jstring getCanonicalHostName();
		jstring getHostAddress();
		jstring getHostName();
		jint hashCode();
		jboolean isAnyLocalAddress();
		jboolean isLinkLocalAddress();
		jboolean isLoopbackAddress();
		jboolean isMCGlobal();
		jboolean isMCLinkLocal();
		jboolean isMCNodeLocal();
		jboolean isMCOrgLocal();
		jboolean isMCSiteLocal();
		jboolean isMulticastAddress();
		jboolean isReachable(jint arg0);
		jboolean isReachable(java::net::NetworkInterface arg0, jint arg1, jint arg2);
		jboolean isSiteLocalAddress();
		jstring toString();
	};
} // namespace java::net

