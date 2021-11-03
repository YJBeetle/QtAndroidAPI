#pragma once

#include "../../../JObject.hpp"


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
		jboolean equals(jobject arg0);
		jint getCardinality();
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::app::appsearch

