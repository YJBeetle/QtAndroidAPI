#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;
namespace java::security
{
	class KeyFactorySpi;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class KeyFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactory(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::KeyFactory getInstance(JString arg0);
		static java::security::KeyFactory getInstance(JString arg0, JString arg1);
		static java::security::KeyFactory getInstance(JString arg0, java::security::Provider arg1);
		JObject generatePrivate(JObject arg0) const;
		JObject generatePublic(JObject arg0) const;
		JString getAlgorithm() const;
		JObject getKeySpec(JObject arg0, JClass arg1) const;
		java::security::Provider getProvider() const;
		JObject translateKey(JObject arg0) const;
	};
} // namespace java::security

