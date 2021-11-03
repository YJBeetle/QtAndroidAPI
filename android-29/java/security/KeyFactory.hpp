#pragma once

#include "../../JObject.hpp"

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
		KeyFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyFactory getInstance(jstring arg0);
		static java::security::KeyFactory getInstance(jstring arg0, jstring arg1);
		static java::security::KeyFactory getInstance(jstring arg0, java::security::Provider arg1);
		JObject generatePrivate(JObject arg0);
		JObject generatePublic(JObject arg0);
		jstring getAlgorithm();
		JObject getKeySpec(JObject arg0, jclass arg1);
		java::security::Provider getProvider();
		JObject translateKey(JObject arg0);
	};
} // namespace java::security

