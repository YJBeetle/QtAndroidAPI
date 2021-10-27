#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::nfc
{
	class NfcAdapter;
}

namespace __jni_impl::android::nfc
{
	class NfcManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDefaultAdapter();
	};
} // namespace __jni_impl::android::nfc

#include "../content/Context.hpp"
#include "./NfcAdapter.hpp"

namespace __jni_impl::android::nfc
{
	// Fields
	
	// Constructors
	void NfcManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NfcManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcManager::getDefaultAdapter()
	{
		return __thiz.callObjectMethod(
			"getDefaultAdapter",
			"()Landroid/nfc/NfcAdapter;"
		);
	}
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class NfcManager : public __jni_impl::android::nfc::NfcManager
	{
	public:
		NfcManager(QAndroidJniObject obj) { __thiz = obj; }
		NfcManager()
		{
			__constructor();
		}
	};
} // namespace android::nfc

