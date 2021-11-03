#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./TransformerException.hpp"


namespace javax::xml::transform
{
	class TransformerConfigurationException : public javax::xml::transform::TransformerException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransformerConfigurationException(const char *className, const char *sig, Ts...agv) : javax::xml::transform::TransformerException(className, sig, std::forward<Ts>(agv)...) {}
		TransformerConfigurationException(QAndroidJniObject obj);
		
		// Constructors
		TransformerConfigurationException();
		TransformerConfigurationException(jstring arg0);
		TransformerConfigurationException(jthrowable arg0);
		TransformerConfigurationException(jstring arg0, jthrowable arg1);
		TransformerConfigurationException(jstring arg0, JObject arg1);
		TransformerConfigurationException(jstring arg0, JObject arg1, jthrowable arg2);
		
		// Methods
	};
} // namespace javax::xml::transform

