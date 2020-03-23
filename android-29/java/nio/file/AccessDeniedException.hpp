#pragma once

#ifndef JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION
#define JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION

#include "FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class AccessDeniedException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void AccessDeniedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void AccessDeniedException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class AccessDeniedException : public __jni_impl::java::nio::file::AccessDeniedException
	{
	public:
		AccessDeniedException(QAndroidJniObject obj) { __thiz = obj; }
		AccessDeniedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AccessDeniedException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION

