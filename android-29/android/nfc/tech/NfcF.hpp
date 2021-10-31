#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcF : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcF(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcF(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getManufacturer();
		jint getMaxTransceiveLength();
		jbyteArray getSystemCode();
		QAndroidJniObject getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

