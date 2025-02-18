#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JObject;
class JString;

namespace android::app
{
	class ComponentCaller : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ComponentCaller(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ComponentCaller(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint checkContentUriPermission(android::net::Uri arg0, jint arg1) const;
		jboolean equals(JObject arg0) const;
		JString getPackage() const;
		jint getUid() const;
		jint hashCode() const;
	};
} // namespace android::app

