#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class Build_Partition : public JObject
	{
	public:
		// Fields
		static jstring PARTITION_NAME_SYSTEM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Build_Partition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Build_Partition(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getBuildTimeMillis();
		jstring getFingerprint();
		jstring getName();
		jint hashCode();
	};
} // namespace android::os

