#include "../os/Parcel.hpp"
#include "./WindowId_FocusObserver.hpp"
#include "./WindowId.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject WindowId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.WindowId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WindowId::WindowId(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint WindowId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WindowId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WindowId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WindowId::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	void WindowId::registerFocusObserver(android::view::WindowId_FocusObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jstring WindowId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WindowId::unregisterFocusObserver(android::view::WindowId_FocusObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void WindowId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

