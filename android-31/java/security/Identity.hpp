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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Identity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Identity(QAndroidJniObject obj);
		
		// Constructors
		Identity(JString arg0);
		Identity(JString arg0, java::security::IdentityScope arg1);
		
		// Methods
		void addCertificate(JObject arg0) const;
		JArray certificates() const;
		jboolean equals(JObject arg0) const;
		JString getInfo() const;
		JString getName() const;
		JObject getPublicKey() const;
		java::security::IdentityScope getScope() const;
		jint hashCode() const;
		void removeCertificate(JObject arg0) const;
		void setInfo(JString arg0) const;
		void setPublicKey(JObject arg0) const;
		JString toString() const;
		JString toString(jboolean arg0) const;
	};
} // namespace java::security

