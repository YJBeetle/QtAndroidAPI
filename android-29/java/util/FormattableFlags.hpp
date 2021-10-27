#pragma once

#ifndef JAVA_UTIL_FORMATTABLEFLAGS
#define JAVA_UTIL_FORMATTABLEFLAGS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class FormattableFlags : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALTERNATE();
		static jint LEFT_JUSTIFY();
		static jint UPPERCASE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	jint FormattableFlags::ALTERNATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.FormattableFlags",
			"ALTERNATE"
		);
	}
	jint FormattableFlags::LEFT_JUSTIFY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.FormattableFlags",
			"LEFT_JUSTIFY"
		);
	}
	jint FormattableFlags::UPPERCASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.FormattableFlags",
			"UPPERCASE"
		);
	}
	
	// Constructors
	void FormattableFlags::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.FormattableFlags",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class FormattableFlags : public __jni_impl::java::util::FormattableFlags
	{
	public:
		FormattableFlags(QAndroidJniObject obj) { __thiz = obj; }
		FormattableFlags()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_FORMATTABLEFLAGS

