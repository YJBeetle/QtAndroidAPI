#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../helpers/DefaultHandler.hpp"

namespace org::xml::sax
{
	class InputSource;
}

namespace org::xml::sax::ext
{
	class DefaultHandler2 : public org::xml::sax::helpers::DefaultHandler
	{
	public:
		// Fields
		
		DefaultHandler2(QAndroidJniObject obj);
		// Constructors
		DefaultHandler2();
		
		// Methods
		void attributeDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void attributeDecl(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		void comment(jcharArray arg0, jint arg1, jint arg2);
		void elementDecl(jstring arg0, jstring arg1);
		void elementDecl(const QString &arg0, const QString &arg1);
		void endCDATA();
		void endDTD();
		void endEntity(jstring arg0);
		void endEntity(const QString &arg0);
		void externalEntityDecl(jstring arg0, jstring arg1, jstring arg2);
		void externalEntityDecl(const QString &arg0, const QString &arg1, const QString &arg2);
		QAndroidJniObject getExternalSubset(jstring arg0, jstring arg1);
		QAndroidJniObject getExternalSubset(const QString &arg0, const QString &arg1);
		void internalEntityDecl(jstring arg0, jstring arg1);
		void internalEntityDecl(const QString &arg0, const QString &arg1);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1);
		QAndroidJniObject resolveEntity(const QString &arg0, const QString &arg1);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		QAndroidJniObject resolveEntity(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		void startCDATA();
		void startDTD(jstring arg0, jstring arg1, jstring arg2);
		void startDTD(const QString &arg0, const QString &arg1, const QString &arg2);
		void startEntity(jstring arg0);
		void startEntity(const QString &arg0);
	};
} // namespace org::xml::sax::ext

