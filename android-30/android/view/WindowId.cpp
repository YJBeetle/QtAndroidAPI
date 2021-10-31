#include "../os/Parcel.hpp"
#include "./WindowId_FocusObserver.hpp"
#include "./WindowId.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass WindowId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WindowId::WindowId(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WindowId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WindowId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WindowId::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	void WindowId::registerFocusObserver(android::view::WindowId_FocusObserver arg0)
	{
		callMethod<void>(
			"registerFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.object()
		);
	}
	jstring WindowId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WindowId::unregisterFocusObserver(android::view::WindowId_FocusObserver arg0)
	{
		callMethod<void>(
			"unregisterFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.object()
		);
	}
	void WindowId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

