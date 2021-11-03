#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InputMethodSubtype.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InputMethodSubtype::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputMethodSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	InputMethodSubtype::InputMethodSubtype(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, jboolean arg5, jboolean arg6)
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
	InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, jboolean arg5, jboolean arg6, jint arg7)
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
	jboolean InputMethodSubtype::containsExtraValueKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint InputMethodSubtype::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InputMethodSubtype::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString InputMethodSubtype::getDisplayName(android::content::Context arg0, JString arg1, android::content::pm::ApplicationInfo arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JString InputMethodSubtype::getExtraValue() const
	{
		return callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		);
	}
	JString InputMethodSubtype::getExtraValueOf(JString arg0) const
	{
		return callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint InputMethodSubtype::getIconResId() const
	{
		return callMethod<jint>(
			"getIconResId",
			"()I"
		);
	}
	JString InputMethodSubtype::getLanguageTag() const
	{
		return callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	JString InputMethodSubtype::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	JString InputMethodSubtype::getMode() const
	{
		return callObjectMethod(
			"getMode",
			"()Ljava/lang/String;"
		);
	}
	jint InputMethodSubtype::getNameResId() const
	{
		return callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	jint InputMethodSubtype::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InputMethodSubtype::isAsciiCapable() const
	{
		return callMethod<jboolean>(
			"isAsciiCapable",
			"()Z"
		);
	}
	jboolean InputMethodSubtype::isAuxiliary() const
	{
		return callMethod<jboolean>(
			"isAuxiliary",
			"()Z"
		);
	}
	jboolean InputMethodSubtype::overridesImplicitlyEnabledSubtype() const
	{
		return callMethod<jboolean>(
			"overridesImplicitlyEnabledSubtype",
			"()Z"
		);
	}
	void InputMethodSubtype::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

