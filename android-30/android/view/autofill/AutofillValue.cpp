#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AutofillValue.hpp"

namespace android::view::autofill
{
	// Fields
	JObject AutofillValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AutofillValue::AutofillValue(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::autofill::AutofillValue AutofillValue::forDate(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forDate",
			"(J)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	android::view::autofill::AutofillValue AutofillValue::forList(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forList",
			"(I)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	android::view::autofill::AutofillValue AutofillValue::forText(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/autofill/AutofillValue;",
			arg0.object<jstring>()
		);
	}
	android::view::autofill::AutofillValue AutofillValue::forToggle(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forToggle",
			"(Z)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	jint AutofillValue::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutofillValue::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong AutofillValue::getDateValue()
	{
		return callMethod<jlong>(
			"getDateValue",
			"()J"
		);
	}
	jint AutofillValue::getListValue()
	{
		return callMethod<jint>(
			"getListValue",
			"()I"
		);
	}
	JString AutofillValue::getTextValue()
	{
		return callObjectMethod(
			"getTextValue",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean AutofillValue::getToggleValue()
	{
		return callMethod<jboolean>(
			"getToggleValue",
			"()Z"
		);
	}
	jint AutofillValue::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AutofillValue::isDate()
	{
		return callMethod<jboolean>(
			"isDate",
			"()Z"
		);
	}
	jboolean AutofillValue::isList()
	{
		return callMethod<jboolean>(
			"isList",
			"()Z"
		);
	}
	jboolean AutofillValue::isText()
	{
		return callMethod<jboolean>(
			"isText",
			"()Z"
		);
	}
	jboolean AutofillValue::isToggle()
	{
		return callMethod<jboolean>(
			"isToggle",
			"()Z"
		);
	}
	JString AutofillValue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AutofillValue::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::autofill

