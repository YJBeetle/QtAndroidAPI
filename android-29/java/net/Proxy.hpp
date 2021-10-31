#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class Proxy_Type;
}
namespace java::net
{
	class SocketAddress;
}

namespace java::net
{
	class Proxy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NO_PROXY();
		
		Proxy(QAndroidJniObject obj);
		// Constructors
		Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1);
		Proxy() = default;
		
		// Methods
		QAndroidJniObject address();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		QAndroidJniObject type();
	};
} // namespace java::net

