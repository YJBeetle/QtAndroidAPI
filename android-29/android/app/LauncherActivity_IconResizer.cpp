#include "./LauncherActivity.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./LauncherActivity_IconResizer.hpp"

namespace android::app
{
	// Fields
	
	LauncherActivity_IconResizer::LauncherActivity_IconResizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LauncherActivity_IconResizer::LauncherActivity_IconResizer(android::app::LauncherActivity &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.LauncherActivity$IconResizer",
			"(Landroid/app/LauncherActivity;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject LauncherActivity_IconResizer::createIconThumbnail(android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"createIconThumbnail",
			"(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

