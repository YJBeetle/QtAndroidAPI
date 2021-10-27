#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class NdefMessage;
}
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NdefFormatable : public __JniBaseClass
	{
	public:
		// Fields
		
		NdefFormatable(QAndroidJniObject obj);
		// Constructors
		NdefFormatable() = default;
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		void format(android::nfc::NdefMessage arg0);
		void formatReadOnly(android::nfc::NdefMessage arg0);
		QAndroidJniObject getTag();
		jboolean isConnected();
	};
} // namespace android::nfc::tech

