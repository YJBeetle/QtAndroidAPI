#include "./GLU.hpp"

namespace android::opengl
{
	// Fields
	
	GLU::GLU(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GLU::GLU()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLU",
			"()V"
		);
	}
	
	// Methods
	jstring GLU::gluErrorString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLU",
			"gluErrorString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void GLU::gluLookAt(__JniBaseClass arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLU",
			"gluLookAt",
			"(Ljavax/microedition/khronos/opengles/GL10;FFFFFFFFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	void GLU::gluOrtho2D(__JniBaseClass arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLU",
			"gluOrtho2D",
			"(Ljavax/microedition/khronos/opengles/GL10;FFFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLU::gluPerspective(__JniBaseClass arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLU",
			"gluPerspective",
			"(Ljavax/microedition/khronos/opengles/GL10;FFFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint GLU::gluProject(jfloat arg0, jfloat arg1, jfloat arg2, jfloatArray arg3, jint arg4, jfloatArray arg5, jint arg6, jintArray arg7, jint arg8, jfloatArray arg9, jint arg10)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLU",
			"gluProject",
			"(FFF[FI[FI[II[FI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		);
	}
	jint GLU::gluUnProject(jfloat arg0, jfloat arg1, jfloat arg2, jfloatArray arg3, jint arg4, jfloatArray arg5, jint arg6, jintArray arg7, jint arg8, jfloatArray arg9, jint arg10)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLU",
			"gluUnProject",
			"(FFF[FI[FI[II[FI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		);
	}
} // namespace android::opengl

