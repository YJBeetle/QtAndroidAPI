#pragma once

#include "./WindowInsets_Type.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint WindowInsets_Type::captionBar()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"captionBar",
			"()I"
		);
	}
	inline jint WindowInsets_Type::displayCutout()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"displayCutout",
			"()I"
		);
	}
	inline jint WindowInsets_Type::ime()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"ime",
			"()I"
		);
	}
	inline jint WindowInsets_Type::mandatorySystemGestures()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"mandatorySystemGestures",
			"()I"
		);
	}
	inline jint WindowInsets_Type::navigationBars()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"navigationBars",
			"()I"
		);
	}
	inline jint WindowInsets_Type::statusBars()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"statusBars",
			"()I"
		);
	}
	inline jint WindowInsets_Type::systemBars()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"systemBars",
			"()I"
		);
	}
	inline jint WindowInsets_Type::systemGestures()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"systemGestures",
			"()I"
		);
	}
	inline jint WindowInsets_Type::tappableElement()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"tappableElement",
			"()I"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
