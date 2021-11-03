#pragma once

#include "../../../../JObject.hpp"


namespace android::hardware::camera2::params
{
	class MultiResolutionStreamConfigurationMap : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiResolutionStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionStreamConfigurationMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jintArray getInputFormats();
		JObject getInputInfo(jint arg0);
		jintArray getOutputFormats();
		JObject getOutputInfo(jint arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

