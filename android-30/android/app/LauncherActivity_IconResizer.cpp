#include "./LauncherActivity.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./LauncherActivity_IconResizer.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	LauncherActivity_IconResizer::LauncherActivity_IconResizer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LauncherActivity_IconResizer::LauncherActivity_IconResizer(android::app::LauncherActivity arg0)
		: JObject(
			"android.app.LauncherActivity$IconResizer",
			"(Landroid/app/LauncherActivity;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::drawable::Drawable LauncherActivity_IconResizer::createIconThumbnail(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"createIconThumbnail",
			"(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
} // namespace android::app

