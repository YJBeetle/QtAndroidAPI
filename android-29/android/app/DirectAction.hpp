#pragma once

#ifndef ANDROID_APP_DIRECTACTION
#define ANDROID_APP_DIRECTACTION

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
	class LocusId;
}

namespace __jni_impl::android::app
{
	class DirectAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring getId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		QAndroidJniObject getLocusId();
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"
#include "../content/LocusId.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject DirectAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.DirectAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DirectAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.DirectAction",
			"(V)V");
	}
	
	// Methods
	jboolean DirectAction::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DirectAction::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DirectAction::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DirectAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DirectAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DirectAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject DirectAction::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class DirectAction : public __jni_impl::android::app::DirectAction
	{
	public:
		DirectAction(QAndroidJniObject obj) { __thiz = obj; }
		DirectAction()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_DIRECTACTION

