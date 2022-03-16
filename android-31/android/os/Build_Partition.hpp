#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::os
{
	class Build_Partition : public JObject
	{
	public:
		// Fields
		static JString PARTITION_NAME_SYSTEM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Build_Partition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Build_Partition(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getBuildTimeMillis() const;
		JString getFingerprint() const;
		JString getName() const;
		jint hashCode() const;
	};
} // namespace android::os

