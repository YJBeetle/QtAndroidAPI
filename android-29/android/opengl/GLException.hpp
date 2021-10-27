#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::opengl
{
	class GLException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		GLException(QAndroidJniObject obj);
		// Constructors
		GLException(jint &arg0);
		GLException(jint &arg0, jstring &arg1);
		GLException(jint &arg0, const QString &arg1);
		GLException() = default;
		
		// Methods
	};
} // namespace android::opengl

