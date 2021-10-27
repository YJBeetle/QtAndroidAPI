#pragma once

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
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getChannels();
		jstring getDescription();
		jstring getId();
		jstring getName();
		jint hashCode();
		jboolean isBlocked();
		void setDescription(jstring arg0);
		void setDescription(const QString &arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			arg1
		);
	}
	void NotificationChannelGroup::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationChannelGroup",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject NotificationChannelGroup::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/NotificationChannelGroup;"
		);
	}
	jint NotificationChannelGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NotificationChannelGroup::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject NotificationChannelGroup::getChannels()
	{
		return __thiz.callObjectMethod(
			"getChannels",
			"()Ljava/util/List;"
		);
	}
	jstring NotificationChannelGroup::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannelGroup::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannelGroup::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint NotificationChannelGroup::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	void NotificationChannelGroup::setDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring NotificationChannelGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

