#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/res/TypedArray.hpp"
#include "../net/Uri.hpp"
#include "./PreferenceManager.hpp"
#include "../../JObject.hpp"
#include "./RingtonePreference.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	RingtonePreference::RingtonePreference(QJniObject obj) : android::preference::Preference(obj) {}
	
	// Constructors
	RingtonePreference::RingtonePreference(android::content::Context arg0)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	RingtonePreference::RingtonePreference(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	RingtonePreference::RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	RingtonePreference::RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint RingtonePreference::getRingtoneType()
	{
		return callMethod<jint>(
			"getRingtoneType",
			"()I"
		);
	}
	jboolean RingtonePreference::getShowDefault()
	{
		return callMethod<jboolean>(
			"getShowDefault",
			"()Z"
		);
	}
	jboolean RingtonePreference::getShowSilent()
	{
		return callMethod<jboolean>(
			"getShowSilent",
			"()Z"
		);
	}
	jboolean RingtonePreference::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2)
	{
		return callMethod<jboolean>(
			"onActivityResult",
			"(IILandroid/content/Intent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RingtonePreference::setRingtoneType(jint arg0)
	{
		callMethod<void>(
			"setRingtoneType",
			"(I)V",
			arg0
		);
	}
	void RingtonePreference::setShowDefault(jboolean arg0)
	{
		callMethod<void>(
			"setShowDefault",
			"(Z)V",
			arg0
		);
	}
	void RingtonePreference::setShowSilent(jboolean arg0)
	{
		callMethod<void>(
			"setShowSilent",
			"(Z)V",
			arg0
		);
	}
} // namespace android::preference

