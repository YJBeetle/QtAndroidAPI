#pragma once

#include "../../../JObject.hpp"

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
		ValidatorHandler(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getContentHandler();
		JObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jobject getProperty(jstring arg0);
		JObject getResourceResolver();
		javax::xml::validation::TypeInfoProvider getTypeInfoProvider();
		void setContentHandler(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setResourceResolver(JObject arg0);
	};
} // namespace javax::xml::validation

