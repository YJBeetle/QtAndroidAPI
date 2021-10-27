#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Fragment_SavedState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Fragment_SavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Fragment$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$ClassLoaderCreator;"
		);
	}
	
	// Constructors
	void Fragment_SavedState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Fragment$SavedState",
			"(V)V");
	}
	
	// Methods
	jint Fragment_SavedState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Fragment_SavedState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class Fragment_SavedState : public __jni_impl::android::app::Fragment_SavedState
	{
	public:
		Fragment_SavedState(QAndroidJniObject obj) { __thiz = obj; }
		Fragment_SavedState()
		{
			__constructor();
		}
	};
} // namespace android::app

