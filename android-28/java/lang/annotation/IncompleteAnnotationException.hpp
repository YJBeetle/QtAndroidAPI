#pragma once

#include "../RuntimeException.hpp"

class JClass;
class JString;

namespace java::lang::annotation
{
	class IncompleteAnnotationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IncompleteAnnotationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IncompleteAnnotationException(QJniObject obj);
		
		// Constructors
		IncompleteAnnotationException(JClass arg0, JString arg1);
		
		// Methods
		JClass annotationType() const;
		JString elementName() const;
	};
} // namespace java::lang::annotation

