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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NdefFormatable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NdefFormatable(QAndroidJniObject obj);
		
		// Constructors
		
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

