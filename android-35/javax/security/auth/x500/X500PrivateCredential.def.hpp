#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace javax::security::auth::x500
{
	class X500PrivateCredential : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X500PrivateCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X500PrivateCredential(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		X500PrivateCredential(java::security::cert::X509Certificate arg0, JObject arg1);
		X500PrivateCredential(java::security::cert::X509Certificate arg0, JObject arg1, JString arg2);
		
		// Methods
		void destroy() const;
		JString getAlias() const;
		java::security::cert::X509Certificate getCertificate() const;
		JObject getPrivateKey() const;
		jboolean isDestroyed() const;
	};
} // namespace javax::security::auth::x500

