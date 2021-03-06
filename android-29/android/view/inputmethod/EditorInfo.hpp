#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_EDITORINFO
#define ANDROID_VIEW_INPUTMETHOD_EDITORINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint IME_ACTION_DONE();
		static jint IME_ACTION_GO();
		static jint IME_ACTION_NEXT();
		static jint IME_ACTION_NONE();
		static jint IME_ACTION_PREVIOUS();
		static jint IME_ACTION_SEARCH();
		static jint IME_ACTION_SEND();
		static jint IME_ACTION_UNSPECIFIED();
		static jint IME_FLAG_FORCE_ASCII();
		static jint IME_FLAG_NAVIGATE_NEXT();
		static jint IME_FLAG_NAVIGATE_PREVIOUS();
		static jint IME_FLAG_NO_ACCESSORY_ACTION();
		static jint IME_FLAG_NO_ENTER_ACTION();
		static jint IME_FLAG_NO_EXTRACT_UI();
		static jint IME_FLAG_NO_FULLSCREEN();
		static jint IME_FLAG_NO_PERSONALIZED_LEARNING();
		static jint IME_MASK_ACTION();
		static jint IME_NULL();
		jint actionId();
		jstring actionLabel();
		jarray contentMimeTypes();
		QAndroidJniObject extras();
		jint fieldId();
		jstring fieldName();
		QAndroidJniObject hintLocales();
		jstring hintText();
		jint imeOptions();
		jint initialCapsMode();
		jint initialSelEnd();
		jint initialSelStart();
		jint inputType();
		jstring label();
		jstring packageName();
		jstring privateImeOptions();
		
		// Constructors
		void __constructor();
		
		// Methods
		void makeCompatible(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject EditorInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.EditorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint EditorInfo::IME_ACTION_DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_DONE"
		);
	}
	jint EditorInfo::IME_ACTION_GO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_GO"
		);
	}
	jint EditorInfo::IME_ACTION_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NEXT"
		);
	}
	jint EditorInfo::IME_ACTION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NONE"
		);
	}
	jint EditorInfo::IME_ACTION_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_PREVIOUS"
		);
	}
	jint EditorInfo::IME_ACTION_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEARCH"
		);
	}
	jint EditorInfo::IME_ACTION_SEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEND"
		);
	}
	jint EditorInfo::IME_ACTION_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_UNSPECIFIED"
		);
	}
	jint EditorInfo::IME_FLAG_FORCE_ASCII()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_FORCE_ASCII"
		);
	}
	jint EditorInfo::IME_FLAG_NAVIGATE_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_NEXT"
		);
	}
	jint EditorInfo::IME_FLAG_NAVIGATE_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_PREVIOUS"
		);
	}
	jint EditorInfo::IME_FLAG_NO_ACCESSORY_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ACCESSORY_ACTION"
		);
	}
	jint EditorInfo::IME_FLAG_NO_ENTER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ENTER_ACTION"
		);
	}
	jint EditorInfo::IME_FLAG_NO_EXTRACT_UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_EXTRACT_UI"
		);
	}
	jint EditorInfo::IME_FLAG_NO_FULLSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_FULLSCREEN"
		);
	}
	jint EditorInfo::IME_FLAG_NO_PERSONALIZED_LEARNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_PERSONALIZED_LEARNING"
		);
	}
	jint EditorInfo::IME_MASK_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_MASK_ACTION"
		);
	}
	jint EditorInfo::IME_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_NULL"
		);
	}
	jint EditorInfo::actionId()
	{
		return __thiz.getField<jint>(
			"actionId"
		);
	}
	jstring EditorInfo::actionLabel()
	{
		return __thiz.getObjectField(
			"actionLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jarray EditorInfo::contentMimeTypes()
	{
		return __thiz.getObjectField(
			"contentMimeTypes",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject EditorInfo::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jint EditorInfo::fieldId()
	{
		return __thiz.getField<jint>(
			"fieldId"
		);
	}
	jstring EditorInfo::fieldName()
	{
		return __thiz.getObjectField(
			"fieldName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject EditorInfo::hintLocales()
	{
		return __thiz.getObjectField(
			"hintLocales",
			"Landroid/os/LocaleList;"
		);
	}
	jstring EditorInfo::hintText()
	{
		return __thiz.getObjectField(
			"hintText",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint EditorInfo::imeOptions()
	{
		return __thiz.getField<jint>(
			"imeOptions"
		);
	}
	jint EditorInfo::initialCapsMode()
	{
		return __thiz.getField<jint>(
			"initialCapsMode"
		);
	}
	jint EditorInfo::initialSelEnd()
	{
		return __thiz.getField<jint>(
			"initialSelEnd"
		);
	}
	jint EditorInfo::initialSelStart()
	{
		return __thiz.getField<jint>(
			"initialSelStart"
		);
	}
	jint EditorInfo::inputType()
	{
		return __thiz.getField<jint>(
			"inputType"
		);
	}
	jstring EditorInfo::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring EditorInfo::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EditorInfo::privateImeOptions()
	{
		return __thiz.getObjectField(
			"privateImeOptions",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void EditorInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.EditorInfo",
			"()V");
	}
	
	// Methods
	void EditorInfo::makeCompatible(jint arg0)
	{
		__thiz.callMethod<void>(
			"makeCompatible",
			"(I)V",
			arg0
		);
	}
	jint EditorInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void EditorInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void EditorInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class EditorInfo : public __jni_impl::android::view::inputmethod::EditorInfo
	{
	public:
		EditorInfo(QAndroidJniObject obj) { __thiz = obj; }
		EditorInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_EDITORINFO

