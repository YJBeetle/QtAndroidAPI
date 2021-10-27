#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::_namespace
{
	class QName : public __JniBaseClass
	{
	public:
		// Fields
		
		QName(QAndroidJniObject obj);
		// Constructors
		QName(jstring &arg0);
		QName(const QString &arg0);
		QName(jstring &arg0, jstring &arg1);
		QName(const QString &arg0, const QString &arg1);
		QName(jstring &arg0, jstring &arg1, jstring &arg2);
		QName(const QString &arg0, const QString &arg1, const QString &arg2);
		QName() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring getLocalPart();
		jstring getNamespaceURI();
		jstring getPrefix();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::xml::_namespace

