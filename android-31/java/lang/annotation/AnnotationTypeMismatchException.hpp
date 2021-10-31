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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnnotationTypeMismatchException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		AnnotationTypeMismatchException(QAndroidJniObject obj);
		
		// Constructors
		AnnotationTypeMismatchException(java::lang::reflect::Method arg0, jstring arg1);
		
		// Methods
		java::lang::reflect::Method element();
		jstring foundType();
	};
} // namespace java::lang::annotation

