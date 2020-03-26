#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_TASKDESCRIPTION
#define ANDROID_APP_ACTIVITYMANAGER_TASKDESCRIPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_TaskDescription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jstring arg0);
		void __constructor();
		void __constructor(__jni_impl::android::app::ActivityManager_TaskDescription arg0);
		void __constructor(jstring arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2);
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, __jni_impl::android::graphics::Bitmap arg1);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint getPrimaryColor();
		jstring getLabel();
		QAndroidJniObject getIcon();
	};
} // namespace __jni_impl::android::app

#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ActivityManager_TaskDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$TaskDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ActivityManager_TaskDescription::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void ActivityManager_TaskDescription::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ActivityManager_TaskDescription::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"()V");
	}
	void ActivityManager_TaskDescription::__constructor(__jni_impl::android::app::ActivityManager_TaskDescription arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.__jniObject().object());
	}
	void ActivityManager_TaskDescription::__constructor(jstring arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void ActivityManager_TaskDescription::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void ActivityManager_TaskDescription::__constructor(jstring arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring ActivityManager_TaskDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_TaskDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_TaskDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActivityManager_TaskDescription::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	jint ActivityManager_TaskDescription::getPrimaryColor()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryColor",
			"()I"
		);
	}
	jstring ActivityManager_TaskDescription::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ActivityManager_TaskDescription::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityManager_TaskDescription : public __jni_impl::android::app::ActivityManager_TaskDescription
	{
	public:
		ActivityManager_TaskDescription(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_TaskDescription(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ActivityManager_TaskDescription(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ActivityManager_TaskDescription()
		{
			__constructor();
		}
		ActivityManager_TaskDescription(__jni_impl::android::app::ActivityManager_TaskDescription arg0)
		{
			__constructor(
				arg0);
		}
		ActivityManager_TaskDescription(jstring arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ActivityManager_TaskDescription(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ActivityManager_TaskDescription(jstring arg0, __jni_impl::android::graphics::Bitmap arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_TASKDESCRIPTION

