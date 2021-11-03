#include "../os/Parcel.hpp"
#include "./WindowId_FocusObserver.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WindowId.hpp"

namespace android::view
{
	// Fields
	JObject WindowId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	WindowId::WindowId(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowId::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WindowId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WindowId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WindowId::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	void WindowId::registerFocusObserver(android::view::WindowId_FocusObserver arg0) const
	{
		callMethod<void>(
			"registerFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.object()
		);
	}
	JString WindowId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WindowId::unregisterFocusObserver(android::view::WindowId_FocusObserver arg0) const
	{
		callMethod<void>(
			"unregisterFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.object()
		);
	}
	void WindowId::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

