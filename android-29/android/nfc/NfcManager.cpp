#include "../content/Context.hpp"
#include "./NfcAdapter.hpp"
#include "./NfcManager.hpp"

namespace android::nfc
{
	// Fields
	
	// QAndroidJniObject forward
	NfcManager::NfcManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject NfcManager::getDefaultAdapter()
	{
		return callObjectMethod(
			"getDefaultAdapter",
			"()Landroid/nfc/NfcAdapter;"
		);
	}
} // namespace android::nfc

