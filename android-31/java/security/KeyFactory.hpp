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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyFactory getInstance(JString arg0);
		static java::security::KeyFactory getInstance(JString arg0, JString arg1);
		static java::security::KeyFactory getInstance(JString arg0, java::security::Provider arg1);
		JObject generatePrivate(JObject arg0);
		JObject generatePublic(JObject arg0);
		JString getAlgorithm();
		JObject getKeySpec(JObject arg0, JClass arg1);
		java::security::Provider getProvider();
		JObject translateKey(JObject arg0);
	};
} // namespace java::security

