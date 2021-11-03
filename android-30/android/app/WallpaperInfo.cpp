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
	
	// QJniObject forward
	WallpaperInfo::WallpaperInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WallpaperInfo::WallpaperInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.app.WallpaperInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint WallpaperInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WallpaperInfo::dump(JObject arg0, JString arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::ComponentName WallpaperInfo::getComponent()
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	JString WallpaperInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::ServiceInfo WallpaperInfo::getServiceInfo()
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	JString WallpaperInfo::getServiceName()
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	JString WallpaperInfo::getSettingsActivity()
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri WallpaperInfo::getSettingsSliceUri()
	{
		return callObjectMethod(
			"getSettingsSliceUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean WallpaperInfo::getShowMetadataInPreview()
	{
		return callMethod<jboolean>(
			"getShowMetadataInPreview",
			"()Z"
		);
	}
	JString WallpaperInfo::loadAuthor(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadAuthor",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString WallpaperInfo::loadContextDescription(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadContextDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::net::Uri WallpaperInfo::loadContextUri(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadContextUri",
			"(Landroid/content/pm/PackageManager;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	JString WallpaperInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable WallpaperInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString WallpaperInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable WallpaperInfo::loadThumbnail(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadThumbnail",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jboolean WallpaperInfo::supportsMultipleDisplays()
	{
		return callMethod<jboolean>(
			"supportsMultipleDisplays",
			"()Z"
		);
	}
	JString WallpaperInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WallpaperInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

