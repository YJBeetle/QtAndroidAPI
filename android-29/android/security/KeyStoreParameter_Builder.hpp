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
		
		KeyStoreParameter_Builder(QAndroidJniObject obj);
		// Constructors
		KeyStoreParameter_Builder(android::content::Context &arg0);
		KeyStoreParameter_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEncryptionRequired(jboolean arg0);
	};
} // namespace android::security

