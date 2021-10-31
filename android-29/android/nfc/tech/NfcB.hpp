#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcB : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcB(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcB(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getApplicationData();
		jint getMaxTransceiveLength();
		jbyteArray getProtocolInfo();
		QAndroidJniObject getTag();
		jboolean isConnected();
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

