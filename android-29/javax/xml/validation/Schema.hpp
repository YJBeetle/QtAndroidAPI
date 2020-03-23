#pragma once

#ifndef JAVAX_XML_VALIDATION_SCHEMA
#define JAVAX_XML_VALIDATION_SCHEMA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::xml::validation
{
	class Validator;
}
namespace __jni_impl::javax::xml::validation
{
	class ValidatorHandler;
}

namespace __jni_impl::javax::xml::validation
{
	class Schema : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject newValidator();
		QAndroidJniObject newValidatorHandler();
	};
} // namespace __jni_impl::javax::xml::validation

#include "Validator.hpp"
#include "ValidatorHandler.hpp"

namespace __jni_impl::javax::xml::validation
{
	// Fields
	
	// Constructors
	void Schema::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.validation.Schema",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Schema::newValidator()
	{
		return __thiz.callObjectMethod(
			"newValidator",
			"()Ljavax/xml/validation/Validator;");
	}
	QAndroidJniObject Schema::newValidatorHandler()
	{
		return __thiz.callObjectMethod(
			"newValidatorHandler",
			"()Ljavax/xml/validation/ValidatorHandler;");
	}
} // namespace __jni_impl::javax::xml::validation

namespace javax::xml::validation
{
	class Schema : public __jni_impl::javax::xml::validation::Schema
	{
	public:
		Schema(QAndroidJniObject obj) { __thiz = obj; }
		Schema()
		{
			__constructor();
		}
	};
} // namespace javax::xml::validation

#endif // JAVAX_XML_VALIDATION_SCHEMA

