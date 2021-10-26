#pragma once

#ifndef ANDROID_VIEW_ABSSAVEDSTATE
#define ANDROID_VIEW_ABSSAVEDSTATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::android::view
{
	class AbsSavedState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY_STATE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getSuperState();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject AbsSavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.AbsSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject AbsSavedState::EMPTY_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.AbsSavedState",
			"EMPTY_STATE",
			"Landroid/view/AbsSavedState;"
		);
	}
	
	// Constructors
	void AbsSavedState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.AbsSavedState",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AbsSavedState::getSuperState()
	{
		return __thiz.callObjectMethod(
			"getSuperState",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AbsSavedState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AbsSavedState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class AbsSavedState : public __jni_impl::android::view::AbsSavedState
	{
	public:
		AbsSavedState(QAndroidJniObject obj) { __thiz = obj; }
		AbsSavedState()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_ABSSAVEDSTATE

