#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"
#include "./NumberKeyListener.hpp"

namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::text::method
{
	class DialerKeyListener : public __jni_impl::android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static jcharArray CHARACTERS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		jint getInputType();
	};
} // namespace __jni_impl::android::text::method

#include "../../view/KeyEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	jcharArray DialerKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DialerKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	// Constructors
	void DialerKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DialerKeyListener",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DialerKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DialerKeyListener",
			"getInstance",
			"()Landroid/text/method/DialerKeyListener;"
		);
	}
	jint DialerKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class DialerKeyListener : public __jni_impl::android::text::method::DialerKeyListener
	{
	public:
		DialerKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		DialerKeyListener()
		{
			__constructor();
		}
	};
} // namespace android::text::method

