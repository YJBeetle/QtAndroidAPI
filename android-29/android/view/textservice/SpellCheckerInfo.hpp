#pragma once

#ifndef ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERINFO
#define ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERINFO

#include "../../../__JniBaseClass.hpp"

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
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view::textservice
{
	class SpellCheckerSubtype;
}

namespace __jni_impl::android::view::textservice
{
	class SpellCheckerInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getPackageName();
		QAndroidJniObject getId();
		QAndroidJniObject getComponent();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getServiceInfo();
		QAndroidJniObject loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject getSettingsActivity();
		QAndroidJniObject getSubtypeAt(jint arg0);
		jint getSubtypeCount();
	};
} // namespace __jni_impl::android::view::textservice

#include "../../os/Parcel.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "SpellCheckerSubtype.hpp"

namespace __jni_impl::android::view::textservice
{
	// Fields
	QAndroidJniObject SpellCheckerInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SpellCheckerInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void SpellCheckerInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SpellCheckerInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SpellCheckerInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpellCheckerInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpellCheckerInfo::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;");
	}
	jint SpellCheckerInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SpellCheckerInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SpellCheckerInfo::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;");
	}
	QAndroidJniObject SpellCheckerInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SpellCheckerInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SpellCheckerInfo::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpellCheckerInfo::getSubtypeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/textservice/SpellCheckerSubtype;",
			arg0);
	}
	jint SpellCheckerInfo::getSubtypeCount()
	{
		return __thiz.callMethod<jint>(
			"getSubtypeCount",
			"()I");
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class SpellCheckerInfo : public __jni_impl::android::view::textservice::SpellCheckerInfo
	{
	public:
		SpellCheckerInfo(QAndroidJniObject obj) { __thiz = obj; }
		SpellCheckerInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::textservice

#endif // ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERINFO

