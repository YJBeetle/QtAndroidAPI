#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/View.hpp"
#include "../widget/EditText.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./EditTextPreference.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	EditTextPreference::EditTextPreference(QJniObject obj) : android::preference::DialogPreference(obj) {}
	
	// Constructors
	EditTextPreference::EditTextPreference(android::content::Context arg0)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	EditTextPreference::EditTextPreference(android::content::Context arg0, JObject arg1)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	EditTextPreference::EditTextPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	EditTextPreference::EditTextPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::widget::EditText EditTextPreference::getEditText()
	{
		return callObjectMethod(
			"getEditText",
			"()Landroid/widget/EditText;"
		);
	}
	JString EditTextPreference::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	void EditTextPreference::setText(JString arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean EditTextPreference::shouldDisableDependents()
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

