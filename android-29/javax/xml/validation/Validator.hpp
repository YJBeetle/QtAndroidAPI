#pragma once

#include "../../../JObject.hpp"


namespace javax::xml::validation
{
	class Validator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Validator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Validator(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jobject getProperty(jstring arg0);
		JObject getResourceResolver();
		void reset();
		void setErrorHandler(JObject arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setResourceResolver(JObject arg0);
		void validate(JObject arg0);
		void validate(JObject arg0, JObject arg1);
	};
} // namespace javax::xml::validation

