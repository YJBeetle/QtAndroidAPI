#pragma once

#ifndef JAVA_IO_OBJECTSTREAMEXCEPTION
#define JAVA_IO_OBJECTSTREAMEXCEPTION

#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class ObjectStreamException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ObjectStreamException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectStreamException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		ObjectStreamException(QAndroidJniObject obj) { __thiz = obj; }
		ObjectStreamException()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTSTREAMEXCEPTION

