#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::net::ssl
{
	class SSLEngine;
}

namespace android::net::ssl
{
	class SSLEngines : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngines(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngines(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isSupportedEngine(javax::net::ssl::SSLEngine arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLEngine arg0, jboolean arg1);
	};
} // namespace android::net::ssl

