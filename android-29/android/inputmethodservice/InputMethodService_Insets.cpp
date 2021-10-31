#include "../graphics/Region.hpp"
#include "./InputMethodService_Insets.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint InputMethodService_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	jint InputMethodService_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	jint InputMethodService_Insets::TOUCHABLE_INSETS_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService$Insets",
			"TOUCHABLE_INSETS_REGION"
		);
	}
	jint InputMethodService_Insets::TOUCHABLE_INSETS_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
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
	QAndroidJniObject InputMethodService_Insets::touchableRegion()
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
	
	// QAndroidJniObject forward
	InputMethodService_Insets::InputMethodService_Insets(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InputMethodService_Insets::InputMethodService_Insets()
		: __JniBaseClass(
			"android.inputmethodservice.InputMethodService$Insets",
			"()V"
		) {}
	
	// Methods
} // namespace android::inputmethodservice
