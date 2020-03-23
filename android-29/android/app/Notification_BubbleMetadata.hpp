#pragma once

#ifndef ANDROID_APP_NOTIFICATION_BUBBLEMETADATA
#define ANDROID_APP_NOTIFICATION_BUBBLEMETADATA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::app
{
	class Notification_BubbleMetadata : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getIntent();
		QAndroidJniObject getDeleteIntent();
		jint getDesiredHeight();
		jint getDesiredHeightResId();
		jboolean getAutoExpandBubble();
		jboolean isNotificationSuppressed();
		QAndroidJniObject getIcon();
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"
#include "PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Notification_BubbleMetadata::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification$BubbleMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Notification_BubbleMetadata::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BubbleMetadata",
			"(V)V");
	}
	
	// Methods
	jint Notification_BubbleMetadata::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Notification_BubbleMetadata::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Notification_BubbleMetadata::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;");
	}
	QAndroidJniObject Notification_BubbleMetadata::getDeleteIntent()
	{
		return __thiz.callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;");
	}
	jint Notification_BubbleMetadata::getDesiredHeight()
	{
		return __thiz.callMethod<jint>(
			"getDesiredHeight",
			"()I");
	}
	jint Notification_BubbleMetadata::getDesiredHeightResId()
	{
		return __thiz.callMethod<jint>(
			"getDesiredHeightResId",
			"()I");
	}
	jboolean Notification_BubbleMetadata::getAutoExpandBubble()
	{
		return __thiz.callMethod<jboolean>(
			"getAutoExpandBubble",
			"()Z");
	}
	jboolean Notification_BubbleMetadata::isNotificationSuppressed()
	{
		return __thiz.callMethod<jboolean>(
			"isNotificationSuppressed",
			"()Z");
	}
	QAndroidJniObject Notification_BubbleMetadata::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_BubbleMetadata : public __jni_impl::android::app::Notification_BubbleMetadata
	{
	public:
		Notification_BubbleMetadata(QAndroidJniObject obj) { __thiz = obj; }
		Notification_BubbleMetadata()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_BUBBLEMETADATA

