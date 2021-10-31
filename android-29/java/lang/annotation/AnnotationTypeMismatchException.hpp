#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

namespace java::lang::reflect
{
	class Method;
}

namespace java::lang::annotation
{
	class AnnotationTypeMismatchException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		AnnotationTypeMismatchException(QAndroidJniObject obj);
		// Constructors
		AnnotationTypeMismatchException(java::lang::reflect::Method arg0, jstring arg1);
		AnnotationTypeMismatchException() = default;
		
		// Methods
		QAndroidJniObject element();
		jstring foundType();
	};
} // namespace java::lang::annotation

