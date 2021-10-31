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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QAndroidJniObject obj);
		
		// Constructors
		Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1);
		
		// Methods
		QAndroidJniObject address();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		QAndroidJniObject type();
	};
} // namespace java::net

