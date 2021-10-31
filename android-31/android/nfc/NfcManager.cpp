#include "./NfcAdapter.hpp"
#include "./NfcManager.hpp"

namespace android::nfc
{
	// Fields
	
	// QJniObject forward
	NfcManager::NfcManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::NfcAdapter NfcManager::getDefaultAdapter()
	{
		return callObjectMethod(
			"getDefaultAdapter",
			"()Landroid/nfc/NfcAdapter;"
		);
	}
} // namespace android::nfc

