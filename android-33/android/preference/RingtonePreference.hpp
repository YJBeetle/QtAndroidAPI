#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../net/Uri.def.hpp"
#include "./PreferenceManager.def.hpp"
#include "../../JObject.hpp"
#include "./RingtonePreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline RingtonePreference::RingtonePreference(android::content::Context arg0)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline RingtonePreference::RingtonePreference(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RingtonePreference::RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline RingtonePreference::RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint RingtonePreference::getRingtoneType() const
	{
		return callMethod<jint>(
			"getRingtoneType",
			"()I"
		);
	}
	inline jboolean RingtonePreference::getShowDefault() const
	{
		return callMethod<jboolean>(
			"getShowDefault",
			"()Z"
		);
	}
	inline jboolean RingtonePreference::getShowSilent() const
	{
		return callMethod<jboolean>(
			"getShowSilent",
			"()Z"
		);
	}
	inline jboolean RingtonePreference::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const
	{
		return callMethod<jboolean>(
			"onActivityResult",
			"(IILandroid/content/Intent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void RingtonePreference::setRingtoneType(jint arg0) const
	{
		callMethod<void>(
			"setRingtoneType",
			"(I)V",
			arg0
		);
	}
	inline void RingtonePreference::setShowDefault(jboolean arg0) const
	{
		callMethod<void>(
			"setShowDefault",
			"(Z)V",
			arg0
		);
	}
	inline void RingtonePreference::setShowSilent(jboolean arg0) const
	{
		callMethod<void>(
			"setShowSilent",
			"(Z)V",
			arg0
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
