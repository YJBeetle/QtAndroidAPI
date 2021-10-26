#pragma once

#ifndef ANDROID_APP_WALLPAPERINFO
#define ANDROID_APP_WALLPAPERINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ResolveInfo;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content::pm
{
	class ServiceInfo;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::app
{
	class WallpaperInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1);
		
		// Methods
		jstring toString();
		jstring getPackageName();
		QAndroidJniObject loadThumbnail(__jni_impl::android::content::pm::PackageManager arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void dump(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		QAndroidJniObject getComponent();
		QAndroidJniObject getServiceInfo();
		jstring getServiceName();
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		jstring loadAuthor(__jni_impl::android::content::pm::PackageManager arg0);
		jstring loadDescription(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadContextUri(__jni_impl::android::content::pm::PackageManager arg0);
		jstring loadContextDescription(__jni_impl::android::content::pm::PackageManager arg0);
		jboolean getShowMetadataInPreview();
		jstring getSettingsActivity();
		QAndroidJniObject getSettingsSliceUri();
		jboolean supportsMultipleDisplays();
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../content/pm/ResolveInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../os/Parcel.hpp"
#include "../content/ComponentName.hpp"
#include "../content/pm/ServiceInfo.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void WallpaperInfo::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.WallpaperInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring WallpaperInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::loadThumbnail(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadThumbnail",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jint WallpaperInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WallpaperInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WallpaperInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WallpaperInfo::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
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
	jstring WallpaperInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring WallpaperInfo::loadAuthor(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadAuthor",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring WallpaperInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject WallpaperInfo::loadContextUri(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadContextUri",
			"(Landroid/content/pm/PackageManager;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jstring WallpaperInfo::loadContextDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadContextDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean WallpaperInfo::getShowMetadataInPreview()
	{
		return __thiz.callMethod<jboolean>(
			"getShowMetadataInPreview",
			"()Z"
		);
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
	jboolean WallpaperInfo::supportsMultipleDisplays()
	{
		return __thiz.callMethod<jboolean>(
			"supportsMultipleDisplays",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class WallpaperInfo : public __jni_impl::android::app::WallpaperInfo
	{
	public:
		WallpaperInfo(QAndroidJniObject obj) { __thiz = obj; }
		WallpaperInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_WALLPAPERINFO

