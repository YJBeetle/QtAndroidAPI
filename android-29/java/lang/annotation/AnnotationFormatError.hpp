#pragma once

#include "../../../JObject.hpp"
#include "../Error.hpp"


namespace java::lang::annotation
{
	class AnnotationFormatError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnnotationFormatError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		AnnotationFormatError(QAndroidJniObject obj);
		
		// Constructors
		AnnotationFormatError(jstring arg0);
		AnnotationFormatError(jthrowable arg0);
		AnnotationFormatError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang::annotation

