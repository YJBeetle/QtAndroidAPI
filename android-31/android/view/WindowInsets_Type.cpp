#include "./WindowInsets_Type.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	jint WindowInsets_Type::captionBar()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"captionBar",
			"()I"
		);
	}
	jint WindowInsets_Type::displayCutout()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"displayCutout",
			"()I"
		);
	}
	jint WindowInsets_Type::ime()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"ime",
			"()I"
		);
	}
	jint WindowInsets_Type::mandatorySystemGestures()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"mandatorySystemGestures",
			"()I"
		);
	}
	jint WindowInsets_Type::navigationBars()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"navigationBars",
			"()I"
		);
	}
	jint WindowInsets_Type::statusBars()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"statusBars",
			"()I"
		);
	}
	jint WindowInsets_Type::systemBars()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"systemBars",
			"()I"
		);
	}
	jint WindowInsets_Type::systemGestures()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"systemGestures",
			"()I"
		);
	}
	jint WindowInsets_Type::tappableElement()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Type",
			"tappableElement",
			"()I"
		);
	}
} // namespace android::view

