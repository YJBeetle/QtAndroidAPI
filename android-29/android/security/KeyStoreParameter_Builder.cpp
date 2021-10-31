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
	QAndroidJniObject KeyStoreParameter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/KeyStoreParameter;"
		);
	}
	QAndroidJniObject KeyStoreParameter_Builder::setEncryptionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setEncryptionRequired",
			"(Z)Landroid/security/KeyStoreParameter$Builder;",
			arg0
		);
	}
} // namespace android::security

