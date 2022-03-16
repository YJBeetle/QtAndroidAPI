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
		
		// QJniObject forward
		template<typename ...Ts> explicit NamespaceSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NamespaceSupport(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NamespaceSupport();
		
		// Methods
		jboolean declarePrefix(JString arg0, JString arg1) const;
		JObject getDeclaredPrefixes() const;
		JString getPrefix(JString arg0) const;
		JObject getPrefixes() const;
		JObject getPrefixes(JString arg0) const;
		JString getURI(JString arg0) const;
		jboolean isNamespaceDeclUris() const;
		void popContext() const;
		JArray processName(JString arg0, JArray arg1, jboolean arg2) const;
		void pushContext() const;
		void reset() const;
		void setNamespaceDeclUris(jboolean arg0) const;
	};
} // namespace org::xml::sax::helpers

