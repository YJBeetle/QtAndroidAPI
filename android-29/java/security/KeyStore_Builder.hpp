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
		
		KeyStore_Builder(QAndroidJniObject obj);
		// Constructors
		KeyStore_Builder() = default;
		
		// Methods
		static QAndroidJniObject newInstance(java::io::File arg0, __JniBaseClass arg1);
		static QAndroidJniObject newInstance(java::security::KeyStore arg0, __JniBaseClass arg1);
		static QAndroidJniObject newInstance(jstring arg0, java::security::Provider arg1, __JniBaseClass arg2);
		static QAndroidJniObject newInstance(jstring arg0, java::security::Provider arg1, java::io::File arg2, __JniBaseClass arg3);
		QAndroidJniObject getKeyStore();
		QAndroidJniObject getProtectionParameter(jstring arg0);
	};
} // namespace java::security

