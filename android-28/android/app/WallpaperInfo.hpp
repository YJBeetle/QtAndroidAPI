#pragma once

#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/pm/PackageManager.def.hpp"
#include "../content/pm/ResolveInfo.def.hpp"
#include "../content/pm/ServiceInfo.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./WallpaperInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject WallpaperInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.WallpaperInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WallpaperInfo::WallpaperInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.app.WallpaperInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint WallpaperInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void WallpaperInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::ComponentName WallpaperInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JString WallpaperInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo WallpaperInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	inline JString WallpaperInfo::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline JString WallpaperInfo::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean WallpaperInfo::getShowMetadataInPreview() const
	{
		return callMethod<jboolean>(
			"getShowMetadataInPreview",
			"()Z"
		);
	}
	inline JString WallpaperInfo::loadAuthor(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadAuthor",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString WallpaperInfo::loadContextDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadContextDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::net::Uri WallpaperInfo::loadContextUri(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadContextUri",
			"(Landroid/content/pm/PackageManager;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline JString WallpaperInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable WallpaperInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString WallpaperInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable WallpaperInfo::loadThumbnail(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadThumbnail",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString WallpaperInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WallpaperInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

