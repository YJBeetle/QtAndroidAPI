#pragma once

#include "../../JObject.hpp"

class JArray;
class JObject;
class JString;
namespace java::util
{
	class TimeZone;
}

namespace java::net
{
	class HttpCookie : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HttpCookie(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HttpCookie(QAndroidJniObject obj);
		
		// Constructors
		HttpCookie(JString arg0, JString arg1);
		
		// Methods
		static jboolean domainMatches(JString arg0, JString arg1);
		static JObject parse(JString arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		JString getComment();
		JString getCommentURL();
		jboolean getDiscard();
		JString getDomain();
		jlong getMaxAge();
		JString getName();
		JString getPath();
		JString getPortlist();
		jboolean getSecure();
		JString getValue();
		jint getVersion();
		jboolean hasExpired();
		jint hashCode();
		jboolean isHttpOnly();
		void setComment(JString arg0);
		void setCommentURL(JString arg0);
		void setDiscard(jboolean arg0);
		void setDomain(JString arg0);
		void setHttpOnly(jboolean arg0);
		void setMaxAge(jlong arg0);
		void setPath(JString arg0);
		void setPortlist(JString arg0);
		void setSecure(jboolean arg0);
		void setValue(JString arg0);
		void setVersion(jint arg0);
		JString toString();
	};
} // namespace java::net

