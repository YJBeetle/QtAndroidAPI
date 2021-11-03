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
		JObject getErrorHandler() const;
		jboolean getFeature(JString arg0) const;
		JObject getProperty(JString arg0) const;
		JObject getResourceResolver() const;
		void reset() const;
		void setErrorHandler(JObject arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setProperty(JString arg0, JObject arg1) const;
		void setResourceResolver(JObject arg0) const;
		void validate(JObject arg0) const;
		void validate(JObject arg0, JObject arg1) const;
	};
} // namespace javax::xml::validation

