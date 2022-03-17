#pragma once

#include "./PackageManager.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageItemInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint PackageItemInfo::banner()
	{
		return getField<jint>(
			"banner"
		);
	}
	inline jint PackageItemInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline jint PackageItemInfo::labelRes()
	{
		return getField<jint>(
			"labelRes"
		);
	}
	inline jint PackageItemInfo::logo()
	{
		return getField<jint>(
			"logo"
		);
	}
	inline android::os::Bundle PackageItemInfo::metaData()
	{
		return getObjectField(
			"metaData",
			"Landroid/os/Bundle;"
		);
	}
	inline JString PackageItemInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageItemInfo::nonLocalizedLabel()
	{
		return getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		);
	}
	inline JString PackageItemInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PackageItemInfo::PackageItemInfo()
		: JObject(
			"android.content.pm.PackageItemInfo",
			"()V"
		) {}
	inline PackageItemInfo::PackageItemInfo(android::content::pm::PackageItemInfo &arg0)
		: JObject(
			"android.content.pm.PackageItemInfo",
			"(Landroid/content/pm/PackageItemInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::drawable::Drawable PackageItemInfo::loadBanner(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadBanner",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageItemInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString PackageItemInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageItemInfo::loadLogo(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLogo",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable PackageItemInfo::loadUnbadgedIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadUnbadgedIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JObject PackageItemInfo::loadXmlMetaData(android::content::pm::PackageManager arg0, JString arg1) const
	{
		return callObjectMethod(
			"loadXmlMetaData",
			"(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void PackageItemInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
