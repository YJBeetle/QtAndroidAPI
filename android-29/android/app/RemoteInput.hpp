#pragma once

#ifndef ANDROID_APP_REMOTEINPUT
#define ANDROID_APP_REMOTEINPUT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::app
{
	class RemoteInput : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint EDIT_CHOICES_BEFORE_SENDING_AUTO();
		static jint EDIT_CHOICES_BEFORE_SENDING_DISABLED();
		static jint EDIT_CHOICES_BEFORE_SENDING_ENABLED();
		static QAndroidJniObject EXTRA_RESULTS_DATA();
		static QAndroidJniObject RESULTS_CLIP_LABEL();
		static jint SOURCE_CHOICE();
		static jint SOURCE_FREE_FORM_INPUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getExtras();
		QAndroidJniObject getLabel();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getResultKey();
		QAndroidJniObject getChoices();
		QAndroidJniObject getAllowedDataTypes();
		jboolean isDataOnly();
		jboolean getAllowFreeFormInput();
		jint getEditChoicesBeforeSending();
		static QAndroidJniObject getDataResultsFromIntent(__jni_impl::android::content::Intent arg0, jstring arg1);
		static QAndroidJniObject getResultsFromIntent(__jni_impl::android::content::Intent arg0);
		static void addResultsToIntent(jarray arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::Bundle arg2);
		static void addDataResultToIntent(__jni_impl::android::app::RemoteInput arg0, __jni_impl::android::content::Intent arg1, __jni_impl::__JniBaseClass arg2);
		static void setResultsSource(__jni_impl::android::content::Intent arg0, jint arg1);
		static jint getResultsSource(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject RemoteInput::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RemoteInput",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint RemoteInput::EDIT_CHOICES_BEFORE_SENDING_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.RemoteInput",
			"EDIT_CHOICES_BEFORE_SENDING_AUTO");
	}
	jint RemoteInput::EDIT_CHOICES_BEFORE_SENDING_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.RemoteInput",
			"EDIT_CHOICES_BEFORE_SENDING_DISABLED");
	}
	jint RemoteInput::EDIT_CHOICES_BEFORE_SENDING_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.RemoteInput",
			"EDIT_CHOICES_BEFORE_SENDING_ENABLED");
	}
	QAndroidJniObject RemoteInput::EXTRA_RESULTS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RemoteInput",
			"EXTRA_RESULTS_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RemoteInput::RESULTS_CLIP_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RemoteInput",
			"RESULTS_CLIP_LABEL",
			"Ljava/lang/String;");
	}
	jint RemoteInput::SOURCE_CHOICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.RemoteInput",
			"SOURCE_CHOICE");
	}
	jint RemoteInput::SOURCE_FREE_FORM_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.RemoteInput",
			"SOURCE_FREE_FORM_INPUT");
	}
	
	// Constructors
	void RemoteInput::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.RemoteInput",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RemoteInput::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject RemoteInput::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	jint RemoteInput::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void RemoteInput::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject RemoteInput::getResultKey()
	{
		return __thiz.callObjectMethod(
			"getResultKey",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject RemoteInput::getChoices()
	{
		return __thiz.callObjectMethod(
			"getChoices",
			"()[Ljava/lang/CharSequence;");
	}
	QAndroidJniObject RemoteInput::getAllowedDataTypes()
	{
		return __thiz.callObjectMethod(
			"getAllowedDataTypes",
			"()Ljava/util/Set;");
	}
	jboolean RemoteInput::isDataOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isDataOnly",
			"()Z");
	}
	jboolean RemoteInput::getAllowFreeFormInput()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFreeFormInput",
			"()Z");
	}
	jint RemoteInput::getEditChoicesBeforeSending()
	{
		return __thiz.callMethod<jint>(
			"getEditChoicesBeforeSending",
			"()I");
	}
	QAndroidJniObject RemoteInput::getDataResultsFromIntent(__jni_impl::android::content::Intent arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.RemoteInput",
			"getDataResultsFromIntent",
			"(Landroid/content/Intent;Ljava/lang/String;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject RemoteInput::getResultsFromIntent(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.RemoteInput",
			"getResultsFromIntent",
			"(Landroid/content/Intent;)Landroid/os/Bundle;",
			arg0.__jniObject().object());
	}
	void RemoteInput::addResultsToIntent(jarray arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::Bundle arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.RemoteInput",
			"addResultsToIntent",
			"([Landroid/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void RemoteInput::addDataResultToIntent(__jni_impl::android::app::RemoteInput arg0, __jni_impl::android::content::Intent arg1, __jni_impl::__JniBaseClass arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.RemoteInput",
			"addDataResultToIntent",
			"(Landroid/app/RemoteInput;Landroid/content/Intent;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void RemoteInput::setResultsSource(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.RemoteInput",
			"setResultsSource",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint RemoteInput::getResultsSource(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.app.RemoteInput",
			"getResultsSource",
			"(Landroid/content/Intent;)I",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class RemoteInput : public __jni_impl::android::app::RemoteInput
	{
	public:
		RemoteInput(QAndroidJniObject obj) { __thiz = obj; }
		RemoteInput()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_REMOTEINPUT

