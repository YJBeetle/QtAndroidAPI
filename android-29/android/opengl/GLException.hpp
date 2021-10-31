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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		GLException(QAndroidJniObject obj);
		
		// Constructors
		GLException(jint arg0);
		GLException(jint arg0, jstring arg1);
		
		// Methods
	};
} // namespace android::opengl

