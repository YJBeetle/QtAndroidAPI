#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
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
	jboolean TwoStatePreference::getDisableDependentsState()
	{
		return callMethod<jboolean>(
			"getDisableDependentsState",
			"()Z"
		);
	}
	jstring TwoStatePreference::getSummaryOff()
	{
		return callObjectMethod(
			"getSummaryOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TwoStatePreference::getSummaryOn()
	{
		return callObjectMethod(
			"getSummaryOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean TwoStatePreference::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void TwoStatePreference::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void TwoStatePreference::setDisableDependentsState(jboolean arg0)
	{
		callMethod<void>(
			"setDisableDependentsState",
			"(Z)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(jint arg0)
	{
		callMethod<void>(
			"setSummaryOff",
			"(I)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(jstring arg0)
	{
		callMethod<void>(
			"setSummaryOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOn(jint arg0)
	{
		callMethod<void>(
			"setSummaryOn",
			"(I)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOn(jstring arg0)
	{
		callMethod<void>(
			"setSummaryOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jboolean TwoStatePreference::shouldDisableDependents()
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

