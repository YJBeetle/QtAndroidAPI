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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MifareClassic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MifareClassic(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::MifareClassic get(android::nfc::Tag arg0);
		jboolean authenticateSectorWithKeyA(jint arg0, JByteArray arg1) const;
		jboolean authenticateSectorWithKeyB(jint arg0, JByteArray arg1) const;
		jint blockToSector(jint arg0) const;
		void close() const;
		void connect() const;
		void decrement(jint arg0, jint arg1) const;
		jint getBlockCount() const;
		jint getBlockCountInSector(jint arg0) const;
		jint getMaxTransceiveLength() const;
		jint getSectorCount() const;
		jint getSize() const;
		android::nfc::Tag getTag() const;
		jint getTimeout() const;
		jint getType() const;
		void increment(jint arg0, jint arg1) const;
		jboolean isConnected() const;
		JByteArray readBlock(jint arg0) const;
		void restore(jint arg0) const;
		jint sectorToBlock(jint arg0) const;
		void setTimeout(jint arg0) const;
		JByteArray transceive(JByteArray arg0) const;
		void transfer(jint arg0) const;
		void writeBlock(jint arg0, JByteArray arg1) const;
	};
} // namespace android::nfc::tech

