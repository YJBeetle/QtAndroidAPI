#pragma once

#ifndef JAVA_UTIL_ZIP_ZIPERROR
#define JAVA_UTIL_ZIP_ZIPERROR

#include "../../lang/InternalError.hpp"


namespace __jni_impl::java::util::zip
{
	class ZipError : public __jni_impl::java::lang::InternalError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::zip


namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void ZipError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipError : public __jni_impl::java::util::zip::ZipError
	{
	public:
		ZipError(QAndroidJniObject obj) { __thiz = obj; }
		ZipError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_ZIPERROR

