#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Void : public __JniBaseClass
	{
	public:
		// Fields
		static jclass TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	jclass Void::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Void",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
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

