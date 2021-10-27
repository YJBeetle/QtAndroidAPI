#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SNIServerName.hpp"

namespace javax::net::ssl
{
	class SNIMatcher;
}

namespace javax::net::ssl
{
	class SNIHostName : public javax::net::ssl::SNIServerName
	{
	public:
		// Fields
		
		SNIHostName(QAndroidJniObject obj);
		// Constructors
		SNIHostName(jbyteArray &arg0);
		SNIHostName(jstring &arg0);
		SNIHostName(const QString &arg0);
		SNIHostName() = default;
		
		// Methods
		static QAndroidJniObject createSNIMatcher(jstring arg0);
		static QAndroidJniObject createSNIMatcher(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring getAsciiName();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::net::ssl

