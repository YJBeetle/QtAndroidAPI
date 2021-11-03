#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./CheckBoxPreference.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	CheckBoxPreference::CheckBoxPreference(QJniObject obj) : android::preference::TwoStatePreference(obj) {}
	
	// Constructors
	CheckBoxPreference::CheckBoxPreference(android::content::Context arg0)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CheckBoxPreference::CheckBoxPreference(android::content::Context arg0, JObject arg1)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CheckBoxPreference::CheckBoxPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CheckBoxPreference::CheckBoxPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::preference

