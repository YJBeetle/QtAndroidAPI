#include "../content/pm/ResolveInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "./LauncherActivity_ListItem.hpp"

namespace android::app
{
	// Fields
	jstring LauncherActivity_ListItem::className()
	{
		return getObjectField(
			"className",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::Bundle LauncherActivity_ListItem::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	android::graphics::drawable::Drawable LauncherActivity_ListItem::icon()
	{
		return getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring LauncherActivity_ListItem::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LauncherActivity_ListItem::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::pm::ResolveInfo LauncherActivity_ListItem::resolveInfo()
	{
		return getObjectField(
			"resolveInfo",
			"Landroid/content/pm/ResolveInfo;"
		);
	}
	
	// QJniObject forward
	LauncherActivity_ListItem::LauncherActivity_ListItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LauncherActivity_ListItem::LauncherActivity_ListItem()
		: JObject(
			"android.app.LauncherActivity$ListItem",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

