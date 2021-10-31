#include "../ComponentName.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/UserHandle.hpp"
#include "./CrossProfileApps.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	CrossProfileApps::CrossProfileApps(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CrossProfileApps::getProfileSwitchingIconDrawable(android::os::UserHandle arg0)
	{
		return callObjectMethod(
			"getProfileSwitchingIconDrawable",
			"(Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring CrossProfileApps::getProfileSwitchingLabel(android::os::UserHandle arg0)
	{
		return callObjectMethod(
			"getProfileSwitchingLabel",
			"(Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	QAndroidJniObject CrossProfileApps::getTargetUserProfiles()
	{
		return callObjectMethod(
			"getTargetUserProfiles",
			"()Ljava/util/List;"
		);
	}
	void CrossProfileApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::content::pm

