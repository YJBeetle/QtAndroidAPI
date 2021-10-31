#include "./PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./PackageItemInfo.hpp"

namespace android::content::pm
{
	// Fields
	jint PackageItemInfo::banner()
	{
		return getField<jint>(
			"banner"
		);
	}
	jint PackageItemInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	jint PackageItemInfo::labelRes()
	{
		return getField<jint>(
			"labelRes"
		);
	}
	jint PackageItemInfo::logo()
	{
		return getField<jint>(
			"logo"
		);
	}
	android::os::Bundle PackageItemInfo::metaData()
	{
		return getObjectField(
			"metaData",
			"Landroid/os/Bundle;"
		);
	}
	jstring PackageItemInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageItemInfo::nonLocalizedLabel()
	{
		return getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PackageItemInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	PackageItemInfo::PackageItemInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PackageItemInfo::PackageItemInfo()
		: __JniBaseClass(
			"android.content.pm.PackageItemInfo",
			"()V"
		) {}
	PackageItemInfo::PackageItemInfo(android::content::pm::PackageItemInfo &arg0)
		: __JniBaseClass(
			"android.content.pm.PackageItemInfo",
			"(Landroid/content/pm/PackageItemInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::drawable::Drawable PackageItemInfo::loadBanner(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadBanner",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageItemInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring PackageItemInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	android::graphics::drawable::Drawable PackageItemInfo::loadLogo(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLogo",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable PackageItemInfo::loadUnbadgedIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadUnbadgedIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	__JniBaseClass PackageItemInfo::loadXmlMetaData(android::content::pm::PackageManager arg0, jstring arg1)
	{
		return callObjectMethod(
			"loadXmlMetaData",
			"(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0.object(),
			arg1
		);
	}
	void PackageItemInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

