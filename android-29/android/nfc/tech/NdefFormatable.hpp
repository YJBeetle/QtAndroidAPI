#pragma once

#ifndef ANDROID_NFC_TECH_NDEFFORMATABLE
#define ANDROID_NFC_TECH_NDEFFORMATABLE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class NdefMessage;
}
namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class NdefFormatable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void close();
		void connect();
		void format(__jni_impl::android::nfc::NdefMessage arg0);
		void formatReadOnly(__jni_impl::android::nfc::NdefMessage arg0);
		QAndroidJniObject getTag();
		jboolean isConnected();
	};
} // namespace __jni_impl::android::nfc::tech

#include "../NdefMessage.hpp"
#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	
	// Constructors
	void NdefFormatable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.NdefFormatable",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NdefFormatable::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NdefFormatable",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NdefFormatable;",
			arg0.__jniObject().object()
		);
	}
	void NdefFormatable::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NdefFormatable::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void NdefFormatable::format(__jni_impl::android::nfc::NdefMessage arg0)
	{
		__thiz.callMethod<void>(
			"format",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object()
		);
	}
	void NdefFormatable::formatReadOnly(__jni_impl::android::nfc::NdefMessage arg0)
	{
		__thiz.callMethod<void>(
			"formatReadOnly",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NdefFormatable::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NdefFormatable::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class NdefFormatable : public __jni_impl::android::nfc::tech::NdefFormatable
	{
	public:
		NdefFormatable(QAndroidJniObject obj) { __thiz = obj; }
		NdefFormatable()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_NDEFFORMATABLE

