#pragma once

#ifndef ANDROID_CONTENT_PM_RESOLVEINFO
#define ANDROID_CONTENT_PM_RESOLVEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentFilter;
}
namespace __jni_impl::android::content::pm
{
	class ActivityInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::content::pm
{
	class ProviderInfo;
}
namespace __jni_impl::android::content::pm
{
	class ServiceInfo;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ResolveInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject activityInfo();
		QAndroidJniObject filter();
		jint icon();
		jboolean isDefault();
		jboolean isInstantAppAvailable();
		jint labelRes();
		jint match();
		jstring nonLocalizedLabel();
		jint preferredOrder();
		jint priority();
		QAndroidJniObject providerInfo();
		jstring resolvePackageName();
		QAndroidJniObject serviceInfo();
		jint specificIndex();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::ResolveInfo arg0);
		
		// Methods
		jint describeContents();
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void dump(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		jint getIconResource();
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../IntentFilter.hpp"
#include "ActivityInfo.hpp"
#include "PackageManager.hpp"
#include "ProviderInfo.hpp"
#include "ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ResolveInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ResolveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject ResolveInfo::activityInfo()
	{
		return __thiz.getObjectField(
			"activityInfo",
			"Landroid/content/pm/ActivityInfo;"
		);
	}
	QAndroidJniObject ResolveInfo::filter()
	{
		return __thiz.getObjectField(
			"filter",
			"Landroid/content/IntentFilter;"
		);
	}
	jint ResolveInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jboolean ResolveInfo::isDefault()
	{
		return __thiz.getField<jboolean>(
			"isDefault"
		);
	}
	jboolean ResolveInfo::isInstantAppAvailable()
	{
		return __thiz.getField<jboolean>(
			"isInstantAppAvailable"
		);
	}
	jint ResolveInfo::labelRes()
	{
		return __thiz.getField<jint>(
			"labelRes"
		);
	}
	jint ResolveInfo::match()
	{
		return __thiz.getField<jint>(
			"match"
		);
	}
	jstring ResolveInfo::nonLocalizedLabel()
	{
		return __thiz.getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ResolveInfo::preferredOrder()
	{
		return __thiz.getField<jint>(
			"preferredOrder"
		);
	}
	jint ResolveInfo::priority()
	{
		return __thiz.getField<jint>(
			"priority"
		);
	}
	QAndroidJniObject ResolveInfo::providerInfo()
	{
		return __thiz.getObjectField(
			"providerInfo",
			"Landroid/content/pm/ProviderInfo;"
		);
	}
	jstring ResolveInfo::resolvePackageName()
	{
		return __thiz.getObjectField(
			"resolvePackageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ResolveInfo::serviceInfo()
	{
		return __thiz.getObjectField(
			"serviceInfo",
			"Landroid/content/pm/ServiceInfo;"
		);
	}
	jint ResolveInfo::specificIndex()
	{
		return __thiz.getField<jint>(
			"specificIndex"
		);
	}
	
	// Constructors
	void ResolveInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ResolveInfo",
			"()V"
		);
	}
	void ResolveInfo::__constructor(__jni_impl::android::content::pm::ResolveInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ResolveInfo",
			"(Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ResolveInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResolveInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ResolveInfo::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint ResolveInfo::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	QAndroidJniObject ResolveInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring ResolveInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ResolveInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ResolveInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ResolveInfo : public __jni_impl::android::content::pm::ResolveInfo
	{
	public:
		ResolveInfo(QAndroidJniObject obj) { __thiz = obj; }
		ResolveInfo()
		{
			__constructor();
		}
		ResolveInfo(__jni_impl::android::content::pm::ResolveInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_RESOLVEINFO

