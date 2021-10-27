#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::xml::sax::helpers
{
	class AttributesImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		AttributesImpl(QAndroidJniObject obj);
		// Constructors
		AttributesImpl();
		AttributesImpl(__JniBaseClass &arg0);
		
		// Methods
		void addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void addAttribute(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		void clear();
		jint getIndex(jstring arg0);
		jint getIndex(const QString &arg0);
		jint getIndex(jstring arg0, jstring arg1);
		jint getIndex(const QString &arg0, const QString &arg1);
		jint getLength();
		jstring getLocalName(jint arg0);
		jstring getQName(jint arg0);
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		jstring getType(const QString &arg0);
		jstring getType(jstring arg0, jstring arg1);
		jstring getType(const QString &arg0, const QString &arg1);
		jstring getURI(jint arg0);
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		jstring getValue(const QString &arg0);
		jstring getValue(jstring arg0, jstring arg1);
		jstring getValue(const QString &arg0, const QString &arg1);
		void removeAttribute(jint arg0);
		void setAttribute(jint arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		void setAttribute(jint arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5);
		void setAttributes(__JniBaseClass arg0);
		void setLocalName(jint arg0, jstring arg1);
		void setLocalName(jint arg0, const QString &arg1);
		void setQName(jint arg0, jstring arg1);
		void setQName(jint arg0, const QString &arg1);
		void setType(jint arg0, jstring arg1);
		void setType(jint arg0, const QString &arg1);
		void setURI(jint arg0, jstring arg1);
		void setURI(jint arg0, const QString &arg1);
		void setValue(jint arg0, jstring arg1);
		void setValue(jint arg0, const QString &arg1);
	};
} // namespace org::xml::sax::helpers

