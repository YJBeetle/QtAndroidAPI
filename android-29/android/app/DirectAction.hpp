#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getExtras();
		jstring getId();
		QAndroidJniObject getLocusId();
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../content/LocusId.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

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
	jint DirectAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DirectAction::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DirectAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring DirectAction::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DirectAction::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jint DirectAction::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
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

