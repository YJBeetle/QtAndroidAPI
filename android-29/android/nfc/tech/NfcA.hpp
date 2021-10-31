#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcA : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcA(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcA(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getAtqa();
		jint getMaxTransceiveLength();
		jshort getSak();
		QAndroidJniObject getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

