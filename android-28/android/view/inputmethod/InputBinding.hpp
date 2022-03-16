#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./InputBinding.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InputBinding::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputBinding",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline InputBinding::InputBinding(JObject arg0, android::view::inputmethod::InputBinding &arg1)
		: JObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/InputBinding;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline InputBinding::InputBinding(JObject arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/os/IBinder;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint InputBinding::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject InputBinding::getConnection() const
	{
		return callObjectMethod(
			"getConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	inline JObject InputBinding::getConnectionToken() const
	{
		return callObjectMethod(
			"getConnectionToken",
			"()Landroid/os/IBinder;"
		);
	}
	inline jint InputBinding::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	inline jint InputBinding::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline JString InputBinding::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InputBinding::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

