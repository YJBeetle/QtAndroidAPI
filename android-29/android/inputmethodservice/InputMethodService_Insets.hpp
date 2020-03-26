#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INSETS
#define ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INSETS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Region;
}

namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService_Insets : public __JniBaseClass
	{
	public:
		// Fields
		static jint TOUCHABLE_INSETS_CONTENT();
		static jint TOUCHABLE_INSETS_FRAME();
		static jint TOUCHABLE_INSETS_REGION();
		static jint TOUCHABLE_INSETS_VISIBLE();
		jint contentTopInsets();
		jint touchableInsets();
		QAndroidJniObject touchableRegion();
		jint visibleTopInsets();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../graphics/Region.hpp"

namespace __jni_impl::android::inputmethodservice
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
	
	// Constructors
	void InputMethodService_Insets::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService$Insets",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class InputMethodService_Insets : public __jni_impl::android::inputmethodservice::InputMethodService_Insets
	{
	public:
		InputMethodService_Insets(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodService_Insets()
		{
			__constructor();
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INSETS

