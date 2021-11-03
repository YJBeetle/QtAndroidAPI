#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class SslCertificate;
}
class JString;

namespace android::net::http
{
	class SslCertificate_DName : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SslCertificate_DName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SslCertificate_DName(QJniObject obj);
		
		// Constructors
		SslCertificate_DName(android::net::http::SslCertificate arg0, JString arg1);
		
		// Methods
		JString getCName() const;
		JString getDName() const;
		JString getOName() const;
		JString getUName() const;
	};
} // namespace android::net::http

