#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./TransformerException.hpp"


namespace javax::xml::transform
{
	class TransformerConfigurationException : public javax::xml::transform::TransformerException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransformerConfigurationException(const char *className, const char *sig, Ts...agv) : javax::xml::transform::TransformerException(className, sig, std::forward<Ts>(agv)...) {}
		TransformerConfigurationException(QJniObject obj);
		
		// Constructors
		TransformerConfigurationException();
		TransformerConfigurationException(jstring arg0);
		TransformerConfigurationException(jthrowable arg0);
		TransformerConfigurationException(jstring arg0, jthrowable arg1);
		TransformerConfigurationException(jstring arg0, __JniBaseClass arg1);
		TransformerConfigurationException(jstring arg0, __JniBaseClass arg1, jthrowable arg2);
		
		// Methods
	};
} // namespace javax::xml::transform

