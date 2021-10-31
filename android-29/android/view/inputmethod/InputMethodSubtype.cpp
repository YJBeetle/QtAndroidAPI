#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
#include "./InputMethodSubtype.hpp"

namespace android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputMethodSubtype::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputMethodSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	InputMethodSubtype::InputMethodSubtype(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputMethodSubtype",
			"(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	InputMethodSubtype::InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6, jint arg7)
	{
		__thiz = QAndroidJniObject(
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
		);
	}
	
	// Methods
	jboolean InputMethodSubtype::containsExtraValueKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint InputMethodSubtype::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InputMethodSubtype::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring InputMethodSubtype::getDisplayName(android::content::Context arg0, jstring arg1, android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring InputMethodSubtype::getExtraValue()
	{
		return __thiz.callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getExtraValueOf(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint InputMethodSubtype::getIconResId()
	{
		return __thiz.callMethod<jint>(
			"getIconResId",
			"()I"
		);
	}
	jstring InputMethodSubtype::getLanguageTag()
	{
		return __thiz.callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getMode()
	{
		return __thiz.callObjectMethod(
			"getMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputMethodSubtype::getNameResId()
	{
		return __thiz.callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	jint InputMethodSubtype::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InputMethodSubtype::isAsciiCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isAsciiCapable",
			"()Z"
		);
	}
	jboolean InputMethodSubtype::isAuxiliary()
	{
		return __thiz.callMethod<jboolean>(
			"isAuxiliary",
			"()Z"
		);
	}
	jboolean InputMethodSubtype::overridesImplicitlyEnabledSubtype()
	{
		return __thiz.callMethod<jboolean>(
			"overridesImplicitlyEnabledSubtype",
			"()Z"
		);
	}
	void InputMethodSubtype::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

