#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class AppSearchSchema_PropertyConfig : public __JniBaseClass
	{
	public:
		// Fields
		static jint CARDINALITY_OPTIONAL();
		static jint CARDINALITY_REPEATED();
		static jint CARDINALITY_REQUIRED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_PropertyConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_PropertyConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getCardinality();
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::app::appsearch

