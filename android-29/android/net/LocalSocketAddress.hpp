#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class LocalSocketAddress_Namespace;
}

namespace android::net
{
	class LocalSocketAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		LocalSocketAddress(QAndroidJniObject obj);
		// Constructors
		LocalSocketAddress(jstring &arg0);
		LocalSocketAddress(const QString &arg0);
		LocalSocketAddress(jstring &arg0, android::net::LocalSocketAddress_Namespace &arg1);
		LocalSocketAddress(const QString &arg0, android::net::LocalSocketAddress_Namespace &arg1);
		LocalSocketAddress() = default;
		
		// Methods
		jstring getName();
		QAndroidJniObject getNamespace();
	};
} // namespace android::net

