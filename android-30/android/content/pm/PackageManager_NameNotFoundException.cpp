#include "../../../JString.hpp"
#include "./PackageManager_NameNotFoundException.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	PackageManager_NameNotFoundException::PackageManager_NameNotFoundException()
		: android::util::AndroidException(
			"android.content.pm.PackageManager$NameNotFoundException",
			"()V"
		) {}
	PackageManager_NameNotFoundException::PackageManager_NameNotFoundException(JString arg0)
		: android::util::AndroidException(
			"android.content.pm.PackageManager$NameNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content::pm

