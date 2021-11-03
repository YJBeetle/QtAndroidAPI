#include "../../os/Parcel.hpp"
#include "./InputBinding.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InputBinding::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputBinding",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	InputBinding::InputBinding(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputBinding::InputBinding(JObject arg0, android::view::inputmethod::InputBinding &arg1)
		: JObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/InputBinding;)V",
			arg0.object(),
			arg1.object()
		) {}
	InputBinding::InputBinding(JObject arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/os/IBinder;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint InputBinding::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject InputBinding::getConnection()
	{
		return callObjectMethod(
			"getConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	JObject InputBinding::getConnectionToken()
	{
		return callObjectMethod(
			"getConnectionToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint InputBinding::getPid()
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint InputBinding::getUid()
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jstring InputBinding::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputBinding::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

