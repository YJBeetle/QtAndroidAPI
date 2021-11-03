#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace javax::xml::validation
{
	class Validator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Validator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Validator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getErrorHandler();
		jboolean getFeature(JString arg0);
		JObject getProperty(JString arg0);
		JObject getResourceResolver();
		void reset();
		void setErrorHandler(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setProperty(JString arg0, JObject arg1);
		void setResourceResolver(JObject arg0);
		void validate(JObject arg0);
		void validate(JObject arg0, JObject arg1);
	};
} // namespace javax::xml::validation

