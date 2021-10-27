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
		return __thiz.getField<jint>(
			"contentTopInsets"
		);
	}
	jint InputMethodService_Insets::touchableInsets()
	{
		return __thiz.getField<jint>(
			"touchableInsets"
		);
	}
	QAndroidJniObject InputMethodService_Insets::touchableRegion()
	{
		return __thiz.getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	jint InputMethodService_Insets::visibleTopInsets()
	{
		return __thiz.getField<jint>(
			"visibleTopInsets"
		);
	}
	
	InputMethodService_Insets::InputMethodService_Insets(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputMethodService_Insets::InputMethodService_Insets()
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService$Insets",
			"()V"
		);
	}
	
	// Methods
} // namespace android::inputmethodservice

