#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace javax::net::ssl
{
	class SSLParameters : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLParameters(QAndroidJniObject obj);
		
		// Constructors
		SSLParameters();
		SSLParameters(JArray arg0);
		SSLParameters(JArray arg0, JArray arg1);
		
		// Methods
		JObject getAlgorithmConstraints();
		JArray getApplicationProtocols();
		JArray getCipherSuites();
		jboolean getEnableRetransmissions();
		JString getEndpointIdentificationAlgorithm();
		jint getMaximumPacketSize();
		jboolean getNeedClientAuth();
		JArray getProtocols();
		JObject getSNIMatchers();
		JObject getServerNames();
		jboolean getUseCipherSuitesOrder();
		jboolean getWantClientAuth();
		void setAlgorithmConstraints(JObject arg0);
		void setApplicationProtocols(JArray arg0);
		void setCipherSuites(JArray arg0);
		void setEnableRetransmissions(jboolean arg0);
		void setEndpointIdentificationAlgorithm(JString arg0);
		void setMaximumPacketSize(jint arg0);
		void setNeedClientAuth(jboolean arg0);
		void setProtocols(JArray arg0);
		void setSNIMatchers(JObject arg0);
		void setServerNames(JObject arg0);
		void setUseCipherSuitesOrder(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace javax::net::ssl

