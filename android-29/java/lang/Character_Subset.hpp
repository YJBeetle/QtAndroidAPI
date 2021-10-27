#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Character_Subset : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Character_Subset::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Character$Subset",
			"(V)V");
	}
	
	// Methods
	jboolean Character_Subset::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Character_Subset::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Character_Subset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Character_Subset : public __jni_impl::java::lang::Character_Subset
	{
	public:
		Character_Subset(QAndroidJniObject obj) { __thiz = obj; }
		Character_Subset()
		{
			__constructor();
		}
	};
} // namespace java::lang

