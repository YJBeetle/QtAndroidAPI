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
		return __thiz.getField<jint>(
			"banner"
		);
	}
	jint PackageItemInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jint PackageItemInfo::labelRes()
	{
		return __thiz.getField<jint>(
			"labelRes"
		);
	}
	jint PackageItemInfo::logo()
	{
		return __thiz.getField<jint>(
			"logo"
		);
	}
	QAndroidJniObject PackageItemInfo::metaData()
	{
		return __thiz.getObjectField(
			"metaData",
			"Landroid/os/Bundle;"
		);
	}
	jstring PackageItemInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageItemInfo::nonLocalizedLabel()
	{
		return __thiz.getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PackageItemInfo::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	PackageItemInfo::PackageItemInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PackageItemInfo::PackageItemInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageItemInfo",
			"()V"
		);
	}
	PackageItemInfo::PackageItemInfo(android::content::pm::PackageItemInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageItemInfo",
			"(Landroid/content/pm/PackageItemInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PackageItemInfo::loadBanner(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadBanner",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageItemInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring PackageItemInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject PackageItemInfo::loadLogo(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLogo",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageItemInfo::loadUnbadgedIcon(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadUnbadgedIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageItemInfo::loadXmlMetaData(android::content::pm::PackageManager arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"loadXmlMetaData",
			"(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void PackageItemInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

