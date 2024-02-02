#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch
{
	class PropertyPath_PathSegment : public JObject
	{
	public:
		// Fields
		static jint NON_REPEATED_CARDINALITY();
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyPath_PathSegment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyPath_PathSegment(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::app::appsearch::PropertyPath_PathSegment create(JString arg0);
		static android::app::appsearch::PropertyPath_PathSegment create(JString arg0, jint arg1);
		jboolean equals(JObject arg0) const;
		jint getPropertyIndex() const;
		JString getPropertyName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::app::appsearch

