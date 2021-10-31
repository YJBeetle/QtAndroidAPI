#include "./PackageManager_NameNotFoundException.hpp"

namespace android::content::pm
{
	// Fields
	
	PackageManager_NameNotFoundException::PackageManager_NameNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PackageManager_NameNotFoundException::PackageManager_NameNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageManager$NameNotFoundException",
			"()V"
		);
	}
	PackageManager_NameNotFoundException::PackageManager_NameNotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageManager$NameNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::content::pm

