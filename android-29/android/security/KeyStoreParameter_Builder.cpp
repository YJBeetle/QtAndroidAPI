#include "../content/Context.hpp"
#include "./KeyStoreParameter.hpp"
#include "./KeyStoreParameter_Builder.hpp"

namespace android::security
{
	// Fields
	
	KeyStoreParameter_Builder::KeyStoreParameter_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStoreParameter_Builder::KeyStoreParameter_Builder(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyStoreParameter$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStoreParameter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/KeyStoreParameter;"
		);
	}
	QAndroidJniObject KeyStoreParameter_Builder::setEncryptionRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setEncryptionRequired",
			"(Z)Landroid/security/KeyStoreParameter$Builder;",
			arg0
		);
	}
} // namespace android::security

