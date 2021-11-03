#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

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
		GLException(jint arg0, JString arg1);
		
		// Methods
	};
} // namespace android::opengl

