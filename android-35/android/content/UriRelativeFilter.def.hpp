#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JObject;
class JString;

namespace android::content
{
	class UriRelativeFilter : public JObject
	{
	public:
		// Fields
		static jint FRAGMENT();
		static jint PATH();
		static jint QUERY();
		
		// QJniObject forward
		template<typename ...Ts> explicit UriRelativeFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UriRelativeFilter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UriRelativeFilter(jint arg0, jint arg1, JString arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getFilter() const;
		jint getPatternType() const;
		jint getUriPart() const;
		jint hashCode() const;
		jboolean matchData(android::net::Uri arg0) const;
		JString toString() const;
	};
} // namespace android::content

