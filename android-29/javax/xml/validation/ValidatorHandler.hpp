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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ValidatorHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ValidatorHandler(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getContentHandler();
		JObject getErrorHandler();
		jboolean getFeature(JString arg0);
		JObject getProperty(JString arg0);
		JObject getResourceResolver();
		javax::xml::validation::TypeInfoProvider getTypeInfoProvider();
		void setContentHandler(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setProperty(JString arg0, JObject arg1);
		void setResourceResolver(JObject arg0);
	};
} // namespace javax::xml::validation

