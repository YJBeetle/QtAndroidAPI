#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/pm/ApplicationInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InputMethodSubtype.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InputMethodSubtype::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputMethodSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, jboolean arg5, jboolean arg6)
		: JObject(
			"android.view.inputmethod.InputMethodSubtype",
			"(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5,
			arg6
		) {}
	inline InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, jboolean arg5, jboolean arg6, jint arg7)
		: JObject(
			"android.view.inputmethod.InputMethodSubtype",
			"(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZI)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	inline jboolean InputMethodSubtype::containsExtraValueKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint InputMethodSubtype::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InputMethodSubtype::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString InputMethodSubtype::getDisplayName(android::content::Context arg0, JString arg1, android::content::pm::ApplicationInfo arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JString InputMethodSubtype::getExtraValue() const
	{
		return callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		);
	}
	inline JString InputMethodSubtype::getExtraValueOf(JString arg0) const
	{
		return callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint InputMethodSubtype::getIconResId() const
	{
		return callMethod<jint>(
			"getIconResId",
			"()I"
		);
	}
	inline JString InputMethodSubtype::getLanguageTag() const
	{
		return callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString InputMethodSubtype::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	inline JString InputMethodSubtype::getMode() const
	{
		return callObjectMethod(
			"getMode",
			"()Ljava/lang/String;"
		);
	}
	inline jint InputMethodSubtype::getNameResId() const
	{
		return callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	inline jint InputMethodSubtype::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean InputMethodSubtype::isAsciiCapable() const
	{
		return callMethod<jboolean>(
			"isAsciiCapable",
			"()Z"
		);
	}
	inline jboolean InputMethodSubtype::isAuxiliary() const
	{
		return callMethod<jboolean>(
			"isAuxiliary",
			"()Z"
		);
	}
	inline jboolean InputMethodSubtype::overridesImplicitlyEnabledSubtype() const
	{
		return callMethod<jboolean>(
			"overridesImplicitlyEnabledSubtype",
			"()Z"
		);
	}
	inline void InputMethodSubtype::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

