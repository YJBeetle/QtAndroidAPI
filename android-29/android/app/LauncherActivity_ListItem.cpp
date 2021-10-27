#include "../content/pm/ResolveInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "./LauncherActivity_ListItem.hpp"

namespace android::app
{
	// Fields
	jstring LauncherActivity_ListItem::className()
	{
		return __thiz.getObjectField(
			"className",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LauncherActivity_ListItem::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject LauncherActivity_ListItem::icon()
	{
		return __thiz.getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring LauncherActivity_ListItem::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LauncherActivity_ListItem::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LauncherActivity_ListItem::resolveInfo()
	{
		return __thiz.getObjectField(
			"resolveInfo",
			"Landroid/content/pm/ResolveInfo;"
		);
	}
	
	LauncherActivity_ListItem::LauncherActivity_ListItem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LauncherActivity_ListItem::LauncherActivity_ListItem()
	{
		__thiz = QAndroidJniObject(
			"android.app.LauncherActivity$ListItem",
			"()V"
		);
	}
	
	// Methods
} // namespace android::app

