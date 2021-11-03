#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
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
	InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6)
		: JObject(
			"android.view.inputmethod.InputMethodSubtype",
			"(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6, jint arg7)
		: JObject(
			"android.view.inputmethod.InputMethodSubtype",
			"(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	jboolean InputMethodSubtype::containsExtraValueKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint InputMethodSubtype::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InputMethodSubtype::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring InputMethodSubtype::getDisplayName(android::content::Context arg0, jstring arg1, android::content::pm::ApplicationInfo arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring InputMethodSubtype::getExtraValue()
	{
		return callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getExtraValueOf(jstring arg0)
	{
		return callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint InputMethodSubtype::getIconResId()
	{
		return callMethod<jint>(
			"getIconResId",
			"()I"
		);
	}
	jstring InputMethodSubtype::getLanguageTag()
	{
		return callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getMode()
	{
		return callObjectMethod(
			"getMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputMethodSubtype::getNameResId()
	{
		return callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	jint InputMethodSubtype::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InputMethodSubtype::isAsciiCapable()
	{
		return callMethod<jboolean>(
			"isAsciiCapable",
			"()Z"
		);
	}
	jboolean InputMethodSubtype::isAuxiliary()
	{
		return callMethod<jboolean>(
			"isAuxiliary",
			"()Z"
		);
	}
	jboolean InputMethodSubtype::overridesImplicitlyEnabledSubtype()
	{
		return callMethod<jboolean>(
			"overridesImplicitlyEnabledSubtype",
			"()Z"
		);
	}
	void InputMethodSubtype::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

