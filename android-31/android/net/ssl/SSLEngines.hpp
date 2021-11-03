#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;
namespace javax::net::ssl
{
	class SSLEngine;
}

namespace android::net::ssl
{
	class SSLEngines : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngines(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngines(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JByteArray exportKeyingMaterial(javax::net::ssl::SSLEngine arg0, JString arg1, JByteArray arg2, jint arg3);
		static jboolean isSupportedEngine(javax::net::ssl::SSLEngine arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLEngine arg0, jboolean arg1);
	};
} // namespace android::net::ssl

