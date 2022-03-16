#pragma once

#include "../content/pm/ResolveInfo.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./LauncherActivity_ListItem.def.hpp"

namespace android::app
{
	// Fields
	inline JString LauncherActivity_ListItem::className()
	{
		return getObjectField(
			"className",
			"Ljava/lang/String;"
		);
	}
	inline android::os::Bundle LauncherActivity_ListItem::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	inline android::graphics::drawable::Drawable LauncherActivity_ListItem::icon()
	{
		return getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JString LauncherActivity_ListItem::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		);
	}
	inline JString LauncherActivity_ListItem::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline android::content::pm::ResolveInfo LauncherActivity_ListItem::resolveInfo()
	{
		return getObjectField(
			"resolveInfo",
			"Landroid/content/pm/ResolveInfo;"
		);
	}
	
	// Constructors
	inline LauncherActivity_ListItem::LauncherActivity_ListItem()
		: JObject(
			"android.app.LauncherActivity$ListItem",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

// Base class headers

