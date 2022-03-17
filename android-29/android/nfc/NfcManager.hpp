#pragma once

#include "../content/Context.def.hpp"
#include "./NfcAdapter.def.hpp"
#include "./NfcManager.def.hpp"

namespace android::nfc
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::NfcAdapter NfcManager::getDefaultAdapter() const
	{
		return callObjectMethod(
			"getDefaultAdapter",
			"()Landroid/nfc/NfcAdapter;"
		);
	}
} // namespace android::nfc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
