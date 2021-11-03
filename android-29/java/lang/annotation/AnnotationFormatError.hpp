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
		
		// QJniObject forward
		template<typename ...Ts> explicit AnnotationFormatError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		AnnotationFormatError(QJniObject obj);
		
		// Constructors
		AnnotationFormatError(JString arg0);
		AnnotationFormatError(JThrowable arg0);
		AnnotationFormatError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang::annotation

