#pragma once

#include "../../../../JObject.hpp"


namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MandatoryStreamCombination(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MandatoryStreamCombination(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getDescription();
		JObject getStreamsInformation();
		jint hashCode();
		jboolean isReprocessable();
	};
} // namespace android::hardware::camera2::params

