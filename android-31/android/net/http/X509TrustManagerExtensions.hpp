#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::http
{
	class X509TrustManagerExtensions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509TrustManagerExtensions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509TrustManagerExtensions(QJniObject obj);
		
		// Constructors
		X509TrustManagerExtensions(JObject arg0);
		
		// Methods
		JObject checkServerTrusted(JArray arg0, JString arg1, JString arg2) const;
		jboolean isSameTrustConfiguration(JString arg0, JString arg1) const;
		jboolean isUserAddedCertificate(java::security::cert::X509Certificate arg0) const;
	};
} // namespace android::net::http

