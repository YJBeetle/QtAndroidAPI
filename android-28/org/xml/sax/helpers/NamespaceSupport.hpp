#pragma once

#include "../../../../JObject.hpp"

class JArray;
class JArray;
class JString;

namespace org::xml::sax::helpers
{
	class NamespaceSupport : public JObject
	{
	public:
		// Fields
		static JString NSDECL();
		static JString XMLNS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NamespaceSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NamespaceSupport(QAndroidJniObject obj);
		
		// Constructors
		NamespaceSupport();
		
		// Methods
		jboolean declarePrefix(JString arg0, JString arg1);
		JObject getDeclaredPrefixes();
		JString getPrefix(JString arg0);
		JObject getPrefixes();
		JObject getPrefixes(JString arg0);
		JString getURI(JString arg0);
		jboolean isNamespaceDeclUris();
		void popContext();
		JArray processName(JString arg0, JArray arg1, jboolean arg2);
		void pushContext();
		void reset();
		void setNamespaceDeclUris(jboolean arg0);
	};
} // namespace org::xml::sax::helpers

