#include "./ETC1Util_ETC1Texture.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/nio/Buffer.hpp"
#include "./ETC1Util.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	ETC1Util::ETC1Util(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ETC1Util::ETC1Util()
		: __JniBaseClass(
			"android.opengl.ETC1Util",
			"()V"
		) {}
	
	// Methods
	android::opengl::ETC1Util_ETC1Texture ETC1Util::compressTexture(java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	android::opengl::ETC1Util_ETC1Texture ETC1Util::createTexture(java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.ETC1Util",
			"createTexture",
			"(Ljava/io/InputStream;)Landroid/opengl/ETC1Util$ETC1Texture;",
			arg0.object()
		);
	}
	jboolean ETC1Util::isETC1Supported()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.ETC1Util",
			"isETC1Supported",
			"()Z"
		);
	}
	void ETC1Util::loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::opengl::ETC1Util_ETC1Texture arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
	void ETC1Util::loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::io::InputStream arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
	void ETC1Util::writeTexture(android::opengl::ETC1Util_ETC1Texture arg0, java::io::OutputStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"writeTexture",
			"(Landroid/opengl/ETC1Util$ETC1Texture;Ljava/io/OutputStream;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::opengl

