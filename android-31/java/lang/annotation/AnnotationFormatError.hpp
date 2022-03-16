#pragma once

#include "../Error.hpp"

class JString;
class JThrowable;

namespace java::lang::annotation
{
	class AnnotationFormatError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnnotationFormatError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		AnnotationFormatError(QAndroidJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		AnnotationFormatError(JString arg0);
		AnnotationFormatError(JThrowable arg0);
		AnnotationFormatError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang::annotation

