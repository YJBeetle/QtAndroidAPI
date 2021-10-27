#pragma once

#ifndef ANDROID_APP_REMOTEACTION
#define ANDROID_APP_REMOTEACTION

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
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::app
{
	class RemoteAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3);
		void __constructor(__jni_impl::android::graphics::drawable::Icon arg0, const QString &arg1, const QString &arg2, __jni_impl::android::app::PendingIntent arg3);
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		void dump(jstring arg0, __jni_impl::java::io::PrintWriter arg1);
		void dump(const QString &arg0, __jni_impl::java::io::PrintWriter arg1);
		QAndroidJniObject getActionIntent();
		jstring getContentDescription();
		QAndroidJniObject getIcon();
		jstring getTitle();
		jboolean isEnabled();
		void setEnabled(jboolean arg0);
		void setShouldShowIcon(jboolean arg0);
		jboolean shouldShowIcon();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject RemoteAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RemoteAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void RemoteAction::__constructor(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3)
	{
		__thiz = QAndroidJniObject(
			"android.app.RemoteAction",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RemoteAction::__constructor(__jni_impl::android::graphics::drawable::Icon arg0, const QString &arg1, const QString &arg2, __jni_impl::android::app::PendingIntent arg3)
	{
		__thiz = QAndroidJniObject(
			"android.app.RemoteAction",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RemoteAction::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/RemoteAction;"
		);
	}
	jint RemoteAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RemoteAction::dump(jstring arg0, __jni_impl::java::io::PrintWriter arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/PrintWriter;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteAction::dump(const QString &arg0, __jni_impl::java::io::PrintWriter arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/PrintWriter;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteAction::getActionIntent()
	{
		return __thiz.callObjectMethod(
			"getActionIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jstring RemoteAction::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject RemoteAction::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring RemoteAction::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean RemoteAction::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void RemoteAction::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void RemoteAction::setShouldShowIcon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShouldShowIcon",
			"(Z)V",
			arg0
		);
	}
	jboolean RemoteAction::shouldShowIcon()
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowIcon",
			"()Z"
		);
	}
	void RemoteAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class RemoteAction : public __jni_impl::android::app::RemoteAction
	{
	public:
		RemoteAction(QAndroidJniObject obj) { __thiz = obj; }
		RemoteAction(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_REMOTEACTION

