#pragma once

#include "./SoundEffectConstants.def.hpp"

namespace android::view
{
	// Fields
	inline jint SoundEffectConstants::CLICK()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"CLICK"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_DOWN()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_DOWN"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_LEFT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_LEFT"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_REPEAT_DOWN()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_DOWN"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_REPEAT_LEFT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_LEFT"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_REPEAT_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_RIGHT"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_REPEAT_UP()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_UP"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_RIGHT"
		);
	}
	inline jint SoundEffectConstants::NAVIGATION_UP()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_UP"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SoundEffectConstants::getConstantForFocusDirection(jint arg0, jboolean arg1)
	{
		return callStaticMethod<jint>(
			"android.view.SoundEffectConstants",
			"getConstantForFocusDirection",
			"(IZ)I",
			arg0,
			arg1
		);
	}
	inline jint SoundEffectConstants::getContantForFocusDirection(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.view.SoundEffectConstants",
			"getContantForFocusDirection",
			"(I)I",
			arg0
		);
	}
} // namespace android::view

// Base class headers

