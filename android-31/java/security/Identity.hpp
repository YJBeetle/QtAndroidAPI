#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class IdentityScope;
}
namespace java::util
{
	class Vector;
}

namespace java::security
{
	class Identity : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Identity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Identity(QJniObject obj);
		
		// Constructors
		Identity(jstring arg0);
		Identity(jstring arg0, java::security::IdentityScope arg1);
		
		// Methods
		void addCertificate(JObject arg0);
		jarray certificates();
		jboolean equals(jobject arg0);
		jstring getInfo();
		jstring getName();
		JObject getPublicKey();
		java::security::IdentityScope getScope();
		jint hashCode();
		void removeCertificate(JObject arg0);
		void setInfo(jstring arg0);
		void setPublicKey(JObject arg0);
		jstring toString();
		jstring toString(jboolean arg0);
	};
} // namespace java::security

