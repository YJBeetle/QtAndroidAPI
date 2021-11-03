#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;
namespace javax::net::ssl
{
	class SSLSocket;
}

namespace android::net::ssl
{
	class SSLSockets : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLSockets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLSockets(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JByteArray exportKeyingMaterial(javax::net::ssl::SSLSocket arg0, JString arg1, JByteArray arg2, jint arg3);
		static jboolean isSupportedSocket(javax::net::ssl::SSLSocket arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLSocket arg0, jboolean arg1);
	};
} // namespace android::net::ssl

