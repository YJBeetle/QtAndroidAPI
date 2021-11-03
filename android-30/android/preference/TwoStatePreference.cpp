#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./TwoStatePreference.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	TwoStatePreference::TwoStatePreference(QJniObject obj) : android::preference::Preference(obj) {}
	
	// Constructors
	TwoStatePreference::TwoStatePreference(android::content::Context arg0)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TwoStatePreference::TwoStatePreference(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TwoStatePreference::TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TwoStatePreference::TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean TwoStatePreference::getDisableDependentsState() const
	{
		return callMethod<jboolean>(
			"getDisableDependentsState",
			"()Z"
		);
	}
	JString TwoStatePreference::getSummaryOff() const
	{
		return callObjectMethod(
			"getSummaryOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString TwoStatePreference::getSummaryOn() const
	{
		return callObjectMethod(
			"getSummaryOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean TwoStatePreference::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void TwoStatePreference::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void TwoStatePreference::setDisableDependentsState(jboolean arg0) const
	{
		callMethod<void>(
			"setDisableDependentsState",
			"(Z)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(jint arg0) const
	{
		callMethod<void>(
			"setSummaryOff",
			"(I)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(JString arg0) const
	{
		callMethod<void>(
			"setSummaryOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TwoStatePreference::setSummaryOn(jint arg0) const
	{
		callMethod<void>(
			"setSummaryOn",
			"(I)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOn(JString arg0) const
	{
		callMethod<void>(
			"setSummaryOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	jboolean TwoStatePreference::shouldDisableDependents() const
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

