#pragma once

#include "../ComponentName.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../../JString.hpp"
#include "./ArchivedActivityInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline ArchivedActivityInfo::ArchivedActivityInfo(JString arg0, android::content::ComponentName arg1)
		: JObject(
			"android.content.pm.ArchivedActivityInfo",
			"(Ljava/lang/CharSequence;Landroid/content/ComponentName;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline android::content::ComponentName ArchivedActivityInfo::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::graphics::drawable::Drawable ArchivedActivityInfo::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JString ArchivedActivityInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Drawable ArchivedActivityInfo::getMonochromeIcon() const
	{
		return callObjectMethod(
			"getMonochromeIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::content::pm::ArchivedActivityInfo ArchivedActivityInfo::setComponentName(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setComponentName",
			"(Landroid/content/ComponentName;)Landroid/content/pm/ArchivedActivityInfo;",
			arg0.object()
		);
	}
	inline android::content::pm::ArchivedActivityInfo ArchivedActivityInfo::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/content/pm/ArchivedActivityInfo;",
			arg0.object()
		);
	}
	inline android::content::pm::ArchivedActivityInfo ArchivedActivityInfo::setLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ArchivedActivityInfo;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ArchivedActivityInfo ArchivedActivityInfo::setMonochromeIcon(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setMonochromeIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/content/pm/ArchivedActivityInfo;",
			arg0.object()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
