#include "../graphics/Region.hpp"
#include "./InputMethodService_Insets.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint InputMethodService_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	jint InputMethodService_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	jint InputMethodService_Insets::TOUCHABLE_INSETS_REGION()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_REGION"
		);
	}
	jint InputMethodService_Insets::TOUCHABLE_INSETS_VISIBLE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_VISIBLE"
		);
	}
	jint InputMethodService_Insets::contentTopInsets()
	{
		return getField<jint>(
			"contentTopInsets"
		);
	}
	jint InputMethodService_Insets::touchableInsets()
	{
		return getField<jint>(
			"touchableInsets"
		);
	}
	android::graphics::Region InputMethodService_Insets::touchableRegion()
	{
		return getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	jint InputMethodService_Insets::visibleTopInsets()
	{
		return getField<jint>(
			"visibleTopInsets"
		);
	}
	
	// QJniObject forward
	InputMethodService_Insets::InputMethodService_Insets(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InputMethodService_Insets::InputMethodService_Insets()
		: __JniBaseClass(
			"android.inputmethodservice.InputMethodService$Insets",
			"()V"
		) {}
	
	// Methods
} // namespace android::inputmethodservice

