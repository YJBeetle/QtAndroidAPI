#pragma once

#include "../../../JObject.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace java::lang::annotation
{
	class IncompleteAnnotationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IncompleteAnnotationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IncompleteAnnotationException(QAndroidJniObject obj);
		
		// Constructors
		IncompleteAnnotationException(jclass arg0, jstring arg1);
		
		// Methods
		jclass annotationType();
		jstring elementName();
	};
} // namespace java::lang::annotation

