#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class PropertyPath_PathSegment;
}
class JObject;
class JString;

namespace android::app::appsearch
{
	class PropertyPath : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyPath(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyPath(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PropertyPath(JString arg0);
		PropertyPath(JObject arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::app::appsearch::PropertyPath_PathSegment get(jint arg0) const;
		jint hashCode() const;
		JObject iterator() const;
		jint size() const;
		JString toString() const;
	};
} // namespace android::app::appsearch

