#pragma once

#include "./ETC1Util_ETC1Texture.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../java/nio/Buffer.def.hpp"
#include "./ETC1Util.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	inline ETC1Util::ETC1Util()
		: JObject(
			"android.opengl.ETC1Util",
			"()V"
		) {}
	
	// Methods
	inline android::opengl::ETC1Util_ETC1Texture ETC1Util::compressTexture(java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.ETC1Util",
			"compressTexture",
			"(Ljava/nio/Buffer;IIII)Landroid/opengl/ETC1Util$ETC1Texture;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline android::opengl::ETC1Util_ETC1Texture ETC1Util::createTexture(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.ETC1Util",
			"createTexture",
			"(Ljava/io/InputStream;)Landroid/opengl/ETC1Util$ETC1Texture;",
			arg0.object()
		);
	}
	inline jboolean ETC1Util::isETC1Supported()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.ETC1Util",
			"isETC1Supported",
			"()Z"
		);
	}
	inline void ETC1Util::loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::opengl::ETC1Util_ETC1Texture arg5)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"loadTexture",
			"(IIIIILandroid/opengl/ETC1Util$ETC1Texture;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline void ETC1Util::loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::io::InputStream arg5)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"loadTexture",
			"(IIIIILjava/io/InputStream;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline void ETC1Util::writeTexture(android::opengl::ETC1Util_ETC1Texture arg0, java::io::OutputStream arg1)
	{
		callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"writeTexture",
			"(Landroid/opengl/ETC1Util$ETC1Texture;Ljava/io/OutputStream;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::opengl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
