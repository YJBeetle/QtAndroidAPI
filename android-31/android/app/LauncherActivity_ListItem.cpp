#include "../content/pm/ResolveInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./LauncherActivity_ListItem.hpp"

namespace android::app
{
	// Fields
	JString LauncherActivity_ListItem::className()
	{
		return getObjectField(
			"className",
			"Ljava/lang/String;"
		);
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
	JString LauncherActivity_ListItem::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		);
	}
	JString LauncherActivity_ListItem::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	android::content::pm::ResolveInfo LauncherActivity_ListItem::resolveInfo()
	{
		return getObjectField(
			"resolveInfo",
			"Landroid/content/pm/ResolveInfo;"
		);
	}
	
	// Constructors
	LauncherActivity_ListItem::LauncherActivity_ListItem()
		: JObject(
			"android.app.LauncherActivity$ListItem",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

