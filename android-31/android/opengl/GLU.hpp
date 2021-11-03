#pragma once

#include "../../JObject.hpp"


namespace android::opengl
{
	class GLU : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GLU(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GLU(QJniObject obj);
		
		// Constructors
		GLU();
		
		// Methods
		static jstring gluErrorString(jint arg0);
		static void gluLookAt(JObject arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9);
		static void gluOrtho2D(JObject arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void gluPerspective(JObject arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static jint gluProject(jfloat arg0, jfloat arg1, jfloat arg2, jfloatArray arg3, jint arg4, jfloatArray arg5, jint arg6, jintArray arg7, jint arg8, jfloatArray arg9, jint arg10);
		static jint gluUnProject(jfloat arg0, jfloat arg1, jfloat arg2, jfloatArray arg3, jint arg4, jfloatArray arg5, jint arg6, jintArray arg7, jint arg8, jfloatArray arg9, jint arg10);
	};
} // namespace android::opengl

