#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class OptionalDataException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		jboolean eof();
		jint length();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	jboolean OptionalDataException::eof()
	{
		return __thiz.getField<jboolean>(
			"eof"
		);
	}
	jint OptionalDataException::length()
	{
		return __thiz.getField<jint>(
			"length"
		);
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

