#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
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
		jint describeContents();
		QAndroidJniObject getComponent();
		jstring getId();
		jstring getPackageName();
		QAndroidJniObject getServiceInfo();
		jstring getSettingsActivity();
		QAndroidJniObject getSubtypeAt(jint arg0);
		jint getSubtypeCount();
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textservice

#include "../../content/ComponentName.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./SpellCheckerSubtype.hpp"

namespace __jni_impl::android::view::textservice
{
	// Fields
	QAndroidJniObject SpellCheckerInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SpellCheckerInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SpellCheckerInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SpellCheckerInfo",
			"(V)V");
	}
	
	// Methods
	jint SpellCheckerInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SpellCheckerInfo::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring SpellCheckerInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SpellCheckerInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SpellCheckerInfo::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jstring SpellCheckerInfo::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SpellCheckerInfo::getSubtypeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/textservice/SpellCheckerSubtype;",
			arg0
		);
	}
	jint SpellCheckerInfo::getSubtypeCount()
	{
		return __thiz.callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	QAndroidJniObject SpellCheckerInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring SpellCheckerInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void SpellCheckerInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

