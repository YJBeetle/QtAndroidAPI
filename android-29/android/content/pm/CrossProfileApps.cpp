#include "../ComponentName.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/UserHandle.hpp"
#include "./CrossProfileApps.hpp"

namespace android::content::pm
{
	// Fields
	
	CrossProfileApps::CrossProfileApps(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CrossProfileApps::getProfileSwitchingIconDrawable(android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getProfileSwitchingIconDrawable",
			"(Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring CrossProfileApps::getProfileSwitchingLabel(android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getProfileSwitchingLabel",
			"(Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject CrossProfileApps::getTargetUserProfiles()
	{
		return __thiz.callObjectMethod(
			"getTargetUserProfiles",
			"()Ljava/util/List;"
		);
	}
	void CrossProfileApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::content::pm

