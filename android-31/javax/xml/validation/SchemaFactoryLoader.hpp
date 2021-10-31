#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::xml::validation
{
	class SchemaFactory;
}

namespace javax::xml::validation
{
	class SchemaFactoryLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SchemaFactoryLoader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SchemaFactoryLoader(QJniObject obj);
		
		// Constructors
		
		// Methods
		javax::xml::validation::SchemaFactory newFactory(jstring arg0);
	};
} // namespace javax::xml::validation

