#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
namespace javax::xml::validation
{
	class TypeInfoProvider;
}

namespace javax::xml::validation
{
	class ValidatorHandler : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ValidatorHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ValidatorHandler(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getContentHandler() const;
		JObject getErrorHandler() const;
		jboolean getFeature(JString arg0) const;
		JObject getProperty(JString arg0) const;
		JObject getResourceResolver() const;
		javax::xml::validation::TypeInfoProvider getTypeInfoProvider() const;
		void setContentHandler(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setProperty(JString arg0, JObject arg1) const;
		void setResourceResolver(JObject arg0) const;
	};
} // namespace javax::xml::validation

