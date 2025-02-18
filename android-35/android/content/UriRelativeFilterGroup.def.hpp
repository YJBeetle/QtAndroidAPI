#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class UriRelativeFilter;
}
namespace android::net
{
	class Uri;
}
class JObject;
class JString;

namespace android::content
{
	class UriRelativeFilterGroup : public JObject
	{
	public:
		// Fields
		static jint ACTION_ALLOW();
		static jint ACTION_BLOCK();
		
		// QJniObject forward
		template<typename ...Ts> explicit UriRelativeFilterGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UriRelativeFilterGroup(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UriRelativeFilterGroup(jint arg0);
		
		// Methods
		void addUriRelativeFilter(android::content::UriRelativeFilter arg0) const;
		jboolean equals(JObject arg0) const;
		jint getAction() const;
		JObject getUriRelativeFilters() const;
		jint hashCode() const;
		jboolean matchData(android::net::Uri arg0) const;
		JString toString() const;
	};
} // namespace android::content

