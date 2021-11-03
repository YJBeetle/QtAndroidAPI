#pragma once

#include "../../../../JObject.hpp"


namespace org::xml::sax::helpers
{
	class NamespaceSupport : public JObject
	{
	public:
		// Fields
		static jstring NSDECL();
		static jstring XMLNS();
		
		// QJniObject forward
		template<typename ...Ts> explicit NamespaceSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NamespaceSupport(QJniObject obj);
		
		// Constructors
		NamespaceSupport();
		
		// Methods
		jboolean declarePrefix(jstring arg0, jstring arg1);
		JObject getDeclaredPrefixes();
		jstring getPrefix(jstring arg0);
		JObject getPrefixes();
		JObject getPrefixes(jstring arg0);
		jstring getURI(jstring arg0);
		jboolean isNamespaceDeclUris();
		void popContext();
		jarray processName(jstring arg0, jarray arg1, jboolean arg2);
		void pushContext();
		void reset();
		void setNamespaceDeclUris(jboolean arg0);
	};
} // namespace org::xml::sax::helpers

