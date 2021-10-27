#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jboolean getAutoExpandBubble();
		QAndroidJniObject getDeleteIntent();
		jint getDesiredHeight();
		jint getDesiredHeightResId();
		QAndroidJniObject getIcon();
		QAndroidJniObject getIntent();
		jboolean isNotificationSuppressed();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Notification_BubbleMetadata::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification$BubbleMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
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
			"()I"
		);
	}
	jboolean Notification_BubbleMetadata::getAutoExpandBubble()
	{
		return __thiz.callMethod<jboolean>(
			"getAutoExpandBubble",
			"()Z"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getDeleteIntent()
	{
		return __thiz.callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeight()
	{
		return __thiz.callMethod<jint>(
			"getDesiredHeight",
			"()I"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeightResId()
	{
		return __thiz.callMethod<jint>(
			"getDesiredHeightResId",
			"()I"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jboolean Notification_BubbleMetadata::isNotificationSuppressed()
	{
		return __thiz.callMethod<jboolean>(
			"isNotificationSuppressed",
			"()Z"
		);
	}
	void Notification_BubbleMetadata::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

