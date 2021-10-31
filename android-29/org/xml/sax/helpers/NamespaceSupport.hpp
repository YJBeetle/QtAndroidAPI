#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::xml::sax::helpers
{
	class NamespaceSupport : public __JniBaseClass
	{
	public:
		// Fields
		static jstring NSDECL();
		static jstring XMLNS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NamespaceSupport(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NamespaceSupport(QAndroidJniObject obj);
		
		// Constructors
		NamespaceSupport();
		
		// Methods
		jboolean declarePrefix(jstring arg0, jstring arg1);
		__JniBaseClass getDeclaredPrefixes();
		jstring getPrefix(jstring arg0);
		__JniBaseClass getPrefixes();
		__JniBaseClass getPrefixes(jstring arg0);
		jstring getURI(jstring arg0);
		jboolean isNamespaceDeclUris();
		void popContext();
		jarray processName(jstring arg0, jarray arg1, jboolean arg2);
		void pushContext();
		void reset();
		void setNamespaceDeclUris(jboolean arg0);
	};
} // namespace org::xml::sax::helpers

