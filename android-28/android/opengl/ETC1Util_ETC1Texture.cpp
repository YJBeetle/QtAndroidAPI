#include "../../java/nio/ByteBuffer.hpp"
#include "./ETC1Util_ETC1Texture.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	ETC1Util_ETC1Texture::ETC1Util_ETC1Texture(jint arg0, jint arg1, java::nio::ByteBuffer arg2)
		: JObject(
			"android.opengl.ETC1Util$ETC1Texture",
			"(IILjava/nio/ByteBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	java::nio::ByteBuffer ETC1Util_ETC1Texture::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ETC1Util_ETC1Texture::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ETC1Util_ETC1Texture::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::opengl

