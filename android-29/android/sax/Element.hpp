#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::sax
{
	class Element : public __JniBaseClass
	{
	public:
		// Fields
		
		Element(QAndroidJniObject obj);
		// Constructors
		Element() = default;
		
		// Methods
		QAndroidJniObject getChild(jstring arg0);
		QAndroidJniObject getChild(const QString &arg0);
		QAndroidJniObject getChild(jstring arg0, jstring arg1);
		QAndroidJniObject getChild(const QString &arg0, const QString &arg1);
		QAndroidJniObject requireChild(jstring arg0);
		QAndroidJniObject requireChild(const QString &arg0);
		QAndroidJniObject requireChild(jstring arg0, jstring arg1);
		QAndroidJniObject requireChild(const QString &arg0, const QString &arg1);
		void setElementListener(__JniBaseClass arg0);
		void setEndElementListener(__JniBaseClass arg0);
		void setEndTextElementListener(__JniBaseClass arg0);
		void setStartElementListener(__JniBaseClass arg0);
		void setTextElementListener(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace android::sax

