#pragma once

#include "../../JObject.hpp"

class JObjectArray;
class JArray;
class JArray;
namespace java::io
{
	class File;
}
class JClass;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Security(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Security(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint addProvider(java::security::Provider arg0);
		static JString getAlgorithmProperty(JString arg0, JString arg1);
		static JObject getAlgorithms(JString arg0);
		static JString getProperty(JString arg0);
		static java::security::Provider getProvider(JString arg0);
		static JArray getProviders();
		static JArray getProviders(JString arg0);
		static JArray getProviders(JObject arg0);
		static jint insertProviderAt(java::security::Provider arg0, jint arg1);
		static void removeProvider(JString arg0);
		static void setProperty(JString arg0, JString arg1);
	};
} // namespace java::security

