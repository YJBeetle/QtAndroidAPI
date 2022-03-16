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
		SSLParameters(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SSLParameters();
		SSLParameters(JArray arg0);
		SSLParameters(JArray arg0, JArray arg1);
		
		// Methods
		JObject getAlgorithmConstraints() const;
		JArray getApplicationProtocols() const;
		JArray getCipherSuites() const;
		jboolean getEnableRetransmissions() const;
		JString getEndpointIdentificationAlgorithm() const;
		jint getMaximumPacketSize() const;
		jboolean getNeedClientAuth() const;
		JArray getProtocols() const;
		JObject getSNIMatchers() const;
		JObject getServerNames() const;
		jboolean getUseCipherSuitesOrder() const;
		jboolean getWantClientAuth() const;
		void setAlgorithmConstraints(JObject arg0) const;
		void setApplicationProtocols(JArray arg0) const;
		void setCipherSuites(JArray arg0) const;
		void setEnableRetransmissions(jboolean arg0) const;
		void setEndpointIdentificationAlgorithm(JString arg0) const;
		void setMaximumPacketSize(jint arg0) const;
		void setNeedClientAuth(jboolean arg0) const;
		void setProtocols(JArray arg0) const;
		void setSNIMatchers(JObject arg0) const;
		void setServerNames(JObject arg0) const;
		void setUseCipherSuitesOrder(jboolean arg0) const;
		void setWantClientAuth(jboolean arg0) const;
	};
} // namespace javax::net::ssl

