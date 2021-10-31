#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Security : public __JniBaseClass
	{
	public:
		// Fields
		
		Security(QAndroidJniObject obj);
		// Constructors
		Security() = default;
		
		// Methods
		static jint addProvider(java::security::Provider arg0);
		static jstring getAlgorithmProperty(jstring arg0, jstring arg1);
		static QAndroidJniObject getAlgorithms(jstring arg0);
		static jstring getProperty(jstring arg0);
		static QAndroidJniObject getProvider(jstring arg0);
		static jarray getProviders();
		static jarray getProviders(jstring arg0);
		static jarray getProviders(__JniBaseClass arg0);
		static jint insertProviderAt(java::security::Provider arg0, jint arg1);
		static void removeProvider(jstring arg0);
		static void setProperty(jstring arg0, jstring arg1);
	};
} // namespace java::security

