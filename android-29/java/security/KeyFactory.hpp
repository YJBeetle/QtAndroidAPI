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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject generatePrivate(__JniBaseClass arg0);
		QAndroidJniObject generatePublic(__JniBaseClass arg0);
		jstring getAlgorithm();
		QAndroidJniObject getKeySpec(__JniBaseClass arg0, jclass arg1);
		QAndroidJniObject getProvider();
		QAndroidJniObject translateKey(__JniBaseClass arg0);
	};
} // namespace java::security

