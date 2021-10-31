#include "../os/Bundle.hpp"
#include "./AliasActivity.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	AliasActivity::AliasActivity(QAndroidJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	AliasActivity::AliasActivity()
		: android::app::Activity(
			"android.app.AliasActivity",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

