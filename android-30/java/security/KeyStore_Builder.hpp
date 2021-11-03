#pragma once

#include "../../JObject.hpp"

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
	class KeyStore_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyStore_Builder newInstance(java::io::File arg0, JObject arg1);
		static java::security::KeyStore_Builder newInstance(java::security::KeyStore arg0, JObject arg1);
		static java::security::KeyStore_Builder newInstance(jstring arg0, java::security::Provider arg1, JObject arg2);
		static java::security::KeyStore_Builder newInstance(jstring arg0, java::security::Provider arg1, java::io::File arg2, JObject arg3);
		java::security::KeyStore getKeyStore();
		JObject getProtectionParameter(jstring arg0);
	};
} // namespace java::security

