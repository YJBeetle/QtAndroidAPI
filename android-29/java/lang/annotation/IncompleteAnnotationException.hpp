#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace java::lang::annotation
{
	class IncompleteAnnotationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		IncompleteAnnotationException(QAndroidJniObject obj);
		// Constructors
		IncompleteAnnotationException(jclass &arg0, jstring &arg1);
		IncompleteAnnotationException(jclass &arg0, const QString &arg1);
		IncompleteAnnotationException() = default;
		
		// Methods
		jclass annotationType();
		jstring elementName();
	};
} // namespace java::lang::annotation

