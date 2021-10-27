#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class DragAndDropPermissions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void release();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject DragAndDropPermissions::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.DragAndDropPermissions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DragAndDropPermissions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.DragAndDropPermissions",
			"(V)V");
	}
	
	// Methods
	jint DragAndDropPermissions::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DragAndDropPermissions::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void DragAndDropPermissions::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class DragAndDropPermissions : public __jni_impl::android::view::DragAndDropPermissions
	{
	public:
		DragAndDropPermissions(QAndroidJniObject obj) { __thiz = obj; }
		DragAndDropPermissions()
		{
			__constructor();
		}
	};
} // namespace android::view

