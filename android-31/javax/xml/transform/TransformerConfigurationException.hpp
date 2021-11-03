#pragma once

#include "./TransformerException.hpp"

class JString;
class JThrowable;

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
		TransformerConfigurationException(JString arg0);
		TransformerConfigurationException(JThrowable arg0);
		TransformerConfigurationException(JString arg0, JThrowable arg1);
		TransformerConfigurationException(JString arg0, JObject arg1);
		TransformerConfigurationException(JString arg0, JObject arg1, JThrowable arg2);
		
		// Methods
	};
} // namespace javax::xml::transform

