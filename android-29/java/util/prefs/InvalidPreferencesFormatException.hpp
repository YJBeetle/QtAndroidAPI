#pragma once

#ifndef JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION
#define JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace __jni_impl::java::util::prefs
{
	class InvalidPreferencesFormatException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::util::prefs


namespace __jni_impl::java::util::prefs
{
	// Fields
	
	// Constructors
	void InvalidPreferencesFormatException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void InvalidPreferencesFormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InvalidPreferencesFormatException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::util::prefs

namespace java::util::prefs
{
	class InvalidPreferencesFormatException : public __jni_impl::java::util::prefs::InvalidPreferencesFormatException
	{
	public:
		InvalidPreferencesFormatException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidPreferencesFormatException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InvalidPreferencesFormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidPreferencesFormatException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::prefs

#endif // JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION

