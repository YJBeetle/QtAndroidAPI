#pragma once

#ifndef ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE
#define ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::autofill
{
	class AutofillValue : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject forDate(jlong arg0);
		static QAndroidJniObject forList(jint arg0);
		static QAndroidJniObject forText(jstring arg0);
		static QAndroidJniObject forText(const QString &arg0);
		static QAndroidJniObject forToggle(jboolean arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDateValue();
		jint getListValue();
		jstring getTextValue();
		jboolean getToggleValue();
		jint hashCode();
		jboolean isDate();
		jboolean isList();
		jboolean isText();
		jboolean isToggle();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::autofill

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::autofill
{
	// Fields
	QAndroidJniObject AutofillValue::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AutofillValue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.autofill.AutofillValue",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AutofillValue::forDate(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forDate",
			"(J)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	QAndroidJniObject AutofillValue::forList(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forList",
			"(I)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	QAndroidJniObject AutofillValue::forText(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	QAndroidJniObject AutofillValue::forText(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/autofill/AutofillValue;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AutofillValue::forToggle(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forToggle",
			"(Z)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	jint AutofillValue::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutofillValue::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong AutofillValue::getDateValue()
	{
		return __thiz.callMethod<jlong>(
			"getDateValue",
			"()J"
		);
	}
	jint AutofillValue::getListValue()
	{
		return __thiz.callMethod<jint>(
			"getListValue",
			"()I"
		);
	}
	jstring AutofillValue::getTextValue()
	{
		return __thiz.callObjectMethod(
			"getTextValue",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean AutofillValue::getToggleValue()
	{
		return __thiz.callMethod<jboolean>(
			"getToggleValue",
			"()Z"
		);
	}
	jint AutofillValue::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AutofillValue::isDate()
	{
		return __thiz.callMethod<jboolean>(
			"isDate",
			"()Z"
		);
	}
	jboolean AutofillValue::isList()
	{
		return __thiz.callMethod<jboolean>(
			"isList",
			"()Z"
		);
	}
	jboolean AutofillValue::isText()
	{
		return __thiz.callMethod<jboolean>(
			"isText",
			"()Z"
		);
	}
	jboolean AutofillValue::isToggle()
	{
		return __thiz.callMethod<jboolean>(
			"isToggle",
			"()Z"
		);
	}
	jstring AutofillValue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AutofillValue::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::autofill

namespace android::view::autofill
{
	class AutofillValue : public __jni_impl::android::view::autofill::AutofillValue
	{
	public:
		AutofillValue(QAndroidJniObject obj) { __thiz = obj; }
		AutofillValue()
		{
			__constructor();
		}
	};
} // namespace android::view::autofill

#endif // ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE

