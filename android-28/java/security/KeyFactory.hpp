#pragma once

#include "../../__JniBaseClass.hpp"

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
	class KeyFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyFactory getInstance(jstring arg0);
		static java::security::KeyFactory getInstance(jstring arg0, jstring arg1);
		static java::security::KeyFactory getInstance(jstring arg0, java::security::Provider arg1);
		__JniBaseClass generatePrivate(__JniBaseClass arg0);
		__JniBaseClass generatePublic(__JniBaseClass arg0);
		jstring getAlgorithm();
		__JniBaseClass getKeySpec(__JniBaseClass arg0, jclass arg1);
		java::security::Provider getProvider();
		__JniBaseClass translateKey(__JniBaseClass arg0);
	};
} // namespace java::security

