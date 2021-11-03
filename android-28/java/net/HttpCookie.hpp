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
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString getComment() const;
		JString getCommentURL() const;
		jboolean getDiscard() const;
		JString getDomain() const;
		jlong getMaxAge() const;
		JString getName() const;
		JString getPath() const;
		JString getPortlist() const;
		jboolean getSecure() const;
		JString getValue() const;
		jint getVersion() const;
		jboolean hasExpired() const;
		jint hashCode() const;
		jboolean isHttpOnly() const;
		void setComment(JString arg0) const;
		void setCommentURL(JString arg0) const;
		void setDiscard(jboolean arg0) const;
		void setDomain(JString arg0) const;
		void setHttpOnly(jboolean arg0) const;
		void setMaxAge(jlong arg0) const;
		void setPath(JString arg0) const;
		void setPortlist(JString arg0) const;
		void setSecure(jboolean arg0) const;
		void setValue(JString arg0) const;
		void setVersion(jint arg0) const;
		JString toString() const;
	};
} // namespace java::net

