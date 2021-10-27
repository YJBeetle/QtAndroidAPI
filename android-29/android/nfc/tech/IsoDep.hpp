#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class IsoDep : public __JniBaseClass
	{
	public:
		// Fields
		
		IsoDep(QAndroidJniObject obj);
		// Constructors
		IsoDep() = default;
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getHiLayerResponse();
		jbyteArray getHistoricalBytes();
		jint getMaxTransceiveLength();
		QAndroidJniObject getTag();
		jint getTimeout();
		jboolean isConnected();
		jboolean isExtendedLengthApduSupported();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

