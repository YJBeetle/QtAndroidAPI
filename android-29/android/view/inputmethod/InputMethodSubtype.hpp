#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE
#define ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6);
		void __constructor(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6, jint arg7);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring getLocale();
		jstring getDisplayName(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		jboolean isAsciiCapable();
		jboolean isAuxiliary();
		jboolean overridesImplicitlyEnabledSubtype();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getNameResId();
		jstring getLanguageTag();
		jstring getExtraValue();
		jboolean containsExtraValueKey(jstring arg0);
		jstring getExtraValueOf(jstring arg0);
		jint getIconResId();
		jstring getMode();
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
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
	
	// Constructors
	void InputMethodSubtype::__constructor(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6)
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
			arg6);
	}
	void InputMethodSubtype::__constructor(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6, jint arg7)
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
			arg7);
	}
	
	// Methods
	jboolean InputMethodSubtype::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint InputMethodSubtype::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InputMethodSubtype::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodSubtype::getDisplayName(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
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
	jint InputMethodSubtype::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void InputMethodSubtype::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint InputMethodSubtype::getNameResId()
	{
		return __thiz.callMethod<jint>(
			"getNameResId",
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
	jstring InputMethodSubtype::getExtraValue()
	{
		return __thiz.callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InputMethodSubtype::containsExtraValueKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
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
	jstring InputMethodSubtype::getMode()
	{
		return __thiz.callObjectMethod(
			"getMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputMethodSubtype : public __jni_impl::android::view::inputmethod::InputMethodSubtype
	{
	public:
		InputMethodSubtype(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6, jint arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE

