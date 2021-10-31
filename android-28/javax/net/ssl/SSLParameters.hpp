#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class SSLParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SSLParameters(QJniObject obj);
		
		// Constructors
		SSLParameters();
		SSLParameters(jarray arg0);
		SSLParameters(jarray arg0, jarray arg1);
		
		// Methods
		__JniBaseClass getAlgorithmConstraints();
		jarray getApplicationProtocols();
		jarray getCipherSuites();
		jboolean getEnableRetransmissions();
		jstring getEndpointIdentificationAlgorithm();
		jint getMaximumPacketSize();
		jboolean getNeedClientAuth();
		jarray getProtocols();
		__JniBaseClass getSNIMatchers();
		__JniBaseClass getServerNames();
		jboolean getUseCipherSuitesOrder();
		jboolean getWantClientAuth();
		void setAlgorithmConstraints(__JniBaseClass arg0);
		void setApplicationProtocols(jarray arg0);
		void setCipherSuites(jarray arg0);
		void setEnableRetransmissions(jboolean arg0);
		void setEndpointIdentificationAlgorithm(jstring arg0);
		void setMaximumPacketSize(jint arg0);
		void setNeedClientAuth(jboolean arg0);
		void setProtocols(jarray arg0);
		void setSNIMatchers(__JniBaseClass arg0);
		void setServerNames(__JniBaseClass arg0);
		void setUseCipherSuitesOrder(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace javax::net::ssl

