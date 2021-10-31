#include "./LauncherActivity.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./LauncherActivity_IconResizer.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	LauncherActivity_IconResizer::LauncherActivity_IconResizer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LauncherActivity_IconResizer::LauncherActivity_IconResizer(android::app::LauncherActivity arg0)
		: __JniBaseClass(
			"android.app.LauncherActivity$IconResizer",
			"(Landroid/app/LauncherActivity;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject LauncherActivity_IconResizer::createIconThumbnail(android::graphics::drawable::Drawable arg0)
	{
		return callObjectMethod(
			"createIconThumbnail",
			"(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
} // namespace android::app

