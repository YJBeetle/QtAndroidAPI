#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "./Preference.hpp"
#include "../../JString.hpp"
#include "./PreferenceGroup.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	PreferenceGroup::PreferenceGroup(QJniObject obj) : android::preference::Preference(obj) {}
	
	// Constructors
	PreferenceGroup::PreferenceGroup(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	PreferenceGroup::PreferenceGroup(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	PreferenceGroup::PreferenceGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void PreferenceGroup::addItemFromInflater(android::preference::Preference arg0) const
	{
		callMethod<void>(
			"addItemFromInflater",
			"(Landroid/preference/Preference;)V",
			arg0.object()
		);
	}
	jboolean PreferenceGroup::addPreference(android::preference::Preference arg0) const
	{
		return callMethod<jboolean>(
			"addPreference",
			"(Landroid/preference/Preference;)Z",
			arg0.object()
		);
	}
	android::preference::Preference PreferenceGroup::findPreference(JString arg0) const
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0.object<jstring>()
		);
	}
	android::preference::Preference PreferenceGroup::getPreference(jint arg0) const
	{
		return callObjectMethod(
			"getPreference",
			"(I)Landroid/preference/Preference;",
			arg0
		);
	}
	jint PreferenceGroup::getPreferenceCount() const
	{
		return callMethod<jint>(
			"getPreferenceCount",
			"()I"
		);
	}
	jboolean PreferenceGroup::isOrderingAsAdded() const
	{
		return callMethod<jboolean>(
			"isOrderingAsAdded",
			"()Z"
		);
	}
	void PreferenceGroup::notifyDependencyChange(jboolean arg0) const
	{
		callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0
		);
	}
	void PreferenceGroup::removeAll() const
	{
		callMethod<void>(
			"removeAll",
			"()V"
		);
	}
	jboolean PreferenceGroup::removePreference(android::preference::Preference arg0) const
	{
		return callMethod<jboolean>(
			"removePreference",
			"(Landroid/preference/Preference;)Z",
			arg0.object()
		);
	}
	void PreferenceGroup::setOrderingAsAdded(jboolean arg0) const
	{
		callMethod<void>(
			"setOrderingAsAdded",
			"(Z)V",
			arg0
		);
	}
} // namespace android::preference

