#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../content/pm/ResolveInfo.hpp"
#include "../content/pm/ServiceInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./WallpaperInfo.hpp"

namespace android::app
{
	// Fields
	JObject WallpaperInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.WallpaperInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	WallpaperInfo::WallpaperInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.app.WallpaperInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint WallpaperInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WallpaperInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::ComponentName WallpaperInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	JString WallpaperInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::ServiceInfo WallpaperInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	JString WallpaperInfo::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	JString WallpaperInfo::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri WallpaperInfo::getSettingsSliceUri() const
	{
		return callObjectMethod(
			"getSettingsSliceUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean WallpaperInfo::getShowMetadataInPreview() const
	{
		return callMethod<jboolean>(
			"getShowMetadataInPreview",
			"()Z"
		);
	}
	JString WallpaperInfo::loadAuthor(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadAuthor",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString WallpaperInfo::loadContextDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadContextDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::net::Uri WallpaperInfo::loadContextUri(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadContextUri",
			"(Landroid/content/pm/PackageManager;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	JString WallpaperInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable WallpaperInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString WallpaperInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable WallpaperInfo::loadThumbnail(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadThumbnail",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jboolean WallpaperInfo::supportsMultipleDisplays() const
	{
		return callMethod<jboolean>(
			"supportsMultipleDisplays",
			"()Z"
		);
	}
	JString WallpaperInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WallpaperInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

