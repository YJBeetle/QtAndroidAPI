#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class KeyStore_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyStore_Builder newInstance(java::io::File arg0, __JniBaseClass arg1);
		static java::security::KeyStore_Builder newInstance(java::security::KeyStore arg0, __JniBaseClass arg1);
		static java::security::KeyStore_Builder newInstance(jstring arg0, java::security::Provider arg1, __JniBaseClass arg2);
		static java::security::KeyStore_Builder newInstance(jstring arg0, java::security::Provider arg1, java::io::File arg2, __JniBaseClass arg3);
		java::security::KeyStore getKeyStore();
		__JniBaseClass getProtectionParameter(jstring arg0);
	};
} // namespace java::security

