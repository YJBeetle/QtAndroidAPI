#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class Buffer;
}

namespace android::opengl
{
	class ETC1 : public __JniBaseClass
	{
	public:
		// Fields
		static jint DECODED_BLOCK_SIZE();
		static jint ENCODED_BLOCK_SIZE();
		static jint ETC1_RGB8_OES();
		static jint ETC_PKM_HEADER_SIZE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ETC1(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ETC1(QJniObject obj);
		
		// Constructors
		ETC1();
		
		// Methods
		static void decodeBlock(java::nio::Buffer arg0, java::nio::Buffer arg1);
		static void decodeImage(java::nio::Buffer arg0, java::nio::Buffer arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void encodeBlock(java::nio::Buffer arg0, jint arg1, java::nio::Buffer arg2);
		static void encodeImage(java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5);
		static void formatHeader(java::nio::Buffer arg0, jint arg1, jint arg2);
		static jint getEncodedDataSize(jint arg0, jint arg1);
		static jint getHeight(java::nio::Buffer arg0);
		static jint getWidth(java::nio::Buffer arg0);
		static jboolean isValid(java::nio::Buffer arg0);
	};
} // namespace android::opengl

