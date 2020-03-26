#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION
#define JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Exception.hpp"
#include "../../../io/IOException.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class UserPrincipalNotFoundException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jstring getName();
	};
} // namespace __jni_impl::java::nio::file::attribute


namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void UserPrincipalNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.UserPrincipalNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jstring UserPrincipalNotFoundException::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class UserPrincipalNotFoundException : public __jni_impl::java::nio::file::attribute::UserPrincipalNotFoundException
	{
	public:
		UserPrincipalNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		UserPrincipalNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION

