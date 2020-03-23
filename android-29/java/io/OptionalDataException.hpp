#pragma once

#ifndef JAVA_IO_OPTIONALDATAEXCEPTION
#define JAVA_IO_OPTIONALDATAEXCEPTION

#include "ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class OptionalDataException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		jint length();
		jboolean eof();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	jint OptionalDataException::length()
	{
		return __thiz.getField<jint>(
			"length");
	}
	jboolean OptionalDataException::eof()
	{
		return __thiz.getField<jboolean>(
			"eof");
	}
	
	// Constructors
	void OptionalDataException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.OptionalDataException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class OptionalDataException : public __jni_impl::java::io::OptionalDataException
	{
	public:
		OptionalDataException(QAndroidJniObject obj) { __thiz = obj; }
		OptionalDataException()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_OPTIONALDATAEXCEPTION

