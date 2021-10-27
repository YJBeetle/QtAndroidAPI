#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class TimeZone;
}

namespace java::net
{
	class HttpCookie : public __JniBaseClass
	{
	public:
		// Fields
		
		HttpCookie(QAndroidJniObject obj);
		// Constructors
		HttpCookie(jstring &arg0, jstring &arg1);
		HttpCookie(const QString &arg0, const QString &arg1);
		HttpCookie() = default;
		
		// Methods
		static jboolean domainMatches(jstring arg0, jstring arg1);
		static jboolean domainMatches(const QString &arg0, const QString &arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring getComment();
		jstring getCommentURL();
		jboolean getDiscard();
		jstring getDomain();
		jlong getMaxAge();
		jstring getName();
		jstring getPath();
		jstring getPortlist();
		jboolean getSecure();
		jstring getValue();
		jint getVersion();
		jboolean hasExpired();
		jint hashCode();
		jboolean isHttpOnly();
		void setComment(jstring arg0);
		void setComment(const QString &arg0);
		void setCommentURL(jstring arg0);
		void setCommentURL(const QString &arg0);
		void setDiscard(jboolean arg0);
		void setDomain(jstring arg0);
		void setDomain(const QString &arg0);
		void setHttpOnly(jboolean arg0);
		void setMaxAge(jlong arg0);
		void setPath(jstring arg0);
		void setPath(const QString &arg0);
		void setPortlist(jstring arg0);
		void setPortlist(const QString &arg0);
		void setSecure(jboolean arg0);
		void setValue(jstring arg0);
		void setValue(const QString &arg0);
		void setVersion(jint arg0);
		jstring toString();
	};
} // namespace java::net

