#pragma once

#include "../../JObject.hpp"

class JArray;
class JObject;
class JString;
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
		Identity(JString arg0);
		Identity(JString arg0, java::security::IdentityScope arg1);
		
		// Methods
		void addCertificate(JObject arg0);
		JArray certificates();
		jboolean equals(JObject arg0);
		JString getInfo();
		JString getName();
		JObject getPublicKey();
		java::security::IdentityScope getScope();
		jint hashCode();
		void removeCertificate(JObject arg0);
		void setInfo(JString arg0);
		void setPublicKey(JObject arg0);
		JString toString();
		JString toString(jboolean arg0);
	};
} // namespace java::security

