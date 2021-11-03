#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class MifareClassic : public JObject
	{
	public:
		// Fields
		static jint BLOCK_SIZE();
		static JByteArray KEY_DEFAULT();
		static JByteArray KEY_MIFARE_APPLICATION_DIRECTORY();
		static JByteArray KEY_NFC_FORUM();
		static jint SIZE_1K();
		static jint SIZE_2K();
		static jint SIZE_4K();
		static jint SIZE_MINI();
		static jint TYPE_CLASSIC();
		static jint TYPE_PLUS();
		static jint TYPE_PRO();
		static jint TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MifareClassic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MifareClassic(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::MifareClassic get(android::nfc::Tag arg0);
		jboolean authenticateSectorWithKeyA(jint arg0, JByteArray arg1);
		jboolean authenticateSectorWithKeyB(jint arg0, JByteArray arg1);
		jint blockToSector(jint arg0);
		void close();
		void connect();
		void decrement(jint arg0, jint arg1);
		jint getBlockCount();
		jint getBlockCountInSector(jint arg0);
		jint getMaxTransceiveLength();
		jint getSectorCount();
		jint getSize();
		android::nfc::Tag getTag();
		jint getTimeout();
		jint getType();
		void increment(jint arg0, jint arg1);
		jboolean isConnected();
		JByteArray readBlock(jint arg0);
		void restore(jint arg0);
		jint sectorToBlock(jint arg0);
		void setTimeout(jint arg0);
		JByteArray transceive(JByteArray arg0);
		void transfer(jint arg0);
		void writeBlock(jint arg0, JByteArray arg1);
	};
} // namespace android::nfc::tech

