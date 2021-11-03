#pragma once

#include "../../../JObject.hpp"

class JString;
namespace javax::xml::validation
{
	class SchemaFactory;
}

namespace javax::xml::validation
{
	class SchemaFactoryLoader : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SchemaFactoryLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SchemaFactoryLoader(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		javax::xml::validation::SchemaFactory newFactory(JString arg0) const;
	};
} // namespace javax::xml::validation

