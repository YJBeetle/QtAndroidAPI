#pragma once

#ifndef JAVA_NIO_FILE_ATOMICMOVENOTSUPPORTEDEXCEPTION
#define JAVA_NIO_FILE_ATOMICMOVENOTSUPPORTEDEXCEPTION

#include "FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class AtomicMoveNotSupportedException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void AtomicMoveNotSupportedException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AtomicMoveNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class AtomicMoveNotSupportedException : public __jni_impl::java::nio::file::AtomicMoveNotSupportedException
	{
	public:
		AtomicMoveNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
		AtomicMoveNotSupportedException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_ATOMICMOVENOTSUPPORTEDEXCEPTION

