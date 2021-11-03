#pragma once

#include "../../../JObject.hpp"


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
		SSLParameters(jarray arg0);
		SSLParameters(jarray arg0, jarray arg1);
		
		// Methods
		JObject getAlgorithmConstraints();
		jarray getApplicationProtocols();
		jarray getCipherSuites();
		jboolean getEnableRetransmissions();
		jstring getEndpointIdentificationAlgorithm();
		jint getMaximumPacketSize();
		jboolean getNeedClientAuth();
		jarray getProtocols();
		JObject getSNIMatchers();
		JObject getServerNames();
		jboolean getUseCipherSuitesOrder();
		jboolean getWantClientAuth();
		void setAlgorithmConstraints(JObject arg0);
		void setApplicationProtocols(jarray arg0);
		void setCipherSuites(jarray arg0);
		void setEnableRetransmissions(jboolean arg0);
		void setEndpointIdentificationAlgorithm(jstring arg0);
		void setMaximumPacketSize(jint arg0);
		void setNeedClientAuth(jboolean arg0);
		void setProtocols(jarray arg0);
		void setSNIMatchers(JObject arg0);
		void setServerNames(JObject arg0);
		void setUseCipherSuitesOrder(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace javax::net::ssl

