#include "../os/Bundle.hpp"
#include "./AliasActivity.hpp"

namespace android::app
{
	// Fields
	
	AliasActivity::AliasActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AliasActivity::AliasActivity()
	{
		__thiz = QAndroidJniObject(
			"android.app.AliasActivity",
			"()V"
		);
	}
	
	// Methods
} // namespace android::app

