#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc
{
	class NfcManager : public __JniBaseClass
	{
	public:
		// Fields
		
		NfcManager(QAndroidJniObject obj);
		// Constructors
		NfcManager() = default;
		
		// Methods
		QAndroidJniObject getDefaultAdapter();
	};
} // namespace android::nfc

