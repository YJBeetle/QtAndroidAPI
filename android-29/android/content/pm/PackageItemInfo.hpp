#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEITEMINFO
#define ANDROID_CONTENT_PM_PACKAGEITEMINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}

namespace __jni_impl::android::content::pm
{
	class PackageItemInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint banner();
		jint icon();
		jint labelRes();
		jint logo();
		QAndroidJniObject metaData();
		jstring name();
		jstring nonLocalizedLabel();
		jstring packageName();
		
		// Constructors
		void __constructor(__jni_impl::android::content::pm::PackageItemInfo arg0);
		void __constructor();
		
		// Methods
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject loadUnbadgedIcon(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadBanner(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadLogo(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadXmlMetaData(__jni_impl::android::content::pm::PackageManager arg0, jstring arg1);
		QAndroidJniObject loadXmlMetaData(__jni_impl::android::content::pm::PackageManager arg0, const QString &arg1);
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "PackageManager.hpp"

namespace __jni_impl::android::content::pm
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
	
	// Constructors
	void PackageItemInfo::__constructor(__jni_impl::android::content::pm::PackageItemInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageItemInfo",
			"(Landroid/content/pm/PackageItemInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageItemInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageItemInfo",
			"()V"
		);
	}
	
	// Methods
	void PackageItemInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageItemInfo::loadUnbadgedIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadUnbadgedIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageItemInfo::loadBanner(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadBanner",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageItemInfo::loadLogo(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLogo",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageItemInfo::loadXmlMetaData(__jni_impl::android::content::pm::PackageManager arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"loadXmlMetaData",
			"(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PackageItemInfo::loadXmlMetaData(__jni_impl::android::content::pm::PackageManager arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"loadXmlMetaData",
			"(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring PackageItemInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject PackageItemInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageItemInfo : public __jni_impl::android::content::pm::PackageItemInfo
	{
	public:
		PackageItemInfo(QAndroidJniObject obj) { __thiz = obj; }
		PackageItemInfo(__jni_impl::android::content::pm::PackageItemInfo arg0)
		{
			__constructor(
				arg0);
		}
		PackageItemInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEITEMINFO

