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
		
		NamespaceSupport(QAndroidJniObject obj);
		// Constructors
		NamespaceSupport();
		
		// Methods
		jboolean declarePrefix(jstring arg0, jstring arg1);
		jboolean declarePrefix(const QString &arg0, const QString &arg1);
		QAndroidJniObject getDeclaredPrefixes();
		jstring getPrefix(jstring arg0);
		jstring getPrefix(const QString &arg0);
		QAndroidJniObject getPrefixes();
		QAndroidJniObject getPrefixes(jstring arg0);
		QAndroidJniObject getPrefixes(const QString &arg0);
		jstring getURI(jstring arg0);
		jstring getURI(const QString &arg0);
		jboolean isNamespaceDeclUris();
		void popContext();
		jarray processName(jstring arg0, jarray arg1, jboolean arg2);
		jarray processName(const QString &arg0, jarray arg1, jboolean arg2);
		void pushContext();
		void reset();
		void setNamespaceDeclUris(jboolean arg0);
	};
} // namespace org::xml::sax::helpers

