#pragma once

#include "../RuntimeException.hpp"

class JString;
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
		AnnotationTypeMismatchException(java::lang::reflect::Method arg0, JString arg1);
		
		// Methods
		java::lang::reflect::Method element() const;
		JString foundType() const;
	};
} // namespace java::lang::annotation

