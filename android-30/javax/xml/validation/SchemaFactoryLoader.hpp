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
		
		// QJniObject forward
		template<typename ...Ts> explicit SchemaFactoryLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SchemaFactoryLoader(QJniObject obj);
		
		// Constructors
		
		// Methods
		javax::xml::validation::SchemaFactory newFactory(JString arg0);
	};
} // namespace javax::xml::validation

