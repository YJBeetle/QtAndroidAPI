#include "./NfcAdapter.hpp"
#include "./NfcManager.hpp"

namespace android::nfc
{
	// Fields
	
	// Constructors
	
	// Methods
	android::nfc::NfcAdapter NfcManager::getDefaultAdapter() const
	{
		return callObjectMethod(
			"getDefaultAdapter",
			"()Landroid/nfc/NfcAdapter;"
		);
	}
} // namespace android::nfc

