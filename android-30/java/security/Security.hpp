#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
namespace java::security
{
	class Provider;
}
namespace java::util
{
	class LinkedHashSet;
}
namespace java::util
{
	class Properties;
}

namespace java::security
{
	class Security : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Security(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Security(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint addProvider(java::security::Provider arg0);
		static jstring getAlgorithmProperty(jstring arg0, jstring arg1);
		static JObject getAlgorithms(jstring arg0);
		static jstring getProperty(jstring arg0);
		static java::security::Provider getProvider(jstring arg0);
		static jarray getProviders();
		static jarray getProviders(jstring arg0);
		static jarray getProviders(JObject arg0);
		static jint insertProviderAt(java::security::Provider arg0, jint arg1);
		static void removeProvider(jstring arg0);
		static void setProperty(jstring arg0, jstring arg1);
	};
} // namespace java::security

