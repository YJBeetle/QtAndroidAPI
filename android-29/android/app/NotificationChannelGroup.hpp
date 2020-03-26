#pragma once

#ifndef ANDROID_APP_NOTIFICATIONCHANNELGROUP
#define ANDROID_APP_NOTIFICATIONCHANNELGROUP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class NotificationChannelGroup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject clone();
		jstring getId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getChannels();
		jboolean isBlocked();
		void setDescription(jstring arg0);
		jstring getDescription();
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject NotificationChannelGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationChannelGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void NotificationChannelGroup::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationChannelGroup",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jstring NotificationChannelGroup::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean NotificationChannelGroup::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NotificationChannelGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationChannelGroup::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject NotificationChannelGroup::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/NotificationChannelGroup;"
		);
	}
	jstring NotificationChannelGroup::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationChannelGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NotificationChannelGroup::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject NotificationChannelGroup::getChannels()
	{
		return __thiz.callObjectMethod(
			"getChannels",
			"()Ljava/util/List;"
		);
	}
	jboolean NotificationChannelGroup::isBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	void NotificationChannelGroup::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring NotificationChannelGroup::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class NotificationChannelGroup : public __jni_impl::android::app::NotificationChannelGroup
	{
	public:
		NotificationChannelGroup(QAndroidJniObject obj) { __thiz = obj; }
		NotificationChannelGroup(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATIONCHANNELGROUP

