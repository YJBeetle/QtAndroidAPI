#pragma once

#include "../../java/nio/Buffer.def.hpp"
#include "./ETC1.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint ETC1::DECODED_BLOCK_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.ETC1",
			"DECODED_BLOCK_SIZE"
		);
	}
	inline jint ETC1::ENCODED_BLOCK_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.ETC1",
			"ENCODED_BLOCK_SIZE"
		);
	}
	inline jint ETC1::ETC1_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.ETC1",
			"ETC1_RGB8_OES"
		);
	}
	inline jint ETC1::ETC_PKM_HEADER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.ETC1",
			"ETC_PKM_HEADER_SIZE"
		);
	}
	
	// Constructors
	inline ETC1::ETC1()
		: JObject(
			"android.opengl.ETC1",
			"()V"
		) {}
	
	// Methods
	inline void ETC1::decodeBlock(java::nio::Buffer arg0, java::nio::Buffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1",
			"decodeBlock",
			"(Ljava/nio/Buffer;Ljava/nio/Buffer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ETC1::decodeImage(java::nio::Buffer arg0, java::nio::Buffer arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1",
			"decodeImage",
			"(Ljava/nio/Buffer;Ljava/nio/Buffer;IIII)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void ETC1::encodeBlock(java::nio::Buffer arg0, jint arg1, java::nio::Buffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1",
			"encodeBlock",
			"(Ljava/nio/Buffer;ILjava/nio/Buffer;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void ETC1::encodeImage(java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1",
			"encodeImage",
			"(Ljava/nio/Buffer;IIIILjava/nio/Buffer;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline void ETC1::formatHeader(java::nio::Buffer arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1",
			"formatHeader",
			"(Ljava/nio/Buffer;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jint ETC1::getEncodedDataSize(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.ETC1",
			"getEncodedDataSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint ETC1::getHeight(java::nio::Buffer arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.ETC1",
			"getHeight",
			"(Ljava/nio/Buffer;)I",
			arg0.object()
		);
	}
	inline jint ETC1::getWidth(java::nio::Buffer arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.ETC1",
			"getWidth",
			"(Ljava/nio/Buffer;)I",
			arg0.object()
		);
	}
	inline jboolean ETC1::isValid(java::nio::Buffer arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.ETC1",
			"isValid",
			"(Ljava/nio/Buffer;)Z",
			arg0.object()
		);
	}
} // namespace android::opengl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
