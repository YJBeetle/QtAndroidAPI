#pragma once

#ifndef ORG_W3C_DOM_LS_LSEXCEPTION
#define ORG_W3C_DOM_LS_LSEXCEPTION

#include "../../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::org::w3c::dom::ls
{
	class LSException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		jshort code();
		static jshort PARSE_ERR();
		static jshort SERIALIZE_ERR();
		
		// Constructors
		void __constructor(jshort arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::org::w3c::dom::ls


namespace __jni_impl::org::w3c::dom::ls
{
	// Fields
	jshort LSException::code()
	{
		return __thiz.getField<jshort>(
			"code");
	}
	jshort LSException::PARSE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.ls.LSException",
			"PARSE_ERR");
	}
	jshort LSException::SERIALIZE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.ls.LSException",
			"SERIALIZE_ERR");
	}
	
	// Constructors
	void LSException::__constructor(jshort arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"org.w3c.dom.ls.LSException",
			"(SLjava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::org::w3c::dom::ls

namespace org::w3c::dom::ls
{
	class LSException : public __jni_impl::org::w3c::dom::ls::LSException
	{
	public:
		LSException(QAndroidJniObject obj) { __thiz = obj; }
		LSException(jshort arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace org::w3c::dom::ls

#endif // ORG_W3C_DOM_LS_LSEXCEPTION

