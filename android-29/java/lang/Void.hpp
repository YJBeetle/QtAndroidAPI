#pragma once

#ifndef JAVA_LANG_VOID
#define JAVA_LANG_VOID

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Void : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject Void::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Void",
			"TYPE",
			"Ljava/lang/Class;");
	}
	
	// Constructors
	void Void::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Void",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Void : public __jni_impl::java::lang::Void
	{
	public:
		Void(QAndroidJniObject obj) { __thiz = obj; }
		Void()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_VOID

