#include "../os/Bundle.hpp"
#include "./AliasActivity.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	AliasActivity::AliasActivity(QJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	AliasActivity::AliasActivity()
		: android::app::Activity(
			"android.app.AliasActivity",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

