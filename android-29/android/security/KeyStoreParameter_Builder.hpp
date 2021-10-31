#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class KeyStoreParameter;
}

namespace android::security
{
	class KeyStoreParameter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStoreParameter_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreParameter_Builder(QAndroidJniObject obj);
		
		// Constructors
		KeyStoreParameter_Builder(android::content::Context arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEncryptionRequired(jboolean arg0);
	};
} // namespace android::security

