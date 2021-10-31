#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Build_Partition : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PARTITION_NAME_SYSTEM();
		
		// QJniObject forward
		template<typename ...Ts> explicit Build_Partition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Build_Partition(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getBuildTimeMillis();
		jstring getFingerprint();
		jstring getName();
		jint hashCode();
	};
} // namespace android::os

