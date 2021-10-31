#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class Writer;
}

namespace android::opengl
{
	class GLDebugHelper : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONFIG_CHECK_GL_ERROR();
		static jint CONFIG_CHECK_THREAD();
		static jint CONFIG_LOG_ARGUMENT_NAMES();
		static jint ERROR_WRONG_THREAD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLDebugHelper(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GLDebugHelper(QAndroidJniObject obj);
		
		// Constructors
		GLDebugHelper();
		
		// Methods
		static QAndroidJniObject wrap(__JniBaseClass arg0, jint arg1, java::io::Writer arg2);
	};
} // namespace android::opengl

