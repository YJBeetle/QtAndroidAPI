#include "../content/Context.hpp"
#include "./KeyStoreParameter.hpp"
#include "./KeyStoreParameter_Builder.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStoreParameter_Builder::KeyStoreParameter_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStoreParameter_Builder::KeyStoreParameter_Builder(android::content::Context arg0)
		: __JniBaseClass(
			"android.security.KeyStoreParameter$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::security::KeyStoreParameter KeyStoreParameter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/KeyStoreParameter;"
		);
	}
	android::security::KeyStoreParameter_Builder KeyStoreParameter_Builder::setEncryptionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setEncryptionRequired",
			"(Z)Landroid/security/KeyStoreParameter$Builder;",
			arg0
		);
	}
} // namespace android::security

