#include "../content/Context.hpp"
#include "./Preference.hpp"
#include "./PreferenceCategory.hpp"

namespace android::preference
{
	// Fields
	
	// QAndroidJniObject forward
	PreferenceCategory::PreferenceCategory(QAndroidJniObject obj) : android::preference::PreferenceGroup(obj) {}
	
	// Constructors
	PreferenceCategory::PreferenceCategory(android::content::Context arg0)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	PreferenceCategory::PreferenceCategory(android::content::Context arg0, JObject arg1)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	PreferenceCategory::PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	PreferenceCategory::PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean PreferenceCategory::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean PreferenceCategory::shouldDisableDependents()
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

