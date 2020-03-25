#pragma once

#ifndef JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION
#define JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace __jni_impl::java::util::prefs
{
	class BackingStoreException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::prefs


namespace __jni_impl::java::util::prefs
{
	// Fields
	
	// Constructors
	void BackingStoreException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void BackingStoreException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::util::prefs

namespace java::util::prefs
{
	class BackingStoreException : public __jni_impl::java::util::prefs::BackingStoreException
	{
	public:
		BackingStoreException(QAndroidJniObject obj) { __thiz = obj; }
		BackingStoreException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BackingStoreException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::prefs

#endif // JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION

