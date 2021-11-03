#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./SwitchPreference.hpp"

namespace android::preference
{
	// Fields
	
	// QAndroidJniObject forward
	SwitchPreference::SwitchPreference(QAndroidJniObject obj) : android::preference::TwoStatePreference(obj) {}
	
	// Constructors
	SwitchPreference::SwitchPreference(android::content::Context arg0)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SwitchPreference::SwitchPreference(android::content::Context arg0, JObject arg1)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SwitchPreference::SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SwitchPreference::SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jstring SwitchPreference::getSwitchTextOff()
	{
		return callObjectMethod(
			"getSwitchTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SwitchPreference::getSwitchTextOn()
	{
		return callObjectMethod(
			"getSwitchTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void SwitchPreference::setSwitchTextOff(jint arg0)
	{
		callMethod<void>(
			"setSwitchTextOff",
			"(I)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOff(jstring arg0)
	{
		callMethod<void>(
			"setSwitchTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOn(jint arg0)
	{
		callMethod<void>(
			"setSwitchTextOn",
			"(I)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOn(jstring arg0)
	{
		callMethod<void>(
			"setSwitchTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::preference

