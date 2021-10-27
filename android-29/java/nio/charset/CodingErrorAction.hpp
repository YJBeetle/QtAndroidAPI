#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio::charset
{
	class CodingErrorAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject IGNORE();
		static QAndroidJniObject REPLACE();
		static QAndroidJniObject REPORT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::java::nio::charset


namespace __jni_impl::java::nio::charset
{
	// Fields
	QAndroidJniObject CodingErrorAction::IGNORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"IGNORE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	QAndroidJniObject CodingErrorAction::REPLACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPLACE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	QAndroidJniObject CodingErrorAction::REPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPORT",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	
	// Constructors
	void CodingErrorAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CodingErrorAction",
			"(V)V");
	}
	
	// Methods
	jstring CodingErrorAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class CodingErrorAction : public __jni_impl::java::nio::charset::CodingErrorAction
	{
	public:
		CodingErrorAction(QAndroidJniObject obj) { __thiz = obj; }
		CodingErrorAction()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

