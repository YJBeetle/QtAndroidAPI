#include "../../java/nio/IntBuffer.hpp"
#include "./GLES10Ext.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	GLES10Ext::GLES10Ext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GLES10Ext::GLES10Ext()
		: __JniBaseClass(
			"android.opengl.GLES10Ext",
			"()V"
		) {}
	
	// Methods
	jint GLES10Ext::glQueryMatrixxOES(java::nio::IntBuffer arg0, java::nio::IntBuffer arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint GLES10Ext::glQueryMatrixxOES(jintArray arg0, jint arg1, jintArray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"([II[II)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::opengl

