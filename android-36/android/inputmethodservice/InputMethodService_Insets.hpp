#pragma once

#include "../graphics/Region.def.hpp"
#include "./InputMethodService_Insets.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	inline jint InputMethodService_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	inline jint InputMethodService_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	inline jint InputMethodService_Insets::TOUCHABLE_INSETS_REGION()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_REGION"
		);
	}
	inline jint InputMethodService_Insets::TOUCHABLE_INSETS_VISIBLE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_VISIBLE"
		);
	}
	inline jint InputMethodService_Insets::contentTopInsets()
	{
		return getField<jint>(
			"contentTopInsets"
		);
	}
	inline jint InputMethodService_Insets::touchableInsets()
	{
		return getField<jint>(
			"touchableInsets"
		);
	}
	inline android::graphics::Region InputMethodService_Insets::touchableRegion()
	{
		return getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	inline jint InputMethodService_Insets::visibleTopInsets()
	{
		return getField<jint>(
			"visibleTopInsets"
		);
	}
	
	// Constructors
	inline InputMethodService_Insets::InputMethodService_Insets()
		: JObject(
			"android.inputmethodservice.InputMethodService$Insets",
			"()V"
		) {}
	
	// Methods
} // namespace android::inputmethodservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
