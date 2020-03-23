#pragma once

#ifndef ANDROID_SERVICE_CHOOSER_CHOOSERTARGET
#define ANDROID_SERVICE_CHOOSER_CHOOSERTARGET

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::chooser
{
	class ChooserTarget : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::graphics::drawable::Icon arg1, jfloat arg2, __jni_impl::android::content::ComponentName arg3, __jni_impl::android::os::Bundle arg4);
		
		// Methods
		QAndroidJniObject toString();
		jfloat getScore();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getComponentName();
		QAndroidJniObject getTitle();
		QAndroidJniObject getIntentExtras();
		QAndroidJniObject getIcon();
	};
} // namespace __jni_impl::android::service::chooser

#include "../../graphics/drawable/Icon.hpp"
#include "../../content/ComponentName.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::chooser
{
	// Fields
	QAndroidJniObject ChooserTarget::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.chooser.ChooserTarget",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ChooserTarget::__constructor(jstring arg0, __jni_impl::android::graphics::drawable::Icon arg1, jfloat arg2, __jni_impl::android::content::ComponentName arg3, __jni_impl::android::os::Bundle arg4)
	{
		__thiz = QAndroidJniObject(
			"android.service.chooser.ChooserTarget",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;FLandroid/content/ComponentName;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ChooserTarget::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jfloat ChooserTarget::getScore()
	{
		return __thiz.callMethod<jfloat>(
			"getScore",
			"()F");
	}
	jint ChooserTarget::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ChooserTarget::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ChooserTarget::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;");
	}
	QAndroidJniObject ChooserTarget::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject ChooserTarget::getIntentExtras()
	{
		return __thiz.callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject ChooserTarget::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
} // namespace __jni_impl::android::service::chooser

namespace android::service::chooser
{
	class ChooserTarget : public __jni_impl::android::service::chooser::ChooserTarget
	{
	public:
		ChooserTarget(QAndroidJniObject obj) { __thiz = obj; }
		ChooserTarget(jstring arg0, __jni_impl::android::graphics::drawable::Icon arg1, jfloat arg2, __jni_impl::android::content::ComponentName arg3, __jni_impl::android::os::Bundle arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::service::chooser

#endif // ANDROID_SERVICE_CHOOSER_CHOOSERTARGET

