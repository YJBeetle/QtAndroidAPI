#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_PropertyConfig : public JObject
	{
	public:
		// Fields
		static jint CARDINALITY_OPTIONAL();
		static jint CARDINALITY_REPEATED();
		static jint CARDINALITY_REQUIRED();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_PropertyConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_PropertyConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getCardinality() const;
		JString getName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::app::appsearch

