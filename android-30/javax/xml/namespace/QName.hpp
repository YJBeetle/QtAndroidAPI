#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::_namespace
{
	class QName : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QName(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		QName(QAndroidJniObject obj);
		
		// Constructors
		QName(jstring arg0);
		QName(jstring arg0, jstring arg1);
		QName(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		static javax::xml::_namespace::QName valueOf(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getLocalPart();
		jstring getNamespaceURI();
		jstring getPrefix();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::xml::_namespace

