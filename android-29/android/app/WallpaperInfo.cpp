#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../content/pm/ResolveInfo.hpp"
#include "../content/pm/ServiceInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./WallpaperInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject WallpaperInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WallpaperInfo::WallpaperInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WallpaperInfo::WallpaperInfo(android::content::Context &arg0, android::content::pm::ResolveInfo &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.WallpaperInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint WallpaperInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WallpaperInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WallpaperInfo::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject WallpaperInfo::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring WallpaperInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jstring WallpaperInfo::getServiceName()
	{
		return __thiz.callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperInfo::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::getSettingsSliceUri()
	{
		return __thiz.callObjectMethod(
			"getSettingsSliceUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean WallpaperInfo::getShowMetadataInPreview()
	{
		return __thiz.callMethod<jboolean>(
			"getShowMetadataInPreview",
			"()Z"
		);
	}
	jstring WallpaperInfo::loadAuthor(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadAuthor",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring WallpaperInfo::loadContextDescription(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadContextDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::loadContextUri(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadContextUri",
			"(Landroid/content/pm/PackageManager;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jstring WallpaperInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring WallpaperInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::loadThumbnail(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadThumbnail",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jboolean WallpaperInfo::supportsMultipleDisplays()
	{
		return __thiz.callMethod<jboolean>(
			"supportsMultipleDisplays",
			"()Z"
		);
	}
	jstring WallpaperInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WallpaperInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

